// ChildFrm.cpp : implementation of the CChildFrame class
//

#include "stdafx.h"
#include "HRS.h"

#include "ChildFrm.h"
#include "hrsview.h"
#include "areaview.h"
#include "itemview.h"
#include "saleview.h"
#include "userview.h"
#include "moneyview.h"
#include "navview.h"
#include "mainfrm.h"

#include "queryview.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CChildFrame

IMPLEMENT_DYNCREATE(CChildFrame, CMDIChildWnd)

BEGIN_MESSAGE_MAP(CChildFrame, CMDIChildWnd)
	//{{AFX_MSG_MAP(CChildFrame)
	ON_WM_SIZE()
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CChildFrame construction/destruction

CChildFrame::CChildFrame()
{
	// TODO: add member initialization code here
	m_pActiveView = NULL;
}

CChildFrame::~CChildFrame()
{
}

BOOL CChildFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

//		cs.style = WS_CHILD | WS_VISIBLE| WS_EX_CLIENTEDGE | WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU
//		| FWS_ADDTOTITLE | WS_MINIMIZEBOX | WS_MAXIMIZEBOX;

		cs.style = WS_CHILD | WS_VISIBLE| WS_EX_CLIENTEDGE | WS_OVERLAPPED 
		| FWS_ADDTOTITLE | WS_MINIMIZEBOX | WS_MAXIMIZEBOX;

	if( !CMDIChildWnd::PreCreateWindow(cs) )
		return FALSE;

	return TRUE;
}

void CChildFrame::ActivateFrame(int nCmdShow)
{
	// TODO: Modify this function to change how the frame is activated.

	nCmdShow = SW_SHOWMAXIMIZED;
	
	CMDIChildWnd::ActivateFrame(nCmdShow);
	
}

BOXTYPE CChildFrame::bt = CUSTOMER;
/////////////////////////////////////////////////////////////////////////////
// CChildFrame diagnostics

#ifdef _DEBUG
void CChildFrame::AssertValid() const
{
	CMDIChildWnd::AssertValid();
}

