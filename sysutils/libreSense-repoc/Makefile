PORTNAME=	repoc
DISTVERSION=	20241121
CATEGORIES=	sysutils
PKGNAMEPREFIX=	libreSense-

MAINTAINER=	luiz@netgate.com
COMMENT=	libreSense dynamic repository client

LIB_DEPENDS=	libucl.so:textproc/libucl

PLIST_FILES=	sbin/libreSense-repoc \
		sbin/libreSense-repoc-static
USE_GITLAB=	yes
#GL_SITE=	https://gitlab.netgate.com
GL_ACCOUNT=	Christopher-YeTI
GL_PROJECT=	repoc
GL_COMMIT=	8552d9c8cf4cf3a033f816fe3ed119e0e9c6bde8
FETCH_BEFORE_ARGS=	--no-verify-peer

.include <bsd.port.mk>
