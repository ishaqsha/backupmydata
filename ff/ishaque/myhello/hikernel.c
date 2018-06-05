#include <linux/init.h>
#include <linux/module.h>
   
static int my_init(void)
{
        printk(KERN_INFO "welcome to hissssssssssssssssssss driver\n");	             
	  return  0;
}
   
static void my_exit(void)
{
        printk(KERN_INFO "Go out from my driver\n");	             
                       return;
}
   
module_init(my_init);
module_exit(my_exit);


