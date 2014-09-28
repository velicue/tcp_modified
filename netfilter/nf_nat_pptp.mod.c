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
	{ 0xfce6188d, "nf_nat_pptp_hook_expectfn" },
	{ 0x1f033062, "nf_nat_pptp_hook_exp_gre" },
	{ 0x28e64767, "nf_nat_pptp_hook_inbound" },
	{ 0x2f6f2324, "nf_nat_pptp_hook_outbound" },
	{ 0x636b12c8, "nf_nat_need_gre" },
	{ 0x57a14200, "__nf_nat_mangle_tcp_packet" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x49e37657, "nf_nat_setup_info" },
	{ 0x1ff7ca86, "nf_ct_expect_put" },
	{ 0x41cd73c2, "nf_ct_unexpect_related" },
	{ 0x4f857ddb, "nf_ct_expect_find_get" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_pptp,nf_nat_proto_gre,nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "62A4E87C442CBEB8D01548C");
