# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD$

PORTNAME=	Text-Diff
PORTVERSION=	1.44
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Text::Diff - Perform diffs on files and record sets

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

COMMON_DEPENDS=	p5-Algorithm-Diff>=1.19:devel/p5-Algorithm-Diff
BUILD_DEPENDS=	${COMMON_DEPENDS}
RUN_DEPENDS=	${COMMON_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
