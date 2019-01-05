
// 041_ShowDifPicDlg.h : 头文件
//

#pragma once
#include "afxwin.h"
#include "PictureEx.h"

// CMy041_ShowDifPicDlg 对话框
class CMy041_ShowDifPicDlg : public CDialog
{
// 构造
public:
	CMy041_ShowDifPicDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY041_SHOWDIFPIC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CPictureEx tu2;
	CPictureEx tu4;
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	CStatic tu5;
	CStatic tu7;
	CPictureEx tu6;
	CPictureEx tu8;
	afx_msg void OnBnClickedButton3();
};
