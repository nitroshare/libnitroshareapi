/*
 * libnitroshareapi
 * Copyright (C) 2013  Nathan Osman
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 3 of the
 * License, or (at your option) any later version.
 */

#ifndef NSA_CLIENT_P_H
#define NSA_CLIENT_P_H

#include <QString>

namespace NitroShare
{
    namespace API
    {
        class ClientPrivate
        {
            public:

                QString key;
                QString token;
        };
    }
}

#endif // NSA_CLIENT_P_H
