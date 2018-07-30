#include <os.h>

OS_SEM(sem, 0);

OS_TSK_DEF(sla)
{
	tsk_begin();

	sem_wait(sem);
//	led_toggle();

	tsk_end();
}

OS_TSK_DEF(mas)
{
	tsk_begin();

	tsk_delay(1000);
	sem_give(sem);

	tsk_end();
}

void main()
{
//	led_init();
	tsk_start(sla);
	tsk_start(mas);
	sys_start();
}
