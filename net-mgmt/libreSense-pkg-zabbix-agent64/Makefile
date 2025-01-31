# $FreeBSD

MASTERDIR=	${.CURDIR}/../libreSense-pkg-zabbix-agent

PORTNAME=	libreSense-pkg-zabbix-agent64

CONFLICTS=
CONFLICTS+=	libreSense-pkg-zabbix-agent
CONFLICTS+=	libreSense-pkg-zabbix-agent4
CONFLICTS+=	libreSense-pkg-zabbix-agent44
CONFLICTS+=	libreSense-pkg-zabbix-agent5
CONFLICTS+=	libreSense-pkg-zabbix-agent54
CONFLICTS+=	libreSense-pkg-zabbix-agent6

RUN_DEPENDS=	zabbix_agentd:net-mgmt/zabbix64-agent

ZABBIXINTERNALNAME=	zabbix-agent64
ZABBIXTITLE=	Zabbix Agent 6.4
ZABBIXVERSION=	64

.include "${MASTERDIR}/Makefile"
