PORTNAME=	bz2
DISTVERSION=	0.8.0
CATEGORIES=	archivers
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	freebsd@dev.thsi.be
COMMENT=	OCaml library to manipulate bz2 files
WWW=		https://gitlab.com/irill/camlbz2

LICENSE=	LGPL21 LGPL3
LICENSE_COMB=	dual

USES=		ocaml:dune,ldconfig
USE_GITLAB=	yes
GL_ACCOUNT=	irill
GL_PROJECT=	camlbz2

DOCSDIR=	${OCAML_DOCSDIR}/${PORTNAME}
EXAMPLESDIR=	${OCAML_EXAMPLESDIR}/${PORTNAME}
PORTDOCS=	LICENSE README
PORTEXAMPLES=	bunzip2.ml

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install:
	@${STRIP_CMD} \
		${STAGEDIR}${PREFIX}/${OCAML_SITELIBDIR}/bz2/bz2.cmxs \
		${STAGEDIR}${PREFIX}/${OCAML_SITELIBDIR}/bz2/dllbz2_stubs.so

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>
