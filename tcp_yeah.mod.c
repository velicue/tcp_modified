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
	{ 0x659c3e18, "tcp_vegas_get_info" },
	{ 0x24576c15, "tcp_vegas_cwnd_event" },
	{ 0xa9320d26, "tcp_vegas_state" },
	{ 0x83084667, "tcp_reno_min_cwnd" },
	{ 0xd788126a, "tcp_unregister_congestion_control" },
	{ 0x7854e1ee, "tcp_register_congestion_control" },
	{ 0xd815af11, "tcp_cong_avoid_ai" },
	{ 0xef654be9, "tcp_slow_start" },
	{ 0xdc7cfe6b, "tcp_is_cwnd_limited" },
	{ 0x66d95c6, "tcp_vegas_init" },
	{ 0xd6f0d34b, "tcp_vegas_pkts_acked" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tcp_vegas";


MODULE_INFO(srcversion, "5614C869E58C5A944B682A4");
