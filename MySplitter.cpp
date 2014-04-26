// MySplitter.cpp : implementation file
//

#include "stdafx.h"
#include "hrs.h"
#include "MySplitter.h"
#include <afxpriv.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMySplitter

IMPLEMENT_DYNCREATE(CMySplitter, CMDIChildWnd)

CMySplitter::CMySplitter()
{
}

CMySplitter::~CMySplitter()
{
}



BEGIN_MESSAGE_MAP(CMySplitter, CSplitterWnd)
	//{{AFX_MSG_MAP(CMySplitter)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMySplitter message handlers

BOOL CMySplitter::CreateView(int row, int col, CRuntimeClass* pViewClass, SIZE sizeInit, CCreateContext* pContext) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CSplitterWnd::CreateView(row, col, pViewClass, sizeInit, pContext);

}
