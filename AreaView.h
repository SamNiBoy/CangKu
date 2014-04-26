#if !defined(AFX_BOXVIEW_H__F5CBC169_2B0A_40B9_91DD_5DE240A96540__INCLUDED_)
#define AFX_BOXVIEW_H__F5CBC169_2B0A_40B9_91DD_5DE240A96540__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BoxView.h : header file
//
#include"areadoc.h"
#include"queryview.h"
/////////////////////////////////////////////////////////////////////////////
// CBoxView form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CAreaView : public CRecordView
{
public:
	CAreaView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CAreaView)

// Form Data
public:
	//{{AFX_DATA(CAreaView)
	enum { IDD = IDD_AREA_FORM };
	CAreaSet* m_pSet;
	//}}AFX_DATA

// Attributes
public:
	CAreaDoc* GetDocument();
// Operations
public:
	void ClearBoxInfo();
	void ClearRentInfo();
	BOOL CheckRentRequired();
	BOOL GetRentInformation(CString boxid, CString renterid, CString seqnum);
	BOOL CalCulateRentTotPrice(BOOL bCheckFlg);
	BOOL BuildSql(CQueryView *pQV);
	BOOL CheckRequired();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAreaView)
	public:
	virtual CRecordset* OnGetRecordset();
	virtual void OnInitialUpdate();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CAreaView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CAreaView)
	afx_msg void OnBtnBoxquery();
	afx_msg void OnBtnBoxadd();
	afx_msg void OnBtnBoxmodify();
	afx_msg void OnBtnBoxdel();
	afx_msg void OnBtnBoxclear();
	afx_msg void OnBtnBoxlayout();
	afx_msg void OnBtnBoxQuery();
	afx_msg void OnKillfocusEdtBoxownerid();
	afx_msg void OnCloseupDtepkRentfrom(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCloseupDtepkRentto(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBtnBoxrentadd();
	afx_msg void OnBtnBoxrentmodify();
	afx_msg void OnBtnBoxrentdel();
	afx_msg void OnBtnBoxrentover();
	afx_msg void OnChkBoxRent();
	afx_msg void OnBtnBoxrentquery();
	afx_msg void OnChkBoxRentexp();
	afx_msg void OnChkBoxCustomer();
	afx_msg void OnChkBoxItem();
	afx_msg void OnBtnBoxownerquery();
	afx_msg void OnBtnAreaadd();
	afx_msg void OnBtnAreaquery();
	afx_msg void OnBtnInbound();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in HRSView.cpp
inline CAreaDoc* CAreaView::GetDocument()
   { return (CAreaDoc*)m_pDocument; }
#endif
/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOXVIEW_H__F5CBC169_2B0A_40B9_91DD_5DE240A96540__INCLUDED_)
