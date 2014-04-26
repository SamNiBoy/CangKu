// BoxDoc.h: interface for the CBoxDoc class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BOXDOC_H__8EAED7A5_F47F_4430_B0B4_C18498BFE9F5__INCLUDED_)
#define AFX_BOXDOC_H__8EAED7A5_F47F_4430_B0B4_C18498BFE9F5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include"areaset.h"

class CAreaDoc : public CDocument
{
protected:
	DECLARE_DYNCREATE(CAreaDoc)
public:
	CAreaSet m_AreaSet;
public:
	CAreaDoc();
	virtual ~CAreaDoc();

protected:

	DECLARE_MESSAGE_MAP()
};

#endif // !defined(AFX_BOXDOC_H__8EAED7A5_F47F_4430_B0B4_C18498BFE9F5__INCLUDED_)
