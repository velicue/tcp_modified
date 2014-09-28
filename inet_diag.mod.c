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
	{ 0x62eb2c87, "kmalloc_caches" },
	{ 0x25ec1b28, "strlen" },
	{ 0xa92a9da4, "inet_twsk_put" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0x4dbf39e0, "mutex_unlock" },
	{ 0xb93988f1, "sock_i_ino" },
	{ 0x16a0aed, "__rta_fill" },
	{ 0x7d11c268, "jiffies" },
	{ 0x566c5e64, "skb_trim" },
	{ 0x4b27ed24, "netlink_kernel_create" },
	{ 0xde0bdcff, "memset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2fa5a500, "memcmp" },
	{ 0x92af0a56, "netlink_kernel_release" },
	{ 0xcd279169, "nla_find" },
	{ 0x502acd31, "netlink_rcv_skb" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6c4f69e9, "mutex_lock" },
	{ 0x237c71cf, "sk_free" },
	{ 0xcbc006da, "netlink_unicast" },
	{ 0xa72c2f0c, "init_net" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x75f8ebf, "__alloc_skb" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0x83f28ad8, "kfree_skb" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x15a2a0e5, "inet6_lookup" },
	{ 0x399c29ef, "kmem_cache_alloc_trace" },
	{ 0xfdee7d42, "_raw_read_lock_bh" },
	{ 0xf37260ab, "_raw_read_unlock_bh" },
	{ 0x430bc363, "netlink_dump_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f28ba0b, "__inet_lookup_listener" },
	{ 0x4a8c8b8e, "skb_put" },
	{ 0x94025774, "sock_i_uid" },
	{ 0xe914e41e, "strcpy" },
	{ 0x954fc500, "__inet_lookup_established" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D3FF1CBBDBC66C877733293");
