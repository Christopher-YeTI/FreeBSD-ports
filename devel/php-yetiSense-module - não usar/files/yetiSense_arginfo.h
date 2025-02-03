/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: a3e53d6342fe34a79b8d8eb7f789e9e4ce26dfd5 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_kill_srcstates, 0, 1, IS_TRUE, 1)
	ZEND_ARG_TYPE_INFO(0, ip1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ip2, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_kill_states, 0, 1, IS_TRUE, 1)
	ZEND_ARG_TYPE_INFO(0, ip1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ip2, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, iface, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, proto, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_etherswitch_getinfo, 0, 1, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, dev, IS_STRING, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_etherswitch_getport, 0, 2, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, dev, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_etherswitch_setport, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, dev, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pvid, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_etherswitch_setport_state, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, dev, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_STRING, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_etherswitch_getlaggroup, 0, 2, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, dev, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, laggroup, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_etherswitch_getvlangroup, 0, 2, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, dev, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, vlangroup, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_etherswitch_setlaggroup, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dev, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, laggroup, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_ARRAY, 0, "null")
ZEND_END_ARG_INFO()
#endif

#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_etherswitch_setvlangroup, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dev, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, vlangroup, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vlan, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_ARRAY, 0, "null")
ZEND_END_ARG_INFO()
#endif

#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_etherswitch_setmode, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dev, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_STRING, 0)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_ip_to_mac, 0, 1, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, ip, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rifname, IS_STRING, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_getall_interface_addresses, 0, 1, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, ifname, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_libreSense_get_ifaddrs arginfo_libreSense_getall_interface_addresses

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_get_interface_addresses, 0, 1, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, interface, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_bridge_add_member, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ifname, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ifchild, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_libreSense_bridge_del_member arginfo_libreSense_bridge_add_member

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_bridge_member_flags, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ifname, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ifchild, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_interface_listget, 0, 0, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_interface_create, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, ifname, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_libreSense_interface_create2 arginfo_libreSense_interface_create

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_libreSense_interface_destroy, 0, 1, MAY_BE_ARRAY|MAY_BE_TRUE)
	ZEND_ARG_TYPE_INFO(0, ifname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_libreSense_interface_setaddress, 0, 2, MAY_BE_ARRAY|MAY_BE_BOOL)
	ZEND_ARG_TYPE_INFO(0, ifname, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_libreSense_interface_deladdress arginfo_libreSense_interface_setaddress

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_libreSense_interface_rename, 0, 2, MAY_BE_ARRAY|MAY_BE_TRUE)
	ZEND_ARG_TYPE_INFO(0, ifname, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, newifname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_ngctl_name, 0, 2, IS_TRUE, 1)
	ZEND_ARG_TYPE_INFO(0, ifname, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, newifname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_vlan_create, 0, 4, IS_TRUE, 1)
	ZEND_ARG_TYPE_INFO(0, ifname, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parentifname, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pcp, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_libreSense_interface_getmtu arginfo_libreSense_getall_interface_addresses

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_interface_mtu, 0, 2, IS_TRUE, 1)
	ZEND_ARG_TYPE_INFO(0, ifname, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, mtu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_interface_flags, 0, 2, IS_TRUE, 1)
	ZEND_ARG_TYPE_INFO(0, ifname, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_interface_capabilities, 0, 2, IS_TRUE, 1)
	ZEND_ARG_TYPE_INFO(0, ifname, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, caps, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_libreSense_get_interface_info arginfo_libreSense_get_interface_addresses

#define arginfo_libreSense_get_interface_stats arginfo_libreSense_get_interface_addresses

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_libreSense_get_pf_rules, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ethrules, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, path, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_get_pf_states, 0, 0, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arr, IS_ARRAY, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_get_pf_stats, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_sync, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_fsync, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_get_modem_devices, 0, 0, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, show_info, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, poll_timeout, IS_LONG, 0, "700")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_get_os_hw_data, 0, 0, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

#define arginfo_libreSense_get_os_kern_data arginfo_libreSense_get_os_hw_data

#define arginfo_libreSense_ipsec_list_sa arginfo_libreSense_get_os_hw_data

#if defined(PF_CP_FUNCTIONS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_pf_cp_flush, 0, 2, _IS_BOOL, 1)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(PF_CP_FUNCTIONS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_pf_cp_get_eth_pipes, 0, 1, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(PF_CP_FUNCTIONS)
#define arginfo_libreSense_pf_cp_get_eth_rule_counters arginfo_libreSense_pf_cp_get_eth_pipes
#endif

#if defined(PF_CP_FUNCTIONS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_pf_cp_zerocnt, 0, 1, IS_NULL, 1)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(PF_CP_FUNCTIONS)
#define arginfo_libreSense_pf_cp_get_eth_last_active arginfo_libreSense_pf_cp_get_eth_pipes
#endif

