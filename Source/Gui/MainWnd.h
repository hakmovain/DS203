#ifndef __MAINWND_H__
#define __MAINWND_H__

#define MainWnd (*CMainWnd::m_pInstance)

#include "Toolbar.h"
#include "Oscilloscope/Oscilloscope.h"
#include "Others.h"
#include "Generator/Generator.h"
#include "MainMenu.h"
#include "About/Screensaver.h"
#include "Spectrum/Spectrum.h"

class CMainWnd : public CWnd
{
public:
	static CMainWnd	*m_pInstance;

public:
	CWndToolBar			m_wndToolBar;
	CWndOscGraph		m_wndGraph;
	CWndSigGraph		m_wndSignalGraph;
	CWndSpectrumGraph		m_wndSpectrumGraph;
	CWndMenuInput		m_wndMenuInput;
	CWndMenuCursor		m_wndMenuCursor;
	CWndMenuMeas		m_wndMenuMeas;
	CWndMenuSettings	m_wndMenuSettings;
	CWndMenuDisplay		m_wndMenuDisplay;
	CWndMenuGenerator	m_wndMenuGenerator;
	CWndMenuMath		m_wndMenuMath;
	CWndMenuTools		m_wndMenuTools;
	CWndZoomBar			m_wndZoomBar;
	CWndLevelReferences	m_wndLReferences;
	CWndTimeReferences	m_wndTReferences;
	CWndScreenSaver		m_wndScreenSaver;
	CWndMenuSpectMain	m_wndSpectrumMain;

	CWndModuleSelector	m_wndModuleSel;
	CWndMessageBox		m_wndMessage;	

	void Create();
	virtual void OnPaint();
	virtual void OnMessage(CWnd* pSender, ui16 code, ui32 data);
	void OnTimer();

private:
	void SdkProc();
};

#endif