/**
 * hello-1.c - The simplest kernel module
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_init(void)
{
    printk(KERN_INFO "Hello world 1.\n");

    return 0;
}

static void __exit hello_exit(void) 
{
    printk(KERN_INFO "Goobye, world 1.\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Higor Beleza");
MODULE_DESCRIPTION("Simple Hello World Kernel Module");
MODULE_VERSION("1.0");