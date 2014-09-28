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
	{ 0xb7b457b6, "nf_log_unregister" },
	{ 0x66e37ac5, "nf_log_register" },
	{ 0x4dcd6361, "xt_register_target" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x399c29ef, "kmem_cache_alloc_trace" },
	{ 0x62eb2c87, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf37260ab, "_raw_read_unlock_bh" },
	{ 0xfdee7d42, "_raw_read_lock_bh" },
	{ 0xc52fe726, "skb_copy_bits" },
	{ 0x27e1a049, "printk" },
	{ 0x10f2eb76, "vsnprintf" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "41550862D1AA40DD8EEBF40");
