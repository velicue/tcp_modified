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
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0x83f28ad8, "kfree_skb" },
	{ 0xc9252691, "xt_unregister_target" },
	{ 0xb7b457b6, "nf_log_unregister" },
	{ 0x66e37ac5, "nf_log_register" },
	{ 0x92af0a56, "netlink_kernel_release" },
	{ 0x4dcd6361, "xt_register_target" },
	{ 0x4b27ed24, "netlink_kernel_create" },
	{ 0xa72c2f0c, "init_net" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x27e1a049, "printk" },
	{ 0x672144bd, "strlcpy" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x2447533c, "ktime_get_real" },
	{ 0x236c8c64, "memcpy" },
	{ 0xc52fe726, "skb_copy_bits" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xdf4c8767, "ns_to_timeval" },
	{ 0xde0bdcff, "memset" },
	{ 0x4a8c8b8e, "skb_put" },
	{ 0x75f8ebf, "__alloc_skb" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0xefee91cd, "netlink_broadcast" },
	{ 0xc996d097, "del_timer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "DE7F5C260784E5A776F34E0");
