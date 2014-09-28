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
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x7854e1ee, "tcp_register_congestion_control" },
	{ 0xb4390f9a, "mcount" },
	{ 0xac85eb71, "nla_put" },
	{ 0xd788126a, "tcp_unregister_congestion_control" },
	{ 0x10f0ace0, "tcp_reno_ssthresh" },
	{ 0x83084667, "tcp_reno_min_cwnd" },
	{ 0xef654be9, "tcp_slow_start" },
	{ 0xcf7218ef, "tcp_reno_cong_avoid" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "515FFB1512E6DD563D472F4");
