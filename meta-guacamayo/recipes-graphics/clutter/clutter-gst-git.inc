
SRCREV = "c7adcda3fb4dd06e6570d1f42ee3ec08eb39d52a"
PV = "1.6.0+git${SRCPV}"
INCPR_append = ".2"

LIC_FILES_CHKSUM = "file://COPYING;md5=4fbd65380cdd255951079008b364516c \
                    file://clutter-gst/clutter-gst.h;beginline=1;endline=24;md5=95baacba194e814c110ea3bdf25ddbf4"


SRC_URI = "git://git.gnome.org/clutter-gst;protocol=git;branch=master\
           file://${COREBASE}/meta/recipes-graphics/clutter/clutter-gst/enable_tests-1.8.patch \
	   file://${COREBASE}/meta-guacamayo/recipes-graphics/clutter/clutter-gst-1.6/clutter-1.12.patch \
	   file://${COREBASE}/meta-guacamayo/recipes-graphics/clutter/clutter-gst-1.6/fix-for-no-gles1.patch"

S = "${WORKDIR}/git"

