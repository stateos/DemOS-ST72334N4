#include <os.h>

OS_SEM(sem, 0);

OS_TSK_DEF(cons)
{
	tsk_begin();

	sem_wait(sem);
//	led_toggle();

	tsk_end();
}

OS_TSK_DEF(prod)
{
	tsk_begin();

	tsk_delay(1000);
	sem_give(sem);

	tsk_end();
}

void main()
{
//	led_init();
	tsk_start(cons);
	tsk_start(prod);
	sys_start();
}
