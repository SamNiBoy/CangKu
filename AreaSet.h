#if !defined(AFX_BOXSET_H__A9041C98_3DB5_478A_AF26_7E72BE34E27B__INCLUDED_)
#define AFX_BOXSET_H__A9041C98_3DB5_478A_AF26_7E72BE34E27B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BoxSet.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAreaSet recordset

class CAreaSet : public CRecordset
{
public:
	CAreaSet();
	DECLARE_DYNAMIC(CAreaSet)

// Field/Param Data
	//{{AFX_FIELD(CAreaSet, CRecordset)
	CString	m_areaid;
	CString	m_custid;
	int	m_areasize;
	int m_is_trailer;
	CString	m_description;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAreaSet)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOXSET_H__A9041C98_3DB5_478A_AF26_7E72BE34E27B__INCLUDED_)
