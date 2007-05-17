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

#ifndef _GE_H_
#define _GE_H_

#define GE_NAME         "Generic Event Extension"
#define GE_MAJOR        1
#define GE_MINOR        0

/*********************************************************
 *
 * Requests
 *
 */

#define X_GEQueryVersion        0

#define GENumberRequests       (X_GEQueryVersion + 1)

/*********************************************************
 *
 * Events
 *
 */

#define X_GenericEvent        0

#define GENumberEvents        (X_GenericEvent + 1)

/*********************************************************
 *
 * Errors
 *
 */

#define GENumberErrors        0

#endif /* _GE_H_ */
