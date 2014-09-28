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
	{ 0x402b8281, "__request_module" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x96205109, "xt_unregister_table" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe0b4971b, "xt_compat_lock" },
	{ 0x40728a63, "xt_find_revision" },
	{ 0x25ec1b28, "strlen" },
	{ 0xb0d4f00d, "xt_check_target" },
	{ 0xe57f1059, "xt_compat_target_to_user" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x14a2dc7c, "xt_proto_fini" },
	{ 0x7f68edb, "xt_table_unlock" },
	{ 0x79892315, "xt_compat_target_offset" },
	{ 0x999e8297, "vfree" },
	{ 0x47c7b0d2, "cpu_number" },
	{ 0x25792b51, "xt_find_table_lock" },
	{ 0xf76a7163, "xt_replace_table" },
	{ 0xc2624dd, "__pskb_pull_tail" },
	{ 0x69e65fa5, "xt_proto_init" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0x4a3278c8, "xt_register_table" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0xbf89d00f, "unregister_pernet_subsys" },
	{ 0x27e1a049, "printk" },
	{ 0x2fa5a500, "memcmp" },
	{ 0x3dc66448, "xt_register_targets" },
	{ 0x2acc9684, "xt_compat_target_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xb4390f9a, "mcount" },
	{ 0x5f82f1f7, "xt_compat_flush_offsets" },
	{ 0x691a6d69, "xt_compat_calc_jump" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0x1b05ce2f, "xt_unregister_targets" },
	{ 0x253e8b44, "xt_compat_init_offsets" },
	{ 0x359237e6, "module_put" },
	{ 0xec24fd82, "xt_compat_add_offset" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb9249d16, "cpu_possible_mask" },
	{ 0x10c13863, "nf_unregister_sockopt" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x74e7dea4, "register_pernet_subsys" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xfc13ba1a, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x236c8c64, "memcpy" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x4cbbd171, "__bitmap_weight" },
	{ 0x1974c9e3, "nf_register_sockopt" },
	{ 0x8c473b7, "xt_alloc_table_info" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xb28f5ef1, "xt_free_table_info" },
	{ 0x161d1417, "xt_compat_unlock" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "CAEAA152154D08740B206B4");
