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
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x2a5e0eca, "nf_conntrack_helper_unregister" },
	{ 0x562c5ad0, "nf_conntrack_helper_register" },
	{ 0x7f0febf0, "nf_nat_snmp_hook" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0xef681a7e, "skb_make_writable" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x27e1a049, "printk" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x399c29ef, "kmem_cache_alloc_trace" },
	{ 0x62eb2c87, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_snmp";


MODULE_INFO(srcversion, "438ABB34197DD0DECD61706");
