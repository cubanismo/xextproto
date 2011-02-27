
if ENABLE_SPECS
if HAVE_XMLTO

# Main DocBook/XML files (DOCTYPE book)
docbook = 		\
	appgrp.xml	\
	dbe.xml		\
	dpms.xml	\
	evi.xml		\
	geproto.xml	\
	lbx.xml		\
	multibuf.xml	\
	security.xml	\
	shape.xml	\
	shm.xml		\
	sync.xml	\
	tog-cup.xml	\
	xtest.xml

# Included chapters, appendix, images
chapters = appendix.xml

# The location where the DocBook/XML files and their generated formats are installed
shelfdir = $(docdir)

# Generate DocBook/XML output formats with or without stylesheets
include $(top_srcdir)/docbook.am

endif HAVE_XMLTO
endif ENABLE_SPECS
