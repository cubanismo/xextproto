xextdir = $(includedir)/X11/extensions
xext_HEADERS = \
	dpms.h \
	dpmsstr.h \
	extutil.h \
        ge.h \
        geproto.h \
        Xge.h \
	lbxstr.h \
	mitmisc.h \
	mitmiscproto.h \
	multibuf.h \
	multibufst.h \
	security.h \
	securstr.h \
	shape.h \
	shapestr.h \
	shmstr.h \
	sync.h \
	syncstr.h \
	Xag.h \
	Xagstr.h \
	Xcup.h \
	Xcupstr.h \
	Xdbe.h \
	Xdbeproto.h \
	EVI.h \
	EVIproto.h \
	Xext.h \
	XLbx.h \
	XShm.h \
	xtestext1.h \
	XTest.h \
	xteststr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xextproto.pc

EXTRA_DIST = xextproto.pc.in geproto.txt

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog
