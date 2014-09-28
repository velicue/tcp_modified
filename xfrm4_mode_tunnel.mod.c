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
	{ 0xfde5b7b3, "xfrm4_prepare_output" },
	{ 0xc37cd3d, "xfrm_prepare_input" },
	{ 0xd4374060, "xfrm_unregister_mode" },
	{ 0xfa5908e6, "xfrm_register_mode" },
	{ 0xc2624dd, "__pskb_pull_tail" },
	{ 0xa3a5be95, "memmove" },
	{ 0xd22396c1, "pskb_expand_head" },
	{ 0xf6388c56, "sysctl_ip_default_ttl" },
	{ 0xa165f37, "__ip_select_ident" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9DB87B5CD4053636E91AF95");
