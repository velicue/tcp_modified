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
	{ 0x157411f5, "seq_read" },
	{ 0x1384f971, "seq_lseek" },
	{ 0xf499fdb2, "rcu_barrier_bh" },
	{ 0xc9252691, "xt_unregister_target" },
	{ 0x7fe6578, "nf_unregister_hook" },
	{ 0xcc6018f7, "proc_mkdir" },
	{ 0xea016a67, "nf_register_hook" },
	{ 0x4dcd6361, "xt_register_target" },
	{ 0x236c8c64, "memcpy" },
	{ 0x8157d415, "dev_mc_add" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0x63c29ebd, "proc_create_data" },
	{ 0x91715312, "sprintf" },
	{ 0x7bf22049, "dev_get_by_name" },
	{ 0xa72c2f0c, "init_net" },
	{ 0x78f9b710, "nf_ct_l3proto_try_module_get" },
	{ 0xc52fe726, "skb_copy_bits" },
	{ 0x27e1a049, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8c5fdcc0, "seq_release" },
	{ 0xa60f9d25, "remove_proc_entry" },
	{ 0x4ccfcd99, "dev_mc_del" },
	{ 0xadaabe1b, "pv_lock_ops" },
	{ 0xb602c57e, "nf_ct_l3proto_module_put" },
	{ 0x362e23ec, "call_rcu_bh" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xec730387, "_atomic_dec_and_lock" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x59ca3dda, "seq_putc" },
	{ 0x21a7d814, "seq_printf" },
	{ 0x73ee6c18, "seq_open" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x399c29ef, "kmem_cache_alloc_trace" },
	{ 0x62eb2c87, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x37a0cba, "kfree" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";


MODULE_INFO(srcversion, "C4B8D52BD08AA8195112CFC");
