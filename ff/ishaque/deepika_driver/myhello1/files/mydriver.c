#include <linux/module.h>     /* Needed by all modules */
#include <linux/kernel.h>     /* Needed for KERN_INFO */
#include <linux/init.h>       /* Needed for the macros */

MODULE_LICENSE("GPL");

MODULE_AUTHOR("Raju kumar");

MODULE_DESCRIPTION("A simple Hello world LKM!");

MODULE_VERSION("0.1");
 
static int __init hello_start(void)
{
    printk(KERN_INFO "\n\n\n\n\nLoading hello module...\n");
    printk(KERN_INFO "Hello world\n\n\n\n\n");
    return 0;
}

static void __exit hello_end(void)
{
    printk(KERN_INFO "\n\n\n\n\nGoodbye Kernel\n\n\n\n\n");
}

module_init(hello_start);
module_exit(hello_end);
