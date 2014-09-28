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
	{ 0x5e8be433, "xfrm4_tunnel_deregister" },
	{ 0xf0be8bec, "unregister_pernet_device" },
	{ 0xde9fd899, "xfrm4_tunnel_register" },
	{ 0x3bd08547, "register_pernet_device" },
	{ 0x27e1a049, "printk" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xaa6ce388, "netdev_state_change" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2232a9a2, "__secpath_destroy" },
	{ 0x41861c6f, "__xfrm_policy_check" },
	{ 0xa7ffea7, "netif_rx" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xa165f37, "__ip_select_ident" },
	{ 0x15424c84, "icmp_send" },
	{ 0xd029bc91, "ip_local_out" },
	{ 0x7628f3c7, "this_cpu_off" },
	{ 0x37a0cba, "kfree" },
	{ 0x83f28ad8, "kfree_skb" },
	{ 0x39f105cb, "skb_push" },
	{ 0xe0c70ab1, "sock_wfree" },
	{ 0x373cbc4a, "skb_realloc_headroom" },
	{ 0xf88404c3, "consume_skb" },
	{ 0xf8a7720e, "register_netdev" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xd7e0a916, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x672144bd, "strlcpy" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2655116a, "register_netdevice" },
	{ 0x55f2580b, "__alloc_percpu" },
	{ 0xfbba0381, "alloc_netdev_mqs" },
	{ 0xf13a8667, "__dev_get_by_index" },
	{ 0xa5ebc415, "dst_release" },
	{ 0x9e55f1eb, "ip_route_output_flow" },
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
"depends=tunnel4";


MODULE_INFO(srcversion, "4104645306068CA2FBB655A");
