/*
 * hello-4.c - Demonstrates module documentation
 */
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define DRIVER_AUTHOR "Higor Beleza <higorbeleza.dev@gmail.com>";
#define DRIVER_DESC "A sample driver";

static int __init hello_4_init(void)
{
	printk(KERN_INFO "Hello, world 4 \n");
	return 0;
}

static void __exit cleanup_hello_4(void)
{
	printk(KERN_INFO "Goodbye, world 4 \n");
}

module_init(hello_4_init);
module_exit(cleanup_hello_4);

/*
 * You can use string, like this:
 */
MODULE_LICENSE("GPL");

/*
 * Or with defines, like this:
 */
MODULE_AUTHOR(DRIVER_AUTHOR);		/* Who wrote this module? */
MODULE_DESCRIPTION(DRIVER_DESC);	/* What does this module do */

/*
 * This module uses /dev/testdevice. The MODULE_SUPPORTED_DEVICE macro might
 * be used in the future to help automatic configuration of modules, but is
 * currently unused other than for documentation purposes.
 */
MODULE_SUPPORTED_DEVICE("testedevice");
