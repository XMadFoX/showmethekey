#ifndef __SMTK_APP_WIN_H__
#define __SMTK_APP_WIN_H__

#include <gtk/gtk.h>

#include "smtk-app.h"

#define SMTK_TYPE_APP_WIN smtk_app_win_get_type()
G_DECLARE_FINAL_TYPE(SmtkAppWin, smtk_app_win, SMTK, APP_WIN, GtkApplicationWindow)

SmtkAppWin *smtk_app_win_new(SmtkApp *app);

#endif