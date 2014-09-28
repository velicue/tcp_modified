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
	{ 0x2804f29b, "eth_validate_addr" },
	{ 0xb61ecba6, "eth_mac_addr" },
	{ 0xf0be8bec, "unregister_pernet_device" },
	{ 0xd9f9a82a, "gre_del_protocol" },
	{ 0x72d77df7, "rtnl_link_unregister" },
	{ 0x51876b71, "rtnl_link_register" },
	{ 0xae5e3a56, "gre_add_protocol" },
	{ 0x3bd08547, "register_pernet_device" },
	{ 0x27e1a049, "printk" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc6cbbc89, "capable" },
	{ 0x862aff14, "icmpv6_send" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0xd029bc91, "ip_local_out" },
	{ 0xa165f37, "__ip_select_ident" },
	{ 0xf6388c56, "sysctl_ip_default_ttl" },
	{ 0xe0c70ab1, "sock_wfree" },
	{ 0x373cbc4a, "skb_realloc_headroom" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xf88404c3, "consume_skb" },
	{ 0xaa6ce388, "netdev_state_change" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x672144bd, "strlcpy" },
	{ 0xf8a7720e, "register_netdev" },
	{ 0xfbba0381, "alloc_netdev_mqs" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xd7e0a916, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2655116a, "register_netdevice" },
	{ 0x76b5c8c, "eth_type_trans" },
	{ 0x15424c84, "icmp_send" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa93e53e7, "__skb_checksum_complete" },
	{ 0x2232a9a2, "__secpath_destroy" },
	{ 0xc2624dd, "__pskb_pull_tail" },
	{ 0xa7ffea7, "netif_rx" },
	{ 0x7628f3c7, "this_cpu_off" },
	{ 0x83f28ad8, "kfree_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf13a8667, "__dev_get_by_index" },
	{ 0x57ed1f6c, "ip_mc_inc_group" },
	{ 0xa5ebc415, "dst_release" },
	{ 0x9e55f1eb, "ip_route_output_flow" },
	{ 0xab72fe79, "ip_mc_dec_group" },
	{ 0x9585c924, "inetdev_by_index" },
	{ 0x32a41d2a, "ether_setup" },
	{ 0xac85eb71, "nla_put" },
	{ 0x55f2580b, "__alloc_percpu" },
	{ 0xe914e41e, "strcpy" },
	{ 0x39f105cb, "skb_push" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb9249d16, "cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xeefad884, "free_netdev" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gre";


MODULE_INFO(srcversion, "031373EA868EF7852E74FD2");
