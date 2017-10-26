// test8Doc.h : interface of the CTest8Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEST8DOC_H__00C4A5A1_3BC8_4A31_B7C3_213961E0A202__INCLUDED_)
#define AFX_TEST8DOC_H__00C4A5A1_3BC8_4A31_B7C3_213961E0A202__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTest8Doc : public CDocument
{
protected: // create from serialization only
	CTest8Doc();
	DECLARE_DYNCREATE(CTest8Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest8Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTest8Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTest8Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST8DOC_H__00C4A5A1_3BC8_4A31_B7C3_213961E0A202__INCLUDED_)
