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
	{ 0xc9252691, "xt_unregister_target" },
	{ 0x4dcd6361, "xt_register_target" },
	{ 0x27e1a049, "printk" },
	{ 0xc52fe726, "skb_copy_bits" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xed12628c, "inet_proto_csum_replace4" },
	{ 0xef681a7e, "skb_make_writable" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "63C4C518186D75548DE3745");
