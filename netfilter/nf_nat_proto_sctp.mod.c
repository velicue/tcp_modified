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
	{ 0x94a08134, "nf_nat_proto_nlattr_to_range" },
	{ 0xf0ceba4b, "nf_nat_proto_range_to_nlattr" },
	{ 0x7ae60b6, "nf_nat_proto_in_range" },
	{ 0xd9233a37, "nf_nat_protocol_unregister" },
	{ 0x19e6e6fa, "nf_nat_protocol_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x27000b29, "crc32c" },
	{ 0xef681a7e, "skb_make_writable" },
	{ 0x52f327e, "nf_nat_proto_unique_tuple" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,libcrc32c";


MODULE_INFO(srcversion, "5C57FFF92F9CBC132D79D8F");
