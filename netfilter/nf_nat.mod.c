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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0x6d40a921, "need_ipv4_conntrack" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0x2124474, "ip_send_check" },
	{ 0xed12628c, "inet_proto_csum_replace4" },
	{ 0xb99b02ed, "nf_ct_nat_offset" },
	{ 0xd03c7700, "secure_ipv4_port_ephemeral" },
	{ 0xe16d97e2, "nf_ip_checksum" },
	{ 0xab3d1f95, "nf_ct_untracked_status_or" },
	{ 0x4f8df6ba, "skb_checksum" },
	{ 0xbf89d00f, "unregister_pernet_subsys" },
	{ 0x27e1a049, "printk" },
	{ 0x3032758b, "__tracepoint_module_get" },
	{ 0xb4390f9a, "mcount" },
	{ 0xac85eb71, "nla_put" },
	{ 0xad1bb027, "nf_ct_free_hashtable" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x901d3957, "nf_conntrack_alter_reply" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x613320a1, "nf_ct_iterate_cleanup" },
	{ 0x359237e6, "module_put" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0x3d1b3ec7, "nf_conntrack_tuple_taken" },
	{ 0x74e7dea4, "register_pernet_subsys" },
	{ 0xd22396c1, "pskb_expand_head" },
	{ 0xe22ec1a, "__nf_ct_ext_add" },
	{ 0x236c8c64, "memcpy" },
	{ 0xc0547132, "nf_ct_extend_unregister" },
	{ 0x22381289, "nf_ct_l3proto_find_get" },
	{ 0xcc3ab7, "nf_nat_seq_adjust_hook" },
	{ 0xef681a7e, "skb_make_writable" },
	{ 0xca328bfe, "nf_ct_get_tuple" },
	{ 0xc6a79b90, "nf_ct_extend_register" },
	{ 0x8f459a8c, "nfnetlink_parse_nat_setup_hook" },
	{ 0xa3a5be95, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x4a8c8b8e, "skb_put" },
	{ 0xba4560cd, "nf_ct_l3proto_put" },
	{ 0x90ff6c9f, "nf_ct_invert_tuplepr" },
	{ 0x4e34479b, "__nf_ct_l4proto_find" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_ipv4";


MODULE_INFO(srcversion, "1CC58FFB5839FEF49133FCC");