#if defined(PF_CP_FUNCTIONS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_kenv_dump, 0, 0, IS_ARRAY, 1)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_libreSense_interface_setpcp, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ifname, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pcp, IS_LONG, 0)
ZEND_END_ARG_INFO()


ZEND_FUNCTION(libreSense_kill_srcstates);
ZEND_FUNCTION(libreSense_kill_states);
#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_FUNCTION(libreSense_etherswitch_getinfo);
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_FUNCTION(libreSense_etherswitch_getport);
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_FUNCTION(libreSense_etherswitch_setport);
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_FUNCTION(libreSense_etherswitch_setport_state);
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_FUNCTION(libreSense_etherswitch_getlaggroup);
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_FUNCTION(libreSense_etherswitch_getvlangroup);
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_FUNCTION(libreSense_etherswitch_setlaggroup);
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_FUNCTION(libreSense_etherswitch_setvlangroup);
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
ZEND_FUNCTION(libreSense_etherswitch_setmode);
#endif
ZEND_FUNCTION(libreSense_ip_to_mac);
ZEND_FUNCTION(libreSense_getall_interface_addresses);
ZEND_FUNCTION(libreSense_get_ifaddrs);
ZEND_FUNCTION(libreSense_get_interface_addresses);
ZEND_FUNCTION(libreSense_bridge_add_member);
ZEND_FUNCTION(libreSense_bridge_del_member);
ZEND_FUNCTION(libreSense_bridge_member_flags);
ZEND_FUNCTION(libreSense_interface_listget);
ZEND_FUNCTION(libreSense_interface_create);
ZEND_FUNCTION(libreSense_interface_create2);
ZEND_FUNCTION(libreSense_interface_destroy);
ZEND_FUNCTION(libreSense_interface_setaddress);
ZEND_FUNCTION(libreSense_interface_deladdress);
ZEND_FUNCTION(libreSense_interface_rename);
ZEND_FUNCTION(libreSense_ngctl_name);
ZEND_FUNCTION(libreSense_vlan_create);
ZEND_FUNCTION(libreSense_interface_getmtu);
ZEND_FUNCTION(libreSense_interface_mtu);
ZEND_FUNCTION(libreSense_interface_flags);
ZEND_FUNCTION(libreSense_interface_capabilities);
ZEND_FUNCTION(libreSense_get_interface_info);
ZEND_FUNCTION(libreSense_get_interface_stats);
ZEND_FUNCTION(libreSense_get_pf_rules);
ZEND_FUNCTION(libreSense_get_pf_states);
ZEND_FUNCTION(libreSense_get_pf_stats);
ZEND_FUNCTION(libreSense_sync);
ZEND_FUNCTION(libreSense_fsync);
ZEND_FUNCTION(libreSense_get_modem_devices);
ZEND_FUNCTION(libreSense_get_os_hw_data);
ZEND_FUNCTION(libreSense_get_os_kern_data);
ZEND_FUNCTION(libreSense_ipsec_list_sa);
#if defined(PF_CP_FUNCTIONS)
ZEND_FUNCTION(libreSense_pf_cp_flush);
#endif
#if defined(PF_CP_FUNCTIONS)
ZEND_FUNCTION(libreSense_pf_cp_get_eth_pipes);
#endif
#if defined(PF_CP_FUNCTIONS)
ZEND_FUNCTION(libreSense_pf_cp_get_eth_rule_counters);
#endif
#if defined(PF_CP_FUNCTIONS)
ZEND_FUNCTION(libreSense_pf_cp_zerocnt);
#endif
#if defined(PF_CP_FUNCTIONS)
ZEND_FUNCTION(libreSense_pf_cp_get_eth_last_active);
#endif
#if defined(PF_CP_FUNCTIONS)
ZEND_FUNCTION(libreSense_kenv_dump);
#endif
ZEND_FUNCTION(libreSense_interface_setpcp);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(libreSense_kill_srcstates, arginfo_libreSense_kill_srcstates)
	ZEND_FE(libreSense_kill_states, arginfo_libreSense_kill_states)
#if defined(ETHERSWITCH_FUNCTIONS)
	ZEND_FE(libreSense_etherswitch_getinfo, arginfo_libreSense_etherswitch_getinfo)
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
	ZEND_FE(libreSense_etherswitch_getport, arginfo_libreSense_etherswitch_getport)
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
	ZEND_FE(libreSense_etherswitch_setport, arginfo_libreSense_etherswitch_setport)
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
	ZEND_FE(libreSense_etherswitch_setport_state, arginfo_libreSense_etherswitch_setport_state)
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
	ZEND_FE(libreSense_etherswitch_getlaggroup, arginfo_libreSense_etherswitch_getlaggroup)
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
	ZEND_FE(libreSense_etherswitch_getvlangroup, arginfo_libreSense_etherswitch_getvlangroup)
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
	ZEND_FE(libreSense_etherswitch_setlaggroup, arginfo_libreSense_etherswitch_setlaggroup)
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
	ZEND_FE(libreSense_etherswitch_setvlangroup, arginfo_libreSense_etherswitch_setvlangroup)
