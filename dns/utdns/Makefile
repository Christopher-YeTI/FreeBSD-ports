PORTNAME=	utdns
DISTVERSION=	1.2
CATEGORIES=	dns
MASTER_SITES=	https://github.com/rahra/${PORTNAME}/releases/download/v${DISTVERSION}/
DISTNAME=	${PORTNAME}-${DISTVERSION}.r1265

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Proxy UDP/DNS to TCP/DNS
WWW=		https://github.com/rahra/utdns

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USE_RC_SUBR=	${PORTNAME}

GNU_CONFIGURE=	yes

CFLAGS+=	-DSOCK_NONBLOCK=1

SUB_LIST=	PORTNAME=${PORTNAME}

PLIST_FILES=	bin/utdns

.include <bsd.port.mk>
