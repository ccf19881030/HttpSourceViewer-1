#pragma once
#include "afxwin.h"


// CTabHtmlHead 对话框

class CTabHtmlHead : public CDialogEx
{
	DECLARE_DYNAMIC(CTabHtmlHead)

public:
	CTabHtmlHead(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CTabHtmlHead();

// 对话框数据
	enum { IDD = IDD_TAB_HTML_HEAD };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_editHtmlHead;
};
