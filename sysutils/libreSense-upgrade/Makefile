# $FreeBSD$

PORTNAME=	libreSense-upgrade
PORTVERSION=	1.2.15
CATEGORIES=	sysutils
MASTER_SITES=	# empty
DISTFILES=	# empty
EXTRACT_ONLY=	# empty

MAINTAINER=	coreteam@pfsense.org
COMMENT=	pfSense upgrade script

LICENSE=	APACHE20

NO_MTREE=	yes
NO_BUILD=	yes

PLIST_FILES=	libexec/libreSense-upgrade \
		sbin/libreSense-repo-setup \
		sbin/libreSense-upgrade

.include <bsd.port.pre.mk>

#RUN_DEPENDS+=	pfSense-repoc>=0:sysutils/pfSense-repoc

do-extract:
	@${MKDIR} ${WRKSRC}
	${CP} -r ${FILESDIR}/* ${WRKSRC}

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/sbin
	${MKDIR} ${STAGEDIR}${PREFIX}/libexec
	${MKDIR} ${STAGEDIR}${PREFIX}/share/libreSense
	${INSTALL_SCRIPT} ${WRKSRC}/libreSense-repo-setup \
		${STAGEDIR}${PREFIX}/sbin
	${INSTALL_SCRIPT} ${WRKSRC}/libreSense-upgrade \
		${STAGEDIR}${PREFIX}/libexec
	${INSTALL_SCRIPT} ${WRKSRC}/libreSense-upgrade.wrapper \
		${STAGEDIR}${PREFIX}/sbin/libreSense-upgrade

.include <bsd.port.post.mk>
