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
	{ 0x87a0791e, "xfrm4_rcv" },
	{ 0xf5f81690, "inet_del_protocol" },
	{ 0xcc78acb2, "xfrm_unregister_type" },
	{ 0xc9c639e5, "inet_add_protocol" },
	{ 0x251fc929, "xfrm_register_type" },
	{ 0xc2624dd, "__pskb_pull_tail" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0xde0bdcff, "memset" },
	{ 0xb6244511, "sg_init_one" },
	{ 0x49465bf1, "skb_to_sgvec" },
	{ 0xc897c382, "sg_init_table" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0x39f105cb, "skb_push" },
	{ 0x3796e062, "pskb_put" },
	{ 0x4d5b7740, "skb_cow_data" },
	{ 0xdaa4f9fb, "__xfrm_state_destroy" },
	{ 0x901d393f, "xfrm_state_lookup" },
	{ 0x27e1a049, "printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7109eb84, "crypto_aead_setauthsize" },
	{ 0xa20ce1b8, "net_msg_warn" },
	{ 0xd05dc2a3, "xfrm_aalg_get_byname" },
	{ 0x236c8c64, "memcpy" },
	{ 0x50720c5f, "snprintf" },
	{ 0xa346c7d4, "crypto_alloc_aead" },
	{ 0x399c29ef, "kmem_cache_alloc_trace" },
	{ 0x62eb2c87, "kmalloc_caches" },
	{ 0x67941d3e, "crypto_destroy_tfm" },
	{ 0xec1118ff, "xfrm_input_resume" },
	{ 0x6ef2b499, "___pskb_trim" },
	{ 0x3f3af425, "km_new_mapping" },
	{ 0xc52fe726, "skb_copy_bits" },
	{ 0x70df5c3c, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9918FBF3958808C263CA104");
