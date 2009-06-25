xextdir = $(includedir)/X11/extensions
xext_HEADERS = \
	dpms.h \
	dpmsstr.h \
	extutil.h \
        ge.h \
        geproto.h \
        Xge.h \
	lbx.h \
	lbxproto.h \
	mitmisc.h \
	mitmiscproto.h \
	multibuf.h \
	multibufst.h \
	security.h \
	securstr.h \
	shape.h \
	shapestr.h \
	shm.h \
	shmproto.h \
	sync.h \
	syncstr.h \
	ag.h \
	agproto.h \
	cup.h \
	cupproto.h \
	Xdbe.h \
	Xdbeproto.h \
	EVI.h \
	EVIproto.h \
	Xext.h \
	xtestext1.h \
	xtest.h \
	xtestproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xextproto.pc

EXTRA_DIST = xextproto.pc.in geproto.txt

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog
