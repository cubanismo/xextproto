/*
 * Copyright © 2007 Peter Hutterer
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of the author not be used in
 * advertising or publicity pertaining to distribution of the software without
 * specific, written prior permission.  The author makes no
 * representations about the suitability of this software for any purpose.  It
 * is provided "as is" without express or implied warranty.
 *
 * THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */


/* XGE Client interfaces */

#ifndef _XGE_H_
#define _XGE_H_

#include <X11/Xlib.h>
#include <X11/Xfuncproto.h>

_XFUNCPROTOBEGIN

/**
 * Generic Event mask. 
 * To be used whenever a list of masks per extension has to be provided.
 */
typedef struct {
    CARD8       extension;
    CARD8       pad0;
    CARD16      pad1;
    CARD32      evmask;
} XGenericEventMask;

Bool XGEQueryExtension(Display* dpy, int *event_basep, int *err_basep);
Bool XGEQueryVersion(Display* dpy, int *major, int* minor);

_XFUNCPROTOEND

#endif /* _XGE_H_ */
