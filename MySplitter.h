#if !defined(AFX_MYSPLITTER_H__C8CE00B7_DF0B_4DE7_A428_5A7727B204DC__INCLUDED_)
#define AFX_MYSPLITTER_H__C8CE00B7_DF0B_4DE7_A428_5A7727B204DC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MySplitter.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMySplitter frame with splitter

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CMySplitter : public CSplitterWnd
{
	DECLARE_DYNCREATE(CMySplitter)
public:
	CMySplitter();           // protected constructor used by dynamic creation

// Attributes
protected:
	//CSplitterWnd    m_wndSplitter;
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMySplitter)
	public:
	virtual BOOL CreateView(int row, int col, CRuntimeClass* pViewClass, SIZE sizeInit, CCreateContext* pContext);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMySplitter();

	// Generated message map functions
	//{{AFX_MSG(CMySplitter)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYSPLITTER_H__C8CE00B7_DF0B_4DE7_A428_5A7727B204DC__INCLUDED_)
