
// 041_ShowDifPicDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "PictureEx.h"

// CMy041_ShowDifPicDlg �Ի���
class CMy041_ShowDifPicDlg : public CDialog
{
// ����
public:
	CMy041_ShowDifPicDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY041_SHOWDIFPIC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
