# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD$

PORTNAME=	avro
PORTVERSION=	1.8.2
DISTVERSIONPREFIX=	release-
PORTREVISION=	2
CATEGORIES=	devel
PKGNAMESUFFIX=	-cpp

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	C++ library for Apache Avro

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libboost_regex.so:devel/boost-libs

USES=		cmake
USE_LDCONFIG=	yes
WRKSRC_SUBDIR=	lang/c++

GH_ACCOUNT=	apache
USE_GITHUB=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|$${AVRO_VERSION_MAJOR}.\($${AVRO_VERSION_MINOR}\)|\1|' ${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
