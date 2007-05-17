/* 

Copyright 2007 Peter Hutterer <peter@cs.unisa.edu.au>

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of the author shall
not be used in advertising or otherwise to promote the sale, use or
other dealings in this Software without prior written authorization
from the author.

*/

#ifndef _GEPROTO_H_
#define _GEPROTO_H_

#include<X11/Xproto.h>
#include<X11/X.h>
#include<X11/extensions/ge.h>


/*********************************************************
 *
 * Protocol request constants
 *
 */

#define X_GEGetExtensionVersion 1

/*********************************************************
 *
 * XGE protocol requests/replies 
 *
 */

/* generic request */
typedef struct {
    CARD8   reqType;
    CARD8   ReqType;
    CARD16  length B16;
} xGEReq;


/* QueryVersion */
typedef struct {
    CARD8 	reqType;       /* input extension major code   */
    CARD8 	ReqType;       /* always X_GEQueryVersion */
    CARD16 	length B16;
    CARD16      majorVersion B16;
    CARD16      minorVersion B16;
} xGEQueryVersionReq;

#define sz_xGEQueryVersionReq    8

typedef struct {
    CARD8 	repType;  	/* X_Reply 			*/
    CARD8 	RepType;       	/* always X_GEQueryVersion */
    CARD16 	sequenceNumber B16;
    CARD32 	length B32;
    CARD16 	majorVersion B16;
    CARD16 	minorVersion B16;
    CARD32 	pad00 B32;
    CARD32 	pad01 B32;
    CARD32 	pad02 B32;
    CARD32 	pad03 B32;
    CARD32 	pad04 B32;
} xGEQueryVersionReply;

#define sz_xGEQueryVersionReply    32

#endif /* _GEPROTO_H_ */

