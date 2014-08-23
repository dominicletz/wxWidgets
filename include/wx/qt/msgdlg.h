/////////////////////////////////////////////////////////////////////////////
// Name:        wx/qt/msgdlg.h
// Author:      Peter Most, Javier Torres
// Copyright:   (c) Peter Most, Javier Torres
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_QT_MSGDLG_H_
#define _WX_QT_MSGDLG_H_

#include "wx/msgdlg.h"

#include <QtWidgets/QMessageBox>

class WXDLLIMPEXP_CORE wxMessageDialog : public wxMessageDialogBase
{
public:
    wxMessageDialog(wxWindow *parent, const wxString& message,
                    const wxString& caption = wxMessageBoxCaptionStr,
                    long style = wxOK|wxCENTRE,
                    const wxPoint& pos = wxDefaultPosition);

    // Reimplemented to translate return codes from Qt to wx
    virtual int ShowModal();
    
    virtual QMessageBox *GetHandle() const;

private:
    wxQtPointer< QMessageBox > m_qtMessageBox;
};

#endif // _WX_QT_MSGDLG_H_