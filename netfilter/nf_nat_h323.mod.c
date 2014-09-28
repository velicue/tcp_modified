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
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x38c20698, "nat_q931_hook" },
	{ 0x4a855f70, "nat_callforwarding_hook" },
	{ 0xf75e894d, "nat_h245_hook" },
	{ 0x1d6514e3, "nat_t120_hook" },
	{ 0xca0218bc, "nat_rtp_rtcp_hook" },
	{ 0x35b077e6, "set_ras_addr_hook" },
	{ 0x9550135c, "set_sig_addr_hook" },
	{ 0x41b33858, "set_h225_addr_hook" },
	{ 0x1ca58d5e, "set_h245_addr_hook" },
	{ 0x41cd73c2, "nf_ct_unexpect_related" },
	{ 0xad84fed, "nf_ct_expect_related_report" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc5945953, "get_h225_addr" },
	{ 0xc52fe726, "skb_copy_bits" },
	{ 0x27e1a049, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x57a14200, "__nf_nat_mangle_tcp_packet" },
	{ 0xa8c7f47a, "nf_nat_mangle_udp_packet" },
	{ 0xed237373, "nf_nat_follow_master" },
	{ 0x49e37657, "nf_nat_setup_info" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_h323,nf_conntrack,nf_nat";


MODULE_INFO(srcversion, "1DAF0C36F4CB3A3390F4EFC");
