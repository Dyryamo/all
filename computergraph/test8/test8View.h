// test8View.h : interface of the CTest8View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEST8VIEW_H__3E8E9F51_718B_4A6F_8F08_CEB970B46DF3__INCLUDED_)
#define AFX_TEST8VIEW_H__3E8E9F51_718B_4A6F_8F08_CEB970B46DF3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Bucket.h"
#include "AET.h"
#define Number 7
class CTest8View : public CView
{
COLORREF GetColor;//调色板
CPoint Point[7];//定义多边形
Bucket *HeadB,*CurrentB;//桶的头结点和当前结点
AET E[Number],*HeadE,*CurrentE,*T1,*T2;//有效边表的结点

protected: // create from serialization only
	CTest8View();
	DECLARE_DYNCREATE(CTest8View)

// Attributes
public:
	CTest8Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest8View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	void PolygonFill();
	void EdgeOrder();
	void AddEdge(AET *NewEdge);
	void Et();
	void CreatBucket();
	virtual ~CTest8View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTest8View)
	afx_msg void OnMenuAET();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in test8View.cpp
inline CTest8Doc* CTest8View::GetDocument()
   { return (CTest8Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST8VIEW_H__3E8E9F51_718B_4A6F_8F08_CEB970B46DF3__INCLUDED_)
