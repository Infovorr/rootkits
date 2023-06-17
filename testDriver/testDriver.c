#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_AUTHOR("Infovorr");
MODULE_DESCRIPTION("Test driver");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.01");

static int __init test_init(void) {
	printk(KERN_INFO "Infovorr was here\n");
	return 0;
}

static void __exit test_exit(void) {
	printk(KERN_INFO "Fuckings to all\n");
}

module_init(test_init);
module_exit(test_exit);
