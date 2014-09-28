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
	{ 0xc8bbd666, "proc_dointvec" },
	{ 0x4ed73e64, "single_release" },
	{ 0x157411f5, "seq_read" },
	{ 0x1384f971, "seq_lseek" },
	{ 0x8d867b69, "nf_unregister_queue_handlers" },
	{ 0xf338d4c3, "netlink_unregister_notifier" },
	{ 0x92af0a56, "netlink_kernel_release" },
	{ 0xb317dd2b, "proc_net_remove" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xba8fd6, "unregister_sysctl_table" },
	{ 0x6a6633c5, "nf_register_queue_handler" },
	{ 0x590a50a5, "register_sysctl_paths" },
	{ 0xa9f3f261, "net_ipv4_ctl_path" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x63c29ebd, "proc_create_data" },
	{ 0x4b27ed24, "netlink_kernel_create" },
	{ 0xf78d04ab, "netlink_register_notifier" },
	{ 0x6ef2b499, "___pskb_trim" },
	{ 0x236c8c64, "memcpy" },
	{ 0xef681a7e, "skb_make_writable" },
	{ 0x9601b409, "skb_copy_expand" },
	{ 0x54e6fcdd, "net_enable_timestamp" },
	{ 0x3a2204c6, "security_netlink_recv" },
	{ 0x4dbf39e0, "mutex_unlock" },
	{ 0xbcdf6e75, "netlink_ack" },
	{ 0x6c4f69e9, "mutex_lock" },
	{ 0x199ed0cd, "net_disable_timestamp" },
	{ 0xa72c2f0c, "init_net" },
	{ 0x21a7d814, "seq_printf" },
	{ 0xb4757678, "single_open" },
	{ 0x27e1a049, "printk" },
	{ 0x9d08d47b, "skb_checksum_help" },
	{ 0xc52fe726, "skb_copy_bits" },
	{ 0xcbc006da, "netlink_unicast" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0x83f28ad8, "kfree_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0xe914e41e, "strcpy" },
	{ 0xdf4c8767, "ns_to_timeval" },
	{ 0xde0bdcff, "memset" },
	{ 0x4a8c8b8e, "skb_put" },
	{ 0x75f8ebf, "__alloc_skb" },
	{ 0xee8bf808, "nf_reinject" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8BD3B88193750F4028B5B87");
