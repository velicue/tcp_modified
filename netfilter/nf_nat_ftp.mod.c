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
	{ 0x28fa5cb4, "nf_nat_ftp_hook" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x41cd73c2, "nf_ct_unexpect_related" },
	{ 0x57a14200, "__nf_nat_mangle_tcp_packet" },
	{ 0x50720c5f, "snprintf" },
	{ 0xad84fed, "nf_ct_expect_related_report" },
	{ 0xed237373, "nf_nat_follow_master" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_ftp,nf_conntrack,nf_nat";


MODULE_INFO(srcversion, "1B094EDB1B2FDBC87218204");