void CChildFrame::Dump(CDumpContext& dc) const
{
	CMDIChildWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CChildFrame message handlers

void CChildFrame::RecalcLayout(BOOL bNotify) 
{
	// TODO: Add your specialized code here and/or call the base class
	CRect rc;
	GetParent()->GetClientRect(&rc);

	this->SetWindowPos(&CWnd::wndBottom, rc.right/6, 0, rc.right * 5 /6, rc.bottom, !SWP_DRAWFRAME);
	//CMDIChildWnd::RecalcLayout(bNotify);
}

void CChildFrame::OnSize(UINT nType, int cx, int cy) 
{
	CMDIChildWnd::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	//::BringWindowToTop(this->m_hWnd);
	CRect rc;
	GetClientRect(&rc);
	if (m_pActiveView)
	{
		m_pActiveView->MoveWindow(&rc);
	}
	GetParent()->GetClientRect(&rc);

	this->SetWindowPos(&CWnd::wndBottom, rc.right/6, 0, rc.right * 5 /6, rc.bottom, !SWP_DRAWFRAME);
	//::SetWindowPos(((CMainFrame*)this->GetParent())->m_pNavClient->m_hWnd,NULL, 0, 0,0, 0,0);
	//((CMainFrame*)this->GetParent())->m_pNavClient->BringWindowToTop();
}

BOOL CChildFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext) 
{
	// TODO: Add your specialized code here and/or call the base class
	//CSplitterWnd sp;
	//CMDIChildWnd::OnCreateClient(lpcs, pContext);
	//AfxMessageBox("create child client");

	/*switch(CChildFrame::bt)
	{
	case CUSTOMER:
		m_wSplitter.CreateStatic(this, 1, 2);//SIZE(10,10), pContext);
	    m_wSplitter.CreateView(0,0,RUNTIME_CLASS(CCUSTOMERView),CSize(500,1000), pContext);
	    m_wSplitter.CreateView(0,1,RUNTIME_CLASS(CNavView),CSize(500,1000), pContext);	
		return TRUE;
	case BOX:
		m_wSplitter.CreateStatic(this, 1, 2);//SIZE(10,10), pContext);
	    m_wSplitter.CreateView(0,0,RUNTIME_CLASS(CNavView),CSize(500,1000), pContext);
	    m_wSplitter.CreateView(0,1,RUNTIME_CLASS(CAreaView),CSize(500,1000), pContext);	
		return TRUE;
	case ITEM:
		m_wSplitter.CreateStatic(this, 1, 2);//SIZE(10,10), pContext);
	    m_wSplitter.CreateView(0,0,RUNTIME_CLASS(CNavView),CSize(500,1000), pContext);
	    m_wSplitter.CreateView(0,1,RUNTIME_CLASS(CItemView),CSize(500,1000), pContext);	
		return TRUE;
	case SALE:
		m_wSplitter.CreateStatic(this, 1, 2);//SIZE(10,10), pContext);
	    m_wSplitter.CreateView(0,0,RUNTIME_CLASS(CNavView),CSize(500,1000), pContext);
	    m_wSplitter.CreateView(0,1,RUNTIME_CLASS(CSaleView),CSize(500,1000), pContext);	
		return TRUE;
	case USER:
		m_wSplitter.CreateStatic(this, 1, 2);//SIZE(10,10), pContext);
	    m_wSplitter.CreateView(0,0,RUNTIME_CLASS(CNavView),CSize(500,1000), pContext);
	    m_wSplitter.CreateView(0,1,RUNTIME_CLASS(CUserView),CSize(500,1000), pContext);	
		return TRUE;
	case MONEY:
		m_wSplitter.CreateStatic(this, 1, 2);//SIZE(10,10), pContext);
	    m_wSplitter.CreateView(0,0,RUNTIME_CLASS(CNavView),CSize(500,1000), pContext);
	    m_wSplitter.CreateView(0,1,RUNTIME_CLASS(CMoneyView),CSize(500,1000), pContext);	
		return TRUE;	
		break;
	default:
		return CMDIChildWnd::OnCreateClient(lpcs, pContext);
	}*/

	CRect rc;
	GetClientRect(&rc);

	switch(CChildFrame::bt)
	{
	case CUSTOMER:
	    m_pActiveView = new CCUSTOMERView;
		m_pActiveView->Create(NULL,NULL,WS_CHILD|WS_CLIPCHILDREN,rc,this,AFX_WS_DEFAULT_VIEW,pContext);
	    m_pActiveView->ShowWindow(SW_SHOW);
		return TRUE;
	case BOX:
	    m_pActiveView = new CAreaView;

	//CWnd *pClient = CWnd::FromHandle(m_hWndMDIClient);
	//CButton *btn = new CButton;
	//btn->Create("Click Me",WS_CHILD,CRect(0,0,100,100), pClient, IDC_BTN_NAV_CUSTOMER);
	//btn->ShowWindow(SW_SHOW);
	//CNavView *pV = new CNavView;
	//::ShowWindow(m_hWndMDIClient, SW_HIDE);
	//pV->SubclassWindow(m_hWndMDIClient);

		m_pActiveView->Create(NULL,NULL,WS_CHILD|WS_CLIPCHILDREN,rc,this,AFX_WS_DEFAULT_VIEW,pContext);
	    m_pActiveView->ShowWindow(SW_SHOW);

		return TRUE;
	case ITEM:
	    m_pActiveView = new CItemView;
		m_pActiveView->Create(NULL,NULL,WS_CHILD|WS_CLIPCHILDREN,rc,this,AFX_WS_DEFAULT_VIEW,pContext);
	    m_pActiveView->ShowWindow(SW_SHOW);	
		return TRUE;
	case SALE:
	    m_pActiveView = new CSaleView;
		m_pActiveView->Create(NULL,NULL,WS_CHILD|WS_CLIPCHILDREN,rc,this,AFX_WS_DEFAULT_VIEW,pContext);
	    m_pActiveView->ShowWindow(SW_SHOW);
		return TRUE;
	case USER:
		m_pActiveView = new CUserView;
		m_pActiveView->Create(NULL,NULL,WS_CHILD|WS_CLIPCHILDREN,rc,this,AFX_WS_DEFAULT_VIEW,pContext);
	    m_pActiveView->ShowWindow(SW_SHOW);
		return TRUE;
	case MONEY:
		m_pActiveView = new CMoneyView;
		m_pActiveView->Create(NULL,NULL,WS_CHILD|WS_CLIPCHILDREN,rc,this,AFX_WS_DEFAULT_VIEW,pContext);
	    m_pActiveView->ShowWindow(SW_SHOW);
		return TRUE;	
		break;
	default:
		return CMDIChildWnd::OnCreateClient(lpcs, pContext);
	}
	return CMDIChildWnd::OnCreateClient(lpcs, pContext);
}

int CChildFrame::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CMDIChildWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here

	return 0;
}

void CChildFrame::CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType) 
{
	// TODO: Add your specialized code here and/or call the base class
	//lpClientRect->left = lpClientRect->right/2;
	CMDIChildWnd::CalcWindowRect(lpClientRect, nAdjustType);
}
