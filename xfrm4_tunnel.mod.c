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
	{ 0x5e8be433, "xfrm4_tunnel_deregister" },
	{ 0xcc78acb2, "xfrm_unregister_type" },
	{ 0xde9fd899, "xfrm4_tunnel_register" },
	{ 0x27e1a049, "printk" },
	{ 0x251fc929, "xfrm_register_type" },
	{ 0x19c69528, "xfrm4_rcv_encap" },
	{ 0x39f105cb, "skb_push" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel4";


MODULE_INFO(srcversion, "92EF0178327C6B3BF6F9CFD");
