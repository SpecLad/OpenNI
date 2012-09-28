/****************************************************************************
*                                                                           *
*  OpenNI 1.x Alpha                                                         *
*  Copyright (C) 2011 PrimeSense Ltd.                                       *
*                                                                           *
*  This file is part of OpenNI.                                             *
*                                                                           *
*  OpenNI is free software: you can redistribute it and/or modify           *
*  it under the terms of the GNU Lesser General Public License as published *
*  by the Free Software Foundation, either version 3 of the License, or     *
*  (at your option) any later version.                                      *
*                                                                           *
*  OpenNI is distributed in the hope that it will be useful,                *
*  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the             *
*  GNU Lesser General Public License for more details.                      *
*                                                                           *
*  You should have received a copy of the GNU Lesser General Public License *
*  along with OpenNI. If not, see <http://www.gnu.org/licenses/>.           *
*                                                                           *
****************************************************************************/
#ifndef _XN_USB_INTERNAL_H_
#define _XN_USB_INTERNAL_H_

//---------------------------------------------------------------------------
// Includes
//---------------------------------------------------------------------------
#include <XnUSB.h>

//---------------------------------------------------------------------------
// Global Variables
//---------------------------------------------------------------------------
extern XnBool g_bUSBWasInit;

//---------------------------------------------------------------------------
// Macros
//---------------------------------------------------------------------------
#define XN_VALIDATE_USB_INIT()				\
	if (g_bUSBWasInit != TRUE)				\
	{										\
		return (XN_STATUS_USB_NOT_INIT);	\
	}

#define XN_VALIDATE_USB_DEV_HANDLE(x)				\
	if (x == NULL)									\
	{												\
		return (XN_STATUS_USB_DEVICE_NOT_VALID);	\
	}												\
	if (x.bValid != TRUE)							\
	{												\
		return (XN_STATUS_USB_DEVICE_NOT_VALID);	\
	}

#define XN_VALIDATE_USB_PDEV_HANDLE(x)				\
	if (x == NULL)									\
	{												\
		return (XN_STATUS_USB_DEVICE_NOT_VALID);	\
	}												\
	if (x->bValid != TRUE)							\
	{												\
		return (XN_STATUS_USB_DEVICE_NOT_VALID);	\
	}

#define XN_VALIDATE_USB_EP_HANDLE(x)				\
	if (x == NULL)									\
	{												\
		return (XN_STATUS_USB_ENDPOINT_NOT_VALID);	\
	}												\
	if (x.bValid != TRUE)							\
	{												\
		return (XN_STATUS_USB_ENDPOINT_NOT_VALID);	\
	}

#define XN_VALIDATE_USB_PEP_HANDLE(x)				\
	if (x == NULL)									\
	{												\
		return (XN_STATUS_USB_ENDPOINT_NOT_VALID);	\
	}												\
	if (x->bValid != TRUE)							\
	{												\
		return (XN_STATUS_USB_ENDPOINT_NOT_VALID);	\
	}

#endif //_XN_USB_INTERNAL_H_
