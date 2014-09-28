#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x3b69997a, "module_layout" },
	{ 0x29aa9678, "xt_hook_unlink" },
	{ 0xbf89d00f, "unregister_pernet_subsys" },
	{ 0x697aaa15, "xt_hook_link" },
	{ 0x74e7dea4, "register_pernet_subsys" },
	{ 0x561216, "ipt_do_table" },
	{ 0x37a0cba, "kfree" },
	{ 0xdeeaa146, "ipt_register_table" },
	{ 0x7758b0b, "ipt_alloc_initial_table" },
	{ 0xb98c903a, "ipt_unregister_table" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_tables";


MODULE_INFO(srcversion, "C7264B879F229D130E5B386");
