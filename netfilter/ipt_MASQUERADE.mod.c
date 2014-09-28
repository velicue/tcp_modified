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
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xc9252691, "xt_unregister_target" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x4dcd6361, "xt_register_target" },
	{ 0x27e1a049, "printk" },
	{ 0x49e37657, "nf_nat_setup_info" },
	{ 0x58517433, "inet_select_addr" },
	{ 0x613320a1, "nf_ct_iterate_cleanup" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "2306A97ABCFD5E6162D7AE7");
