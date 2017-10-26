// Bucket.h: interface for the Bucket class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BUCKET_H__A1B20881_DC41_4814_9F80_16C1EFED04F8__INCLUDED_)
#define AFX_BUCKET_H__A1B20881_DC41_4814_9F80_16C1EFED04F8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "AET.h"
#include "Bucket.h"
class Bucket  
{
public:
Bucket();
	virtual ~Bucket();
	int ScanLine;
	AET *p;//桶上的边表指针
	Bucket *next;

};

#endif // !defined(AFX_BUCKET_H__A1B20881_DC41_4814_9F80_16C1EFED04F8__INCLUDED_)
