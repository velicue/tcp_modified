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
	{ 0xd029bc91, "ip_local_out" },
	{ 0xfae9b854, "nf_ct_attach" },
	{ 0xc52fe726, "skb_copy_bits" },
	{ 0x15424c84, "icmp_send" },
	{ 0x83f28ad8, "kfree_skb" },
	{ 0xf6388c56, "sysctl_ip_default_ttl" },
	{ 0x501b2e8f, "ip_route_me_harder" },
	{ 0x89311bc3, "skb_dst_set_noref" },
	{ 0x4a8c8b8e, "skb_put" },
	{ 0x75f8ebf, "__alloc_skb" },
	{ 0xe16d97e2, "nf_ip_checksum" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "2FB56CD86FA8468D9830423");
