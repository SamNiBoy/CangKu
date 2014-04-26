// BoxSet.cpp : implementation file
//

#include "stdafx.h"
#include "HRS.h"
#include "AreaSet.h"
#include "dbmanger.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAreaSet

IMPLEMENT_DYNAMIC(CAreaSet, CRecordset)

CAreaSet::CAreaSet()
: CRecordset(&CDbManger::db)
{
	//{{AFX_FIELD_INIT(CAreaSet)
	m_areaid = _T("");
	m_custid = _T("");
	m_areasize = 0;
	m_is_trailer = 0;
	m_description = _T("");
	m_nFields = 5;
	//}}AFX_FIELD_INIT
	//m_nDefaultType = snapshot;
	this->m_strFilter = " 1 = 2";
}


CString CAreaSet::GetDefaultConnect()
{
	return CDbManger::db.GetConnect();
}

CString CAreaSet::GetDefaultSQL()
{
	return _T("[dbo].[area]");
}

void CAreaSet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CAreaSet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[areaid]"), m_areaid);
	RFX_Text(pFX, _T("[custid]"), m_custid);
	RFX_Int(pFX, _T("[areasize]"), m_areasize);
	RFX_Int(pFX, _T("[is_trailer]"), m_is_trailer);
	RFX_Text(pFX, _T("[description]"), m_description);
	//}}AFX_FIELD_MAP
	m_areaid.TrimLeft();
	m_areaid.TrimRight();
	m_custid.TrimLeft();
	m_custid.TrimRight();
	m_description.TrimLeft();
	m_description.TrimRight();

}

/////////////////////////////////////////////////////////////////////////////
// CAreaSet diagnostics

#ifdef _DEBUG
void CAreaSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CAreaSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
