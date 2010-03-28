xextdir = $(includedir)/X11/extensions
xext_HEADERS = \
	dpmsconst.h \
	dpmsproto.h \
        ge.h \
        geproto.h \
	lbx.h \
	lbxproto.h \
	mitmiscconst.h \
	mitmiscproto.h \
	multibufconst.h \
	multibufproto.h \
	secur.h \
	securproto.h \
	shapeconst.h \
	shapeproto.h \
	shm.h \
	shmproto.h \
	syncconst.h \
	syncproto.h \
	ag.h \
	agproto.h \
	cup.h \
	cupproto.h \
	dbe.h \
	dbeproto.h \
	EVI.h \
	EVIproto.h \
	xtestext1proto.h \
	xtestext1const.h \
	xtestconst.h \
	xtestproto.h

#
# These headers allow old servers to be built with
# new headers
#
compatdir = $(xextdir)
compat_HEADERS = \
	shapestr.h \
	shmstr.h \
	syncstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xextproto.pc

dist_doc_DATA = geproto.txt

EXTRA_DIST = xextproto.pc.in

MAINTAINERCLEANFILES = ChangeLog INSTALL

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
