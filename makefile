#**********************************************************#
#file     makefile
#author   Rajmund Szymanski
#date     28.08.2018
#brief    ST7 makefile.
#**********************************************************#

COSMIC     := c:/sys/cosmic/cxst7/
COSTM8     := c:/sys/cosmic/cxstm8/

#----------------------------------------------------------#

PROJECT    ?= $(notdir $(CURDIR))
DEFS       ?=
DIRS       ?=
INCS       ?=
LIBS       ?=
KEYS       ?=
SCRIPT     ?=

#----------------------------------------------------------#

DEFS       += ST72334
KEYS       += .csmc .st7 *
LIBS       += crtsx libisl libm
MODEL      := modsl

#----------------------------------------------------------#

AS         := $(COSMIC)cxst7
CC         := $(COSMIC)cxst7
LD         := $(COSMIC)clnk
AR         := $(COSTM8)clib
DUMP       := $(COSMIC)chex
COPY       := $(COSMIC)cvdwarf
LABS       := $(COSMIC)clabs
SIZE       := size

RM         ?= rm -f

#----------------------------------------------------------#

DTREE       = $(foreach d,$(foreach k,$(KEYS),$(wildcard $1$k)),$(dir $d) $(call DTREE,$d/))

VPATH      := $(sort $(call DTREE,) $(foreach d,$(DIRS),$(call DTREE,$d/)))

#----------------------------------------------------------#

INC_DIRS   := $(sort $(dir $(foreach d,$(VPATH),$(wildcard $d*.h))))
LIB_DIRS   := $(sort $(dir $(foreach d,$(VPATH),$(wildcard $d*.st7))))
AS_SRCS    :=              $(foreach d,$(VPATH),$(wildcard $d*.s))
C_SRCS     :=              $(foreach d,$(VPATH),$(wildcard $d*.c))
LIB_SRCS   :=     $(notdir $(foreach d,$(VPATH),$(wildcard $d*.st7)))
ifeq ($(strip $(SCRIPT)),)
SCRIPT     :=  $(firstword $(foreach d,$(VPATH),$(wildcard $d*.lkf)))
else
SCRIPT     :=  $(firstword $(foreach d,$(VPATH),$(wildcard $d$(SCRIPT))))
endif
ifeq ($(strip $(PROJECT)),)
PROJECT    :=     $(notdir $(CURDIR))
endif

#----------------------------------------------------------#

ELF        := $(PROJECT).elf
HEX        := $(PROJECT).s19
LIB        := $(PROJECT).st7
MAP        := $(PROJECT).map
ST7        := $(PROJECT).st7

OBJS       := $(AS_SRCS:%.s=%.o)
OBJS       += $(C_SRCS:%.c=%.o)
LSTS       := $(OBJS:.o=.ls)
TXTS       := $(OBJS:.o=.la)

#----------------------------------------------------------#

AS_FLAGS   := #-ax
AS_FLAGS   += -l -ep
C_FLAGS    := #+debug
C_FLAGS    += #+strict +warn
C_FLAGS    += +$(MODEL) -pc99 -l -pad
LD_FLAGS   := -m $(MAP) -p

#----------------------------------------------------------#

DEFS_F     := $(DEFS:%=-d%)

INC_DIRS   += $(INCS:%=%/)
INC_DIRS_F := $(INC_DIRS:%=-i%)

LIB_DIRS_F := $(LIB_DIRS:%=-l%)
LIBS_F     := $(LIBS:%=%.st7)
LIBS_F     += $(LIB_SRCS:$(ST7)=)

C_FLAGS    += $(DEFS_F) $(INC_DIRS_F)
LD_FLAGS   += $(LIB_DIRS_F)

#----------------------------------------------------------#

all : $(ELF) print_elf_size

lib : $(OBJS)
	$(info Creating library: $(LIB))
	$(AR) -c -p $(LIB) $?

$(ST7) : $(OBJS) $(SCRIPT)
	$(info Creating ST7 image: $(ST7))
ifeq ($(strip $(SCRIPT)),)
	$(error No linker file in project)
endif
	$(LD) -o $@ $(LD_FLAGS) $(SCRIPT) $(OBJS) $(LIBS_F)

$(OBJS) : $(MAKEFILE_LIST)

%.o : %.s
	$(AS) $(AS_FLAGS) $<

%.o : %.c
	$(CC) $(C_FLAGS) $<

$(HEX) : $(ST7)
	$(info Creating HEX image: $(HEX))
	$(DUMP) -o $@ $<

$(ELF) : $(ST7)
	$(info Creating ELF image: $(ELF))
	$(COPY) $<
#	$(info Creating absolute listings)
#	$(LABS) $<

print_elf_size : $(ELF)
	$(info Size of target file:)
	$(SIZE) -B $(ELF)

GENERATED = $(ELF) $(HEX) $(LIB) $(MAP) $(ST7) $(LSTS) $(OBJS) $(TXTS)

clean :
	$(info Removing all generated output files)
	$(RM) $(GENERATED)

.PHONY : all lib clean
