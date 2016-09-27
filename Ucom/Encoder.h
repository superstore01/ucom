#pragma once
#include "afxwin.h"


// CEncoder �Ի���

class CEncoder : public CDialog
{
	DECLARE_DYNAMIC(CEncoder)

public:
	CEncoder(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CEncoder();

// �Ի�������
	enum { IDD = IDD_ENCODER };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

public:
	CString GetAsciiCode(CString &str);
	static const char HexTable[17];
	CString Ascii2Unicode(CString &strascii);
	CString Ascii2Utf8(CString &strascii);
	
	CString Unicode2Ascii(const CString &dataStr);
	CString Utf8toAscii(const CString &dataStr);

	DECLARE_MESSAGE_MAP()

	afx_msg void OnEnChangeEncinput();
	afx_msg void OnBnClickedEncclear();
//	CStatic mEncDisp;
	int m_RadioEnc;
	afx_msg void OnClickedRadio1();
	virtual void OnOK();
};