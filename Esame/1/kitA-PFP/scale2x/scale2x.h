// =====================================================================
//  scale2x.h
// =====================================================================

//  Author:         (c) 2017 Camil Demetrescu
//  License:        See the end of this file for license information
//  Created:        Jul 10, 2017

//  Last changed:   $Date: 2017/07/10 --:--:-- $
//  Changed by:     $Author: demetres $
//  Revision:       $Revision: 1.00 $


#ifndef __SCALE2X__
#define __SCALE2X__

#include "clut.h"

void scale2x(unsigned char* in, int w, int h,
             unsigned char** out, int* ow, int* oh,
             clut_device* dev, double* td);

#endif


// Copyright (C) 2017 Camil Demetrescu

// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
// USA
