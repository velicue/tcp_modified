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
	{ 0xcf7218ef, "tcp_reno_cong_avoid" },
	{ 0x10f0ace0, "tcp_reno_ssthresh" },
	{ 0xd788126a, "tcp_unregister_congestion_control" },
	{ 0x7854e1ee, "tcp_register_congestion_control" },
	{ 0xac85eb71, "nla_put" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "678356EECFA095DD80A31F3");
