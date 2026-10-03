#include <zephyr/init.h>
#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

static int board_scratch_init(void)
{
	printk("Board Initialized\n");
	return 0;
}

/* POST_KERNEL executes after serial drivers are ready, but before entering main() */
SYS_INIT(board_scratch_init, POST_KERNEL, CONFIG_APPLICATION_INIT_PRIORITY);
