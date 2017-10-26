// Edge.h: interface for the Edge class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_EDGE_H__F7F21432_A038_4319_B2F8_057151FCF878__INCLUDED_)
#define AFX_EDGE_H__F7F21432_A038_4319_B2F8_057151FCF878__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Edge  
{
	public:
	Edge();
	virtual ~Edge();
	double x;
	int yMax;
	double k;//´úÌæ1/k
	Edge *next;

};

#endif // !defined(AFX_EDGE_H__F7F21432_A038_4319_B2F8_057151FCF878__INCLUDED_)
