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
#include "requestoperation.h"
#include "v3/services/requestdelegate.h"

namespace APIV3 {

class FreebusyQuery : public RequestOperation {
public:
    FreebusyQuery(RequestOperationDelegate *requestDelegate, QObject *parent = 0)
        : RequestOperation(requestDelegate, parent) {
    }

    void setParameters() {
        // None
    }

    QNetworkRequest networkRequest() {
        QNetworkRequest networkRequest;
        networkRequest.setUrl(QString("%1/freeBusy")
                              .arg(baseUrl()));
        networkRequest.setHeader(QNetworkRequest::ContentTypeHeader,
                                 "application/x-www-form-urlencoded");
        networkRequest.setHeader(QNetworkRequest::UserAgentHeader,
                                 userAgent());
        return networkRequest;
    }

    HttpMethod httpMethod() {
        return HttpMethodPost;
    }

    QStringList requiredScopes() {
        QStringList scopes;
        scopes << "https://www.googleapis.com/auth/calendar";
        return scopes;
    }

private:
};

} // APIV3
