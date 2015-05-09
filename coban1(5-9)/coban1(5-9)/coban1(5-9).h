
// coban1(5-9).h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ccoban159App:
// See coban1(5-9).cpp for the implementation of this class
//

class Ccoban159App : public CWinApp
{
public:
	Ccoban159App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Ccoban159App theApp;