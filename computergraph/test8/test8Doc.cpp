// test8Doc.cpp : implementation of the CTest8Doc class
//

#include "stdafx.h"
#include "test8.h"

#include "test8Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTest8Doc

IMPLEMENT_DYNCREATE(CTest8Doc, CDocument)

BEGIN_MESSAGE_MAP(CTest8Doc, CDocument)
	//{{AFX_MSG_MAP(CTest8Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest8Doc construction/destruction

CTest8Doc::CTest8Doc()
{
	// TODO: add one-time construction code here

}

CTest8Doc::~CTest8Doc()
{
}

BOOL CTest8Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTest8Doc serialization

void CTest8Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTest8Doc diagnostics

#ifdef _DEBUG
void CTest8Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTest8Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTest8Doc commands
