# $FreeBSD$

PORTNAME=	kde-thumbnailer-chm
PORTVERSION=	0.2
PORTREVISION=	5
CATEGORIES=	misc kde
MASTER_SITES=	http://kde-apps.org/CONTENT/content-files/
DISTNAME=	153410-${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	KDE thumbnail generator for CHM files

LIB_DEPENDS=	libchm.so:misc/chmlib

USES=		cmake kde:4 qt:4
USE_KDE=	kdelibs automoc4
USE_QT=		moc_build qmake_build rcc_build uic_build
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

PLIST_FILES=	lib/kde4/chmthumbnail.so \
		share/kde4/services/chmthumbnail.desktop

.include <bsd.port.mk>
