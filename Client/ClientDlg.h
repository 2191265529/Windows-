
// ClientDlg.h : ͷ�ļ�
//

#pragma once
#include "MySocket.h"

// CClientDlg �Ի���
class CClientDlg : public CDialogEx
{
// ����
public:
	CClientDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_CLIENT_DIALOG };

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
	SOCKET s;
	CMySocket m_Mysock;
	CToolBar m_toolbar;
	CImageList m_imagelist;
	CStatusBar m_statusbar;
public:
	static DWORD WINAPI Client(LPVOID self);
	void UpdataMain(int port);
	void init();
	afx_msg void OnClose();
};
