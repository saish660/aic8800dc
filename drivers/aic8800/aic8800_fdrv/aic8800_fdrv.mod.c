#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3ff26f28, "cfg80211_inform_bss_frame_data" },
	{ 0x784766b8, "filp_open" },
	{ 0x9dd4105e, "free_irq" },
	{ 0xc45d298e, "is_vmalloc_addr" },
	{ 0x7c93c0c5, "usb_alloc_urb" },
	{ 0xd1ea4530, "cfg80211_mgmt_tx_status_ext" },
	{ 0xeb8f17cb, "regulatory_set_wiphy_regd_sync" },
	{ 0xc23106c3, "cfg80211_rx_unexpected_4addr_frame" },
	{ 0xce6c3923, "usb_anchor_urb" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0xd272d446, "rtnl_unlock" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xd6e79690, "down_timeout" },
	{ 0xbc068716, "usb_free_urb" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0xb0b808b9, "eth_mac_addr" },
	{ 0x7dfd5b55, "pci_enable_device" },
	{ 0xe9e613dc, "skb_put" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0x8891733e, "cfg80211_scan_done" },
	{ 0x534ed5f3, "__msecs_to_jiffies" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xc13e3349, "consume_skb" },
	{ 0xfbe7861b, "memmove" },
	{ 0x7851be11, "get_adap_test" },
	{ 0x40a621c5, "snprintf" },
	{ 0x65026e43, "complete" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x338a6fd7, "cfg80211_remain_on_channel_expired" },
	{ 0xfe0414dc, "cfg80211_cac_event" },
	{ 0x8e76e595, "skb_dequeue" },
	{ 0x60c9c0b3, "__init_swait_queue_head" },
	{ 0xc87f4bab, "finish_wait" },
	{ 0xc8a90701, "cfg80211_register_netdevice" },
	{ 0xe77776ab, "dma_unmap_page_attrs" },
	{ 0xc36345fa, "__sw_hweight32" },
	{ 0xd0b1599d, "request_firmware" },
	{ 0x5eb30ee8, "usb_register_driver" },
	{ 0x40a621c5, "scnprintf" },
	{ 0x63c81cdd, "ieee80211_amsdu_to_8023s" },
	{ 0x437c10f1, "__pci_register_driver" },
	{ 0x4073d0de, "up" },
	{ 0x12ad300e, "iounmap" },
	{ 0x506e75e8, "ieee80211_chandef_to_operating_class" },
	{ 0x55eab75f, "pci_disable_msi" },
	{ 0xa5c5afbb, "pci_request_regions" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x1935f78b, "__trace_bprintk" },
	{ 0x2352b148, "timer_delete" },
	{ 0xfdc1d8a5, "get_userconfig_txpwr_idx" },
	{ 0x5cb96c09, "cfg80211_external_auth_request" },
	{ 0x0db8d68d, "prepare_to_wait_event" },
	{ 0x0273c06a, "netdev_warn" },
	{ 0x5e505530, "kthread_should_stop" },
	{ 0x2352b148, "timer_delete_sync" },
	{ 0x16ab4215, "__wake_up" },
	{ 0xcd767ac8, "cfg80211_new_sta" },
	{ 0xe1e1f979, "_raw_spin_lock_irqsave" },
	{ 0x33d46dde, "pci_ioremap_bar" },
	{ 0x6d69b03a, "sched_set_fifo_low" },
	{ 0x911d6432, "cfg80211_disconnected" },
	{ 0x77d2bc43, "ether_setup" },
	{ 0x29969570, "pci_unregister_driver" },
	{ 0x0273c06a, "netdev_err" },
	{ 0xd272d446, "__fentry__" },
	{ 0x2763f366, "wake_up_process" },
	{ 0xe199f25f, "jiffies_to_usecs" },
	{ 0xafc1c0f4, "dev_driver_string" },
	{ 0xcf7f4100, "dev_addr_mod" },
	{ 0x4217160b, "eth_type_trans" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x15a3ed4f, "dma_map_page_attrs" },
	{ 0x6b0e767e, "alloc_netdev_mqs" },
	{ 0x8c49d5fe, "wiphy_new_nm" },
	{ 0xe8213e80, "_printk" },
	{ 0xa98ef83f, "cfg80211_ready_on_channel" },
	{ 0x5629a063, "strncasecmp" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xd272d446, "schedule" },
	{ 0x0a47352f, "cfg80211_classify8021d" },
	{ 0x586374be, "__tracepoint_sched_set_state_tp" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x8ce83585, "queue_delayed_work_on" },
	{ 0xde338d9a, "_raw_spin_unlock_bh" },
	{ 0xe7e6dca1, "wiphy_register" },
	{ 0x71e887dc, "__cfg80211_alloc_reply_skb" },
	{ 0x8dc67ef7, "usb_kill_anchored_urbs" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xdcb272eb, "cfg80211_put_bss" },
	{ 0xaa37b6b3, "cfg80211_roamed" },
	{ 0x629dbc91, "cfg80211_ch_switch_notify" },
	{ 0x5a844b26, "__x86_indirect_thunk_rdx" },
	{ 0x57055bb8, "usb_submit_urb" },
	{ 0xbaa3b247, "skb_copy_expand" },
	{ 0x67c0756e, "skb_queue_tail" },
	{ 0x61079369, "print_hex_dump" },
	{ 0xb6f035ed, "ieee80211_get_channel_khz" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0x00745821, "__cfg80211_radar_event" },
	{ 0x7851be11, "get_testmode" },
	{ 0x26226372, "cfg80211_find_elem_match" },
	{ 0x9c0551c6, "tasklet_kill" },
	{ 0xf36c79f1, "pci_clear_master" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0x21d58255, "pci_enable_msi" },
	{ 0x15debdc6, "_dev_err" },
	{ 0xe9e613dc, "skb_pull" },
	{ 0xcd76fbf8, "cpu_bit_bitmap" },
	{ 0x9126ce86, "request_threaded_irq" },
	{ 0x630954b9, "__write_overflow_field" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x1b4fe4c3, "sk_skb_reason_drop" },
	{ 0x32feeafc, "mod_timer" },
	{ 0xcdec1689, "tasklet_init" },
	{ 0x4073d0de, "down" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xd7a59a65, "vmalloc_noprof" },
	{ 0x67797aab, "cfg80211_michael_mic_failure" },
	{ 0x77274758, "cfg80211_cqm_pktloss_notify" },
	{ 0xbeb1d261, "destroy_workqueue" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0xe9e613dc, "skb_push" },
	{ 0x4f62b0dc, "kmem_cache_free" },
	{ 0x0647b467, "set_cpus_allowed_ptr" },
	{ 0xd768e109, "pci_read_config_word" },
	{ 0x2435d559, "strncmp" },
	{ 0xcd767ac8, "cfg80211_del_sta_sinfo" },
	{ 0x42674bb2, "netif_receive_skb" },
	{ 0xd6d11a41, "nla_put" },
	{ 0xa4ba958f, "const_current_task" },
	{ 0xc609ff70, "strncpy" },
	{ 0x9c0551c6, "__tasklet_schedule" },
	{ 0xd3ed45de, "strcasecmp" },
	{ 0x5a844b26, "__x86_indirect_thunk_r13" },
	{ 0xff1b5b70, "wiphy_unregister" },
	{ 0xcd327525, "free_netdev" },
	{ 0x1900ba98, "wait_for_completion_interruptible" },
	{ 0xbd03ed67, "phys_base" },
	{ 0x680628e7, "ktime_get_real_ts64" },
	{ 0x7c2682b2, "cfg80211_notify_new_peer_candidate" },
	{ 0x402db74e, "memcmp" },
	{ 0xfcc2e8f3, "__local_bh_enable_ip" },
	{ 0x228b1f9c, "kthread_stop" },
	{ 0x173ec8da, "sscanf" },
	{ 0xc1e6c71e, "__mutex_init" },
	{ 0x894e7abe, "usb_deregister" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0xe199f25f, "jiffies_to_msecs" },
	{ 0x81a1a811, "_raw_spin_unlock_irqrestore" },
	{ 0x9b4b48a0, "_ctype" },
	{ 0xcd327525, "netif_tx_stop_all_queues" },
	{ 0xa0fe1f1d, "netif_tx_wake_queue" },
	{ 0x85acaba2, "cancel_delayed_work" },
	{ 0x7295b8c3, "ieee80211_freq_khz_to_channel" },
	{ 0x0e9cab28, "memset" },
	{ 0x47ff3bb1, "cfg80211_vendor_cmd_reply" },
	{ 0xfb44bbd0, "aicwf_prealloc_txq_alloc" },
	{ 0xf36c79f1, "pci_set_master" },
	{ 0xe87b1153, "kernel_read" },
	{ 0x879131f2, "param_ops_charp" },
	{ 0x8e76e595, "skb_dequeue_tail" },
	{ 0xbeb1d261, "__flush_workqueue" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x7bed9790, "kmem_cache_alloc_noprof" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0x5403c125, "__init_waitqueue_head" },
	{ 0x98eb10df, "__netdev_alloc_skb" },
	{ 0x65026e43, "complete_all" },
	{ 0xbc068716, "usb_unanchor_urb" },
	{ 0xf30cc462, "__kmem_cache_create_args" },
	{ 0x40c76f23, "set_testmode" },
	{ 0x879131f2, "param_ops_string" },
	{ 0x888b8f57, "strcmp" },
	{ 0x0043ed82, "cfg80211_ch_switch_started_notify" },
	{ 0x7ef2c77f, "skb_unlink" },
	{ 0x13b53c0a, "__dynamic_netdev_dbg" },
	{ 0x058c185a, "jiffies" },
	{ 0x02996a3c, "kthread_create_on_node" },
	{ 0x7a6661ca, "ktime_get_real_seconds" },
	{ 0xdd6830c7, "sprintf" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7ec472ba, "__preempt_count" },
	{ 0xc3333670, "cfg80211_unregister_wdev" },
	{ 0xe1500fdc, "__dev_queue_xmit" },
	{ 0xe1e7a1e2, "cfg80211_probe_status" },
	{ 0xf1de9e85, "vfree" },
	{ 0x67e09a8b, "cfg80211_stop_iface" },
	{ 0xc56d6f66, "cfg80211_rx_mgmt_ext" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0xcf915583, "names_cachep" },
	{ 0x879131f2, "param_ops_bool" },
	{ 0xaa0f4c13, "pci_release_regions" },
	{ 0x65bae8c0, "__dma_sync_single_for_device" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0xff967528, "wait_for_completion_killable_timeout" },
	{ 0xb9e023c2, "pci_write_config_byte" },
	{ 0xe1980802, "filp_close" },
	{ 0x2f5b4fba, "__kmalloc_cache_noprof" },
	{ 0xbc068716, "usb_kill_urb" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0x546c19d9, "validate_usercopy_range" },
	{ 0x75738bed, "__warn_printk" },
	{ 0xfb4b00e9, "netif_carrier_off" },
	{ 0x5a844b26, "__x86_indirect_thunk_r9" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0x7fd36f2e, "time64_to_tm" },
	{ 0xde338d9a, "_raw_spin_lock_bh" },
	{ 0xfb4b00e9, "netif_carrier_on" },
	{ 0x146ee687, "cfg80211_chandef_create" },
	{ 0xd272d446, "rtnl_lock" },
	{ 0x921aa58e, "cfg80211_ft_event" },
	{ 0xf36c79f1, "pci_disable_device" },
	{ 0x37673716, "get_userconfig_txpwr_ofst" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0x224a53e7, "get_random_bytes" },
	{ 0x5a844b26, "__x86_indirect_thunk_r12" },
	{ 0x8e3336dd, "disable_irq_nosync" },
	{ 0xdf4bee3d, "alloc_workqueue_noprof" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x43a349ca, "strlen" },
	{ 0x4f2ac629, "dev_kfree_skb_any_reason" },
	{ 0xe1b25b56, "cfg80211_report_obss_beacon_khz" },
	{ 0xeb8f17cb, "regulatory_set_wiphy_regd" },
	{ 0x879131f2, "param_ops_int" },
	{ 0x43d3747e, "skb_append" },
	{ 0xeb1741e6, "pci_write_config_word" },
	{ 0x0e95ec6a, "get_fw_path" },
	{ 0xde338d9a, "_raw_spin_unlock" },
	{ 0x7d2e4301, "cfg80211_connect_done" },
	{ 0xdcb272eb, "cfg80211_unlink_bss" },
	{ 0xbc7b3c4f, "__cfg80211_get_bss" },
	{ 0xff1b5b70, "wiphy_free" },
	{ 0x67628f51, "msleep" },
	{ 0x5eda48ad, "cfg80211_cqm_rssi_notify" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x5aa5bde9, "kmalloc_caches" },
	{ 0xb2e62cba, "__trace_set_current_state" },
	{ 0x0273c06a, "netdev_info" },
	{ 0x4b478e2d, "kmem_cache_destroy" },
	{ 0x67c0756e, "skb_queue_head" },
	{ 0xaef1f20d, "system_wq" },
	{ 0x9e0183ca, "cfg80211_rx_unprot_mlme_mgmt" },
	{ 0x984622ae, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x3ff26f28,
	0x784766b8,
	0x9dd4105e,
	0xc45d298e,
	0x7c93c0c5,
	0xd1ea4530,
	0xeb8f17cb,
	0xc23106c3,
	0xce6c3923,
	0xa61fd7aa,
	0xd272d446,
	0x1abc7887,
	0xd6e79690,
	0xbc068716,
	0x092a35a2,
	0xb0b808b9,
	0x7dfd5b55,
	0xe9e613dc,
	0xd272d446,
	0x8891733e,
	0x534ed5f3,
	0xd710adbf,
	0xc13e3349,
	0xfbe7861b,
	0x7851be11,
	0x40a621c5,
	0x65026e43,
	0x49733ad6,
	0x338a6fd7,
	0xfe0414dc,
	0x8e76e595,
	0x60c9c0b3,
	0xc87f4bab,
	0xc8a90701,
	0xe77776ab,
	0xc36345fa,
	0xd0b1599d,
	0x5eb30ee8,
	0x40a621c5,
	0x63c81cdd,
	0x437c10f1,
	0x4073d0de,
	0x12ad300e,
	0x506e75e8,
	0x55eab75f,
	0xa5c5afbb,
	0xfbe7861b,
	0xcb8b6ec6,
	0x1935f78b,
	0x2352b148,
	0xfdc1d8a5,
	0x5cb96c09,
	0x0db8d68d,
	0x0273c06a,
	0x5e505530,
	0x2352b148,
	0x16ab4215,
	0xcd767ac8,
	0xe1e1f979,
	0x33d46dde,
	0x6d69b03a,
	0x911d6432,
	0x77d2bc43,
	0x29969570,
	0x0273c06a,
	0xd272d446,
	0x2763f366,
	0xe199f25f,
	0xafc1c0f4,
	0xcf7f4100,
	0x4217160b,
	0x5a844b26,
	0x15a3ed4f,
	0x6b0e767e,
	0x8c49d5fe,
	0xe8213e80,
	0xa98ef83f,
	0x5629a063,
	0xbd03ed67,
	0x6ac784f4,
	0xd272d446,
	0x0a47352f,
	0x586374be,
	0xd272d446,
	0x8ce83585,
	0xde338d9a,
	0xe7e6dca1,
	0x71e887dc,
	0x8dc67ef7,
	0x9479a1e8,
	0xdcb272eb,
	0xaa37b6b3,
	0x629dbc91,
	0x5a844b26,
	0x57055bb8,
	0xbaa3b247,
	0x67c0756e,
	0x61079369,
	0xb6f035ed,
	0x90a48d82,
	0xbd03ed67,
	0x00745821,
	0x7851be11,
	0x26226372,
	0x9c0551c6,
	0xf36c79f1,
	0x7a5ffe84,
	0x21d58255,
	0x15debdc6,
	0xe9e613dc,
	0xcd76fbf8,
	0x9126ce86,
	0x630954b9,
	0xd272d446,
	0x1b4fe4c3,
	0x32feeafc,
	0xcdec1689,
	0x4073d0de,
	0xbd03ed67,
	0xd7a59a65,
	0x67797aab,
	0x77274758,
	0xbeb1d261,
	0xf46d5bf3,
	0xe9e613dc,
	0x4f62b0dc,
	0x0647b467,
	0xd768e109,
	0x2435d559,
	0xcd767ac8,
	0x42674bb2,
	0xd6d11a41,
	0xa4ba958f,
	0xc609ff70,
	0x9c0551c6,
	0xd3ed45de,
	0x5a844b26,
	0xff1b5b70,
	0xcd327525,
	0x1900ba98,
	0xbd03ed67,
	0x680628e7,
	0x7c2682b2,
	0x402db74e,
	0xfcc2e8f3,
	0x228b1f9c,
	0x173ec8da,
	0xc1e6c71e,
	0x894e7abe,
	0xe54e0a6b,
	0xe199f25f,
	0x81a1a811,
	0x9b4b48a0,
	0xcd327525,
	0xa0fe1f1d,
	0x85acaba2,
	0x7295b8c3,
	0x0e9cab28,
	0x47ff3bb1,
	0xfb44bbd0,
	0xf36c79f1,
	0xe87b1153,
	0x879131f2,
	0x8e76e595,
	0xbeb1d261,
	0xd272d446,
	0x7bed9790,
	0x092a35a2,
	0x5403c125,
	0x98eb10df,
	0x65026e43,
	0xbc068716,
	0xf30cc462,
	0x40c76f23,
	0x879131f2,
	0x888b8f57,
	0x0043ed82,
	0x7ef2c77f,
	0x13b53c0a,
	0x058c185a,
	0x02996a3c,
	0x7a6661ca,
	0xdd6830c7,
	0xbd03ed67,
	0x82fd7238,
	0x7ec472ba,
	0xc3333670,
	0xe1500fdc,
	0xe1e7a1e2,
	0xf1de9e85,
	0x67e09a8b,
	0xc56d6f66,
	0xf46d5bf3,
	0xcf915583,
	0x879131f2,
	0xaa0f4c13,
	0x65bae8c0,
	0xcbae5412,
	0xff967528,
	0xb9e023c2,
	0xe1980802,
	0x2f5b4fba,
	0xbc068716,
	0x2d88a3ab,
	0x546c19d9,
	0x75738bed,
	0xfb4b00e9,
	0x5a844b26,
	0x71798f7e,
	0x7fd36f2e,
	0xde338d9a,
	0xfb4b00e9,
	0x146ee687,
	0xd272d446,
	0x921aa58e,
	0xf36c79f1,
	0x37673716,
	0x02f9bbf0,
	0x224a53e7,
	0x5a844b26,
	0x8e3336dd,
	0xdf4bee3d,
	0xe4de56b4,
	0x43a349ca,
	0x4f2ac629,
	0xe1b25b56,
	0xeb8f17cb,
	0x879131f2,
	0x43d3747e,
	0xeb1741e6,
	0x0e95ec6a,
	0xde338d9a,
	0x7d2e4301,
	0xdcb272eb,
	0xbc7b3c4f,
	0xff1b5b70,
	0x67628f51,
	0x5eda48ad,
	0x7851be11,
	0x5aa5bde9,
	0xb2e62cba,
	0x0273c06a,
	0x4b478e2d,
	0x67c0756e,
	0xaef1f20d,
	0x9e0183ca,
	0x984622ae,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"cfg80211_inform_bss_frame_data\0"
	"filp_open\0"
	"free_irq\0"
	"is_vmalloc_addr\0"
	"usb_alloc_urb\0"
	"cfg80211_mgmt_tx_status_ext\0"
	"regulatory_set_wiphy_regd_sync\0"
	"cfg80211_rx_unexpected_4addr_frame\0"
	"usb_anchor_urb\0"
	"__check_object_size\0"
	"rtnl_unlock\0"
	"release_firmware\0"
	"down_timeout\0"
	"usb_free_urb\0"
	"_copy_from_user\0"
	"eth_mac_addr\0"
	"pci_enable_device\0"
	"skb_put\0"
	"__rcu_read_lock\0"
	"cfg80211_scan_done\0"
	"__msecs_to_jiffies\0"
	"__kmalloc_noprof\0"
	"consume_skb\0"
	"memmove\0"
	"get_adap_test\0"
	"snprintf\0"
	"complete\0"
	"queue_work_on\0"
	"cfg80211_remain_on_channel_expired\0"
	"cfg80211_cac_event\0"
	"skb_dequeue\0"
	"__init_swait_queue_head\0"
	"finish_wait\0"
	"cfg80211_register_netdevice\0"
	"dma_unmap_page_attrs\0"
	"__sw_hweight32\0"
	"request_firmware\0"
	"usb_register_driver\0"
	"scnprintf\0"
	"ieee80211_amsdu_to_8023s\0"
	"__pci_register_driver\0"
	"up\0"
	"iounmap\0"
	"ieee80211_chandef_to_operating_class\0"
	"pci_disable_msi\0"
	"pci_request_regions\0"
	"memcpy\0"
	"kfree\0"
	"__trace_bprintk\0"
	"timer_delete\0"
	"get_userconfig_txpwr_idx\0"
	"cfg80211_external_auth_request\0"
	"prepare_to_wait_event\0"
	"netdev_warn\0"
	"kthread_should_stop\0"
	"timer_delete_sync\0"
	"__wake_up\0"
	"cfg80211_new_sta\0"
	"_raw_spin_lock_irqsave\0"
	"pci_ioremap_bar\0"
	"sched_set_fifo_low\0"
	"cfg80211_disconnected\0"
	"ether_setup\0"
	"pci_unregister_driver\0"
	"netdev_err\0"
	"__fentry__\0"
	"wake_up_process\0"
	"jiffies_to_usecs\0"
	"dev_driver_string\0"
	"dev_addr_mod\0"
	"eth_type_trans\0"
	"__x86_indirect_thunk_rax\0"
	"dma_map_page_attrs\0"
	"alloc_netdev_mqs\0"
	"wiphy_new_nm\0"
	"_printk\0"
	"cfg80211_ready_on_channel\0"
	"strncasecmp\0"
	"__ref_stack_chk_guard\0"
	"schedule_timeout\0"
	"schedule\0"
	"cfg80211_classify8021d\0"
	"__tracepoint_sched_set_state_tp\0"
	"__stack_chk_fail\0"
	"queue_delayed_work_on\0"
	"_raw_spin_unlock_bh\0"
	"wiphy_register\0"
	"__cfg80211_alloc_reply_skb\0"
	"usb_kill_anchored_urbs\0"
	"strnlen\0"
	"cfg80211_put_bss\0"
	"cfg80211_roamed\0"
	"cfg80211_ch_switch_notify\0"
	"__x86_indirect_thunk_rdx\0"
	"usb_submit_urb\0"
	"skb_copy_expand\0"
	"skb_queue_tail\0"
	"print_hex_dump\0"
	"ieee80211_get_channel_khz\0"
	"__ubsan_handle_out_of_bounds\0"
	"page_offset_base\0"
	"__cfg80211_radar_event\0"
	"get_testmode\0"
	"cfg80211_find_elem_match\0"
	"tasklet_kill\0"
	"pci_clear_master\0"
	"init_wait_entry\0"
	"pci_enable_msi\0"
	"_dev_err\0"
	"skb_pull\0"
	"cpu_bit_bitmap\0"
	"request_threaded_irq\0"
	"__write_overflow_field\0"
	"__rcu_read_unlock\0"
	"sk_skb_reason_drop\0"
	"mod_timer\0"
	"tasklet_init\0"
	"down\0"
	"random_kmalloc_seed\0"
	"vmalloc_noprof\0"
	"cfg80211_michael_mic_failure\0"
	"cfg80211_cqm_pktloss_notify\0"
	"destroy_workqueue\0"
	"mutex_lock\0"
	"skb_push\0"
	"kmem_cache_free\0"
	"set_cpus_allowed_ptr\0"
	"pci_read_config_word\0"
	"strncmp\0"
	"cfg80211_del_sta_sinfo\0"
	"netif_receive_skb\0"
	"nla_put\0"
	"const_current_task\0"
	"strncpy\0"
	"__tasklet_schedule\0"
	"strcasecmp\0"
	"__x86_indirect_thunk_r13\0"
	"wiphy_unregister\0"
	"free_netdev\0"
	"wait_for_completion_interruptible\0"
	"phys_base\0"
	"ktime_get_real_ts64\0"
	"cfg80211_notify_new_peer_candidate\0"
	"memcmp\0"
	"__local_bh_enable_ip\0"
	"kthread_stop\0"
	"sscanf\0"
	"__mutex_init\0"
	"usb_deregister\0"
	"__fortify_panic\0"
	"jiffies_to_msecs\0"
	"_raw_spin_unlock_irqrestore\0"
	"_ctype\0"
	"netif_tx_stop_all_queues\0"
	"netif_tx_wake_queue\0"
	"cancel_delayed_work\0"
	"ieee80211_freq_khz_to_channel\0"
	"memset\0"
	"cfg80211_vendor_cmd_reply\0"
	"aicwf_prealloc_txq_alloc\0"
	"pci_set_master\0"
	"kernel_read\0"
	"param_ops_charp\0"
	"skb_dequeue_tail\0"
	"__flush_workqueue\0"
	"__x86_return_thunk\0"
	"kmem_cache_alloc_noprof\0"
	"_copy_to_user\0"
	"__init_waitqueue_head\0"
	"__netdev_alloc_skb\0"
	"complete_all\0"
	"usb_unanchor_urb\0"
	"__kmem_cache_create_args\0"
	"set_testmode\0"
	"param_ops_string\0"
	"strcmp\0"
	"cfg80211_ch_switch_started_notify\0"
	"skb_unlink\0"
	"__dynamic_netdev_dbg\0"
	"jiffies\0"
	"kthread_create_on_node\0"
	"ktime_get_real_seconds\0"
	"sprintf\0"
	"vmemmap_base\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"__preempt_count\0"
	"cfg80211_unregister_wdev\0"
	"__dev_queue_xmit\0"
	"cfg80211_probe_status\0"
	"vfree\0"
	"cfg80211_stop_iface\0"
	"cfg80211_rx_mgmt_ext\0"
	"mutex_unlock\0"
	"names_cachep\0"
	"param_ops_bool\0"
	"pci_release_regions\0"
	"__dma_sync_single_for_device\0"
	"__const_udelay\0"
	"wait_for_completion_killable_timeout\0"
	"pci_write_config_byte\0"
	"filp_close\0"
	"__kmalloc_cache_noprof\0"
	"usb_kill_urb\0"
	"cancel_work_sync\0"
	"validate_usercopy_range\0"
	"__warn_printk\0"
	"netif_carrier_off\0"
	"__x86_indirect_thunk_r9\0"
	"delayed_work_timer_fn\0"
	"time64_to_tm\0"
	"_raw_spin_lock_bh\0"
	"netif_carrier_on\0"
	"cfg80211_chandef_create\0"
	"rtnl_lock\0"
	"cfg80211_ft_event\0"
	"pci_disable_device\0"
	"get_userconfig_txpwr_ofst\0"
	"timer_init_key\0"
	"get_random_bytes\0"
	"__x86_indirect_thunk_r12\0"
	"disable_irq_nosync\0"
	"alloc_workqueue_noprof\0"
	"__ubsan_handle_load_invalid_value\0"
	"strlen\0"
	"dev_kfree_skb_any_reason\0"
	"cfg80211_report_obss_beacon_khz\0"
	"regulatory_set_wiphy_regd\0"
	"param_ops_int\0"
	"skb_append\0"
	"pci_write_config_word\0"
	"get_fw_path\0"
	"_raw_spin_unlock\0"
	"cfg80211_connect_done\0"
	"cfg80211_unlink_bss\0"
	"__cfg80211_get_bss\0"
	"wiphy_free\0"
	"msleep\0"
	"cfg80211_cqm_rssi_notify\0"
	"__SCT__might_resched\0"
	"kmalloc_caches\0"
	"__trace_set_current_state\0"
	"netdev_info\0"
	"kmem_cache_destroy\0"
	"skb_queue_head\0"
	"system_wq\0"
	"cfg80211_rx_unprot_mlme_mgmt\0"
	"module_layout\0"
;

MODULE_INFO(depends, "cfg80211,aic_load_fw");

MODULE_ALIAS("usb:vA69Cp8801d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:vA69Cp8D81d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:vA69Cp88DCd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:vA69Cp88DDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v368Bp88DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3625p0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3625p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v368Bp8D81d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "69982706E0C768A56B59AAE");
