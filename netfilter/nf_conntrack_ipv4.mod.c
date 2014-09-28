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
	{ 0x9cb5c5fe, "proc_dointvec_minmax" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3a26830a, "nf_conntrack_in" },
	{ 0xa4b49e4e, "nf_conntrack_l3proto_generic" },
	{ 0xf6b3006d, "__nf_ct_refresh_acct" },
	{ 0xc8bbd666, "proc_dointvec" },
	{ 0x89ba054f, "nf_ct_get_tuplepr" },
	{ 0x21a7d814, "seq_printf" },
	{ 0xa60f9d25, "remove_proc_entry" },
	{ 0x5672add2, "nf_conntrack_set_hashsize" },
	{ 0xd2bf79f1, "nf_ct_deliver_cached_events" },
	{ 0x157411f5, "seq_read" },
	{ 0xea054b22, "nla_policy_len" },
	{ 0x4c7e2860, "proc_net_fops_create" },
	{ 0x2412bfe7, "nf_conntrack_l4proto_tcp4" },
	{ 0xf5104db6, "nf_conntrack_l3proto_unregister" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe16d97e2, "nf_ip_checksum" },
	{ 0x3cfd6a40, "nf_log_packet" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0x47d46d63, "print_tuple" },
	{ 0xbf89d00f, "unregister_pernet_subsys" },
	{ 0xe7d95cdf, "nf_ct_invert_tuple" },
	{ 0x617f0933, "__nf_conntrack_confirm" },
	{ 0x27e1a049, "printk" },
	{ 0xb317dd2b, "proc_net_remove" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xb4390f9a, "mcount" },
	{ 0xac85eb71, "nla_put" },
	{ 0x79175313, "nf_conntrack_l4proto_unregister" },
	{ 0x59ca3dda, "seq_putc" },
	{ 0xc0f65c08, "seq_release_net" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xa72c2f0c, "init_net" },
	{ 0x6a27df0a, "nf_unregister_hooks" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x67d8d35, "security_release_secctx" },
	{ 0xefdd70ce, "security_secid_to_secctx" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb9249d16, "cpu_possible_mask" },
	{ 0x6e224a7a, "need_conntrack" },
	{ 0x8e555738, "param_get_uint" },
	{ 0x10c13863, "nf_unregister_sockopt" },
	{ 0x68150396, "nf_ct_l3protos" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x74e7dea4, "register_pernet_subsys" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x63c29ebd, "proc_create_data" },
	{ 0xad5f1b39, "nf_net_ipv4_netfilter_sysctl_path" },
	{ 0x1384f971, "seq_lseek" },
	{ 0x23678fca, "seq_open_net" },
	{ 0x6b6c3d10, "nf_defrag_ipv4_enable" },
	{ 0x805f3255, "nf_register_hooks" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0xf272dd0b, "nf_conntrack_l3proto_register" },
	{ 0xf22afce2, "nf_conntrack_l4proto_udp4" },
	{ 0x1974c9e3, "nf_register_sockopt" },
	{ 0x962e7083, "nf_conntrack_l4proto_register" },
	{ 0x6cb60b9b, "proc_dointvec_jiffies" },
	{ 0xc52fe726, "skb_copy_bits" },
	{ 0xdcf2783a, "seq_print_acct" },
	{ 0xb38d07e8, "nf_conntrack_find_get" },
	{ 0x4e34479b, "__nf_ct_l4proto_find" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";


MODULE_INFO(srcversion, "B09E72465FBFB4069FB0394");
