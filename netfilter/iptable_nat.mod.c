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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xc9252691, "xt_unregister_target" },
	{ 0xdeeaa146, "ipt_register_table" },
	{ 0x6d40a921, "need_ipv4_conntrack" },
	{ 0xa5ebc415, "dst_release" },
	{ 0xd3cedcd9, "ip_xfrm_me_harder" },
	{ 0xbf89d00f, "unregister_pernet_subsys" },
	{ 0xa147ae13, "nf_nat_icmp_reply_translation" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0xf9bdf940, "ip_nat_decode_session" },
	{ 0x501b2e8f, "ip_route_me_harder" },
	{ 0xb98c903a, "ipt_unregister_table" },
	{ 0x6a27df0a, "nf_unregister_hooks" },
	{ 0x4dcd6361, "xt_register_target" },
	{ 0x49e37657, "nf_nat_setup_info" },
	{ 0x74e7dea4, "register_pernet_subsys" },
	{ 0xe22ec1a, "__nf_ct_ext_add" },
	{ 0xfb241860, "nf_nat_packet" },
	{ 0x37a0cba, "kfree" },
	{ 0x805f3255, "nf_register_hooks" },
	{ 0x561216, "ipt_do_table" },
	{ 0x7758b0b, "ipt_alloc_initial_table" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_tables,nf_conntrack_ipv4,nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "AB02F7DBF06AAA4BFF6586F");
