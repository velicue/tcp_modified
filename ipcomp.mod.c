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
	{ 0x87a0791e, "xfrm4_rcv" },
	{ 0xb22a023b, "ipcomp_output" },
	{ 0x8c089ebe, "ipcomp_input" },
	{ 0xe64098ac, "ipcomp_destroy" },
	{ 0xf5f81690, "inet_del_protocol" },
	{ 0xcc78acb2, "xfrm_unregister_type" },
	{ 0xc9c639e5, "inet_add_protocol" },
	{ 0x251fc929, "xfrm_register_type" },
	{ 0x27e1a049, "printk" },
	{ 0xa20ce1b8, "net_msg_warn" },
	{ 0xdaa4f9fb, "__xfrm_state_destroy" },
	{ 0x5c00a52e, "xfrm_state_insert" },
	{ 0x1984ca8d, "xfrm_init_state" },
	{ 0x8c4dbf5e, "xfrm_state_alloc" },
	{ 0x901d393f, "xfrm_state_lookup" },
	{ 0x2af7d52f, "ipcomp_init_state" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";


MODULE_INFO(srcversion, "8AE29BA64E674F6C44F607A");