#endif
#if defined(ETHERSWITCH_FUNCTIONS)
	ZEND_FE(libreSense_etherswitch_setmode, arginfo_libreSense_etherswitch_setmode)
#endif
	ZEND_FE(libreSense_ip_to_mac, arginfo_libreSense_ip_to_mac)
	ZEND_FE(libreSense_getall_interface_addresses, arginfo_libreSense_getall_interface_addresses)
	ZEND_FE(libreSense_get_ifaddrs, arginfo_libreSense_get_ifaddrs)
	ZEND_FE(libreSense_get_interface_addresses, arginfo_libreSense_get_interface_addresses)
	ZEND_FE(libreSense_bridge_add_member, arginfo_libreSense_bridge_add_member)
	ZEND_FE(libreSense_bridge_del_member, arginfo_libreSense_bridge_del_member)
	ZEND_FE(libreSense_bridge_member_flags, arginfo_libreSense_bridge_member_flags)
	ZEND_FE(libreSense_interface_listget, arginfo_libreSense_interface_listget)
	ZEND_FE(libreSense_interface_create, arginfo_libreSense_interface_create)
	ZEND_FE(libreSense_interface_create2, arginfo_libreSense_interface_create2)
	ZEND_FE(libreSense_interface_destroy, arginfo_libreSense_interface_destroy)
	ZEND_FE(libreSense_interface_setaddress, arginfo_libreSense_interface_setaddress)
	ZEND_FE(libreSense_interface_deladdress, arginfo_libreSense_interface_deladdress)
	ZEND_FE(libreSense_interface_rename, arginfo_libreSense_interface_rename)
	ZEND_FE(libreSense_ngctl_name, arginfo_libreSense_ngctl_name)
	ZEND_FE(libreSense_vlan_create, arginfo_libreSense_vlan_create)
	ZEND_FE(libreSense_interface_getmtu, arginfo_libreSense_interface_getmtu)
	ZEND_FE(libreSense_interface_mtu, arginfo_libreSense_interface_mtu)
	ZEND_FE(libreSense_interface_flags, arginfo_libreSense_interface_flags)
	ZEND_FE(libreSense_interface_capabilities, arginfo_libreSense_interface_capabilities)
	ZEND_FE(libreSense_get_interface_info, arginfo_libreSense_get_interface_info)
	ZEND_FE(libreSense_get_interface_stats, arginfo_libreSense_get_interface_stats)
	ZEND_FE(libreSense_get_pf_rules, arginfo_libreSense_get_pf_rules)
	ZEND_FE(libreSense_get_pf_states, arginfo_libreSense_get_pf_states)
	ZEND_FE(libreSense_get_pf_stats, arginfo_libreSense_get_pf_stats)
	ZEND_FE(libreSense_sync, arginfo_libreSense_sync)
	ZEND_FE(libreSense_fsync, arginfo_libreSense_fsync)
	ZEND_FE(libreSense_get_modem_devices, arginfo_libreSense_get_modem_devices)
	ZEND_FE(libreSense_get_os_hw_data, arginfo_libreSense_get_os_hw_data)
	ZEND_FE(libreSense_get_os_kern_data, arginfo_libreSense_get_os_kern_data)
	ZEND_FE(libreSense_ipsec_list_sa, arginfo_libreSense_ipsec_list_sa)
#if defined(PF_CP_FUNCTIONS)
	ZEND_FE(libreSense_pf_cp_flush, arginfo_libreSense_pf_cp_flush)
#endif
#if defined(PF_CP_FUNCTIONS)
	ZEND_FE(libreSense_pf_cp_get_eth_pipes, arginfo_libreSense_pf_cp_get_eth_pipes)
#endif
#if defined(PF_CP_FUNCTIONS)
	ZEND_FE(libreSense_pf_cp_get_eth_rule_counters, arginfo_libreSense_pf_cp_get_eth_rule_counters)
#endif
#if defined(PF_CP_FUNCTIONS)
	ZEND_FE(libreSense_pf_cp_zerocnt, arginfo_libreSense_pf_cp_zerocnt)
#endif
#if defined(PF_CP_FUNCTIONS)
	ZEND_FE(libreSense_pf_cp_get_eth_last_active, arginfo_libreSense_pf_cp_get_eth_last_active)
#endif
#if defined(PF_CP_FUNCTIONS)
	ZEND_FE(libreSense_kenv_dump, arginfo_libreSense_kenv_dump)
#endif
	ZEND_FE(libreSense_interface_setpcp, arginfo_libreSense_interface_setpcp)
	ZEND_FE_END
};
