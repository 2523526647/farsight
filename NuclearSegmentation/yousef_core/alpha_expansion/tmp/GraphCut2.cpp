/* 
 * Copyright 2009 Rensselaer Polytechnic Institute
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 2 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "GraphCut.h"
#include <mex.h>
#include <matrix.h>

/* memory management */
void* operator new(size_t size)
{
    void *ptr = NULL;
//    mexWarnMsgTxt("Overloaded new operator");
    ptr = mxMalloc(size);
    mxAssert(ptr!=NULL,"memory allocation error");
    mexMakeMemoryPersistent(ptr);
    return ptr;
}
void* operator new[](size_t size)
{
    void *ptr = NULL;
//    mexWarnMsgTxt("Overloaded new[] operator");
    ptr = mxMalloc(size);
    mxAssert(ptr!=NULL,"memory allocation error");
    mexMakeMemoryPersistent(ptr);
    return ptr;
}
void operator delete(void* ptr)
{
//    mexWarnMsgTxt("Overloaded delete operator");
    mxFree(ptr);
}
void operator delete[](void* ptr)
{
//    mexWarnMsgTxt("Overloaded delete[] operator");
    mxFree(ptr);
}
