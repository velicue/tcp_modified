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
	{ 0x2124474, "ip_send_check" },
	{ 0x79d94e68, "ip_defrag" },
	{ 0xb4390f9a, "mcount" },
	{ 0x6a27df0a, "nf_unregister_hooks" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x805f3255, "nf_register_hooks" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A865799FABAACD9A16468E1");
