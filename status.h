/*

    eboard - chess client
    http://www.bergo.eng.br/eboard
    https://github.com/fbergo/eboard
    Copyright (C) 2000-2016 Felipe Bergo
    fbergo/at/gmail/dot/com

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/



#ifndef EBOARD_STATUS_H
#define EBOARD_STATUS_H 1

#include "widgetproxy.h"

class Status : public WidgetProxy {
 public:
  Status();
  void setText(const char *msg);
  void setText(const char *msg, int secs);
  int WaitUpdate;
 private:
  void waitUpdate();
  void killExp();

  friend gboolean st_expire(gpointer data);

  int toid;
  GtkWidget *label;
};


#endif
