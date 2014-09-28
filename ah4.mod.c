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
	{ 0xdaa4f9fb, "__xfrm_state_destroy" },
	{ 0x901d393f, "xfrm_state_lookup" },
	{ 0x27e1a049, "printk" },
	{ 0xd05dc2a3, "xfrm_aalg_get_byname" },
	{ 0xd8ba73fb, "crypto_ahash_setkey" },
	{ 0xb15a3ab3, "crypto_alloc_ahash" },
	{ 0x399c29ef, "kmem_cache_alloc_trace" },
	{ 0x62eb2c87, "kmalloc_caches" },
	{ 0x67941d3e, "crypto_destroy_tfm" },
	{ 0xec1118ff, "xfrm_input_resume" },
	{ 0xc2624dd, "__pskb_pull_tail" },
	{ 0x2fa5a500, "memcmp" },
	{ 0xd22396c1, "pskb_expand_head" },
	{ 0x70df5c3c, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x7dd8b909, "crypto_ahash_digest" },
	{ 0x49465bf1, "skb_to_sgvec" },
	{ 0xc897c382, "sg_init_table" },
	{ 0x236c8c64, "memcpy" },
	{ 0x39f105cb, "skb_push" },
	{ 0x4d5b7740, "skb_cow_data" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xde0bdcff, "memset" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2438D5E0FA2327C01B76D38");
