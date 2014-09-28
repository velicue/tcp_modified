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
	{ 0xd7fc636c, "nf_nat_sdp_media_hook" },
	{ 0x6cc7f91b, "nf_nat_sdp_session_hook" },
	{ 0x72fbdfb8, "nf_nat_sdp_port_hook" },
	{ 0xe857d279, "nf_nat_sdp_addr_hook" },
	{ 0x22fa273c, "nf_nat_sip_expect_hook" },
	{ 0x4bb01227, "nf_nat_sip_seq_adjust_hook" },
	{ 0xc58c08a4, "nf_nat_sip_hook" },
	{ 0xaa565008, "ct_sip_parse_request" },
	{ 0x94c31671, "ct_sip_parse_numerical_param" },
	{ 0x39641eca, "ct_sip_parse_address_param" },
	{ 0x756e6992, "strnicmp" },
	{ 0xc88197bb, "ct_sip_parse_header_uri" },
	{ 0x57b54e44, "nf_nat_set_seq_adjust" },
	{ 0x1eb7b5a0, "ct_sip_get_header" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x41cd73c2, "nf_ct_unexpect_related" },
	{ 0x91715312, "sprintf" },
	{ 0xad84fed, "nf_ct_expect_related_report" },
	{ 0x1ca1e8a0, "ct_sip_get_sdp_header" },
	{ 0x57a14200, "__nf_nat_mangle_tcp_packet" },
	{ 0xa8c7f47a, "nf_nat_mangle_udp_packet" },
	{ 0x49e37657, "nf_nat_setup_info" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_sip,nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "55E6C77DA52DE7151CE89C6");
