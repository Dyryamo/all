// AET.h: interface for the AET class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_AET_H__71E8577A_23E0_45FB_9FE8_760E071E1036__INCLUDED_)
#define AFX_AET_H__71E8577A_23E0_45FB_9FE8_760E071E1036__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class AET  
{
public:
	AET();
	virtual ~AET();
	double x;
	int yMax;
	double k;//´úÌæ1/k
	AET *next;


};

#endif // !defined(AFX_AET_H__71E8577A_23E0_45FB_9FE8_760E071E1036__INCLUDED_)
