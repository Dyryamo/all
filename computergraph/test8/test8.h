// test8.h : main header file for the TEST8 application
//

#if !defined(AFX_TEST8_H__24DF6712_5519_4E45_BAB1_78B27FD01867__INCLUDED_)
#define AFX_TEST8_H__24DF6712_5519_4E45_BAB1_78B27FD01867__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTest8App:
// See test8.cpp for the implementation of this class
//

class CTest8App : public CWinApp
{
public:
	CTest8App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest8App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTest8App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST8_H__24DF6712_5519_4E45_BAB1_78B27FD01867__INCLUDED_)
