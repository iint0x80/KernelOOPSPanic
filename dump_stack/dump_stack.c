#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

static int __init kernelInit(void)
{
 pr_info("dump_stack init\n");
 dump_stack();
 pr_info("dump_stack after\n");
 return 0;
}

static void __exit kernelExit(void)
{
 pr_info("Unloading Kernel module");
}

module_init(kernelInit);
module_exit(kernelExit);
