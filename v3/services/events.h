////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// This file is part of QGoogleCalendar.                                      //
// Copyright (c) 2014 Jacob Dawid <jacob@omg-it.works>                        //
//                                                                            //
// QGoogleCalendar is free software: you can redistribute it and/or modify    //
// it under the terms of the GNU Affero General Public License as             //
// published by the Free Software Foundation, either version 3 of the         //
// License, or (at your option) any later version.                            //
//                                                                            //
// QGoogleCalendar is distributed in the hope that it will be useful,         //
// but WITHOUT ANY WARRANTY; without even the implied warranty of             //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              //
// GNU Affero General Public License for more details.                        //
//                                                                            //
// You should have received a copy of the GNU Affero General Public           //
// License along with QGoogleCalendar.                                        //
// If not, see <http://www.gnu.org/licenses/>.                                //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#pragma once

// Own includes
#include "v3/services/service.h"

#include "v3/services/requests/eventsdelete.h"
#include "v3/services/requests/eventsget.h"
#include "v3/services/requests/eventsimport.h"
#include "v3/services/requests/eventsinsert.h"
#include "v3/services/requests/eventsinstances.h"
#include "v3/services/requests/eventslist.h"
#include "v3/services/requests/eventsmove.h"
#include "v3/services/requests/eventspatch.h"
#include "v3/services/requests/eventsquickadd.h"
#include "v3/services/requests/eventsupdate.h"
#include "v3/services/requests/eventswatch.h"

namespace APIV3 {

class Events : public Service
{
    Q_OBJECT
public:
    explicit Events(QObject *parent = 0);

signals:

public slots:

};

} // APIV3
