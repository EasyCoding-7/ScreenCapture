
// Test_CapDlg.h : ͷ�ļ�
//

#pragma once


// CTest_CapDlg �Ի���
class CTest_CapDlg : public CDialogEx
{
// ����
public:
	CTest_CapDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_TEST_CAP_DIALOG };

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

	afx_msg void OnTimer(UINT_PTR nIDEvent);

	bool SaveBmpFile(short sFrameWidth,short sFrameHeight,short sColorSpace,const char *apBmpData, TCHAR *pFileName,DWORD dwLen);

	BOOL SetLayeredWindowAttributes(HWND hwnd,COLORREF crKey,BYTE bAlpha,DWORD dwFlags);

public:
	BYTE	*m_pbyBmpTemp ;
	bool	m_bFirst;
	int		m_iFrameCount;
	LARGE_INTEGER m_StatTime;
	LARGE_INTEGER m_EndTime;
	LARGE_INTEGER m_Frequency;

};
