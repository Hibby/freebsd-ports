# Created by: Eric Turgeon <ericturgeon.bsd@gmail.org>
# $FreeBSD$

PORTNAME=	networkmgr
DISTVERSION=	2.8
CATEGORIES=	net-mgmt

MAINTAINER=	ericbsd@FreeBSD.org
COMMENT=	FreeBSD/GhostBSD network conection manager

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	doas:security/doas \
		${LOCALBASE}/share/icons/hicolor/index.theme:misc/hicolor-icon-theme

USES=		python:3.6 gnome
USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

NO_ARCH=	yes
USE_PYTHON=	distutils
USE_GNOME=	pygobject3 gtk-update-icon-cache

SUB_FILES=	pkg-message


.include <bsd.port.mk>
