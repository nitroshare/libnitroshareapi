/*
 * libnitroshareapi
 * Copyright (C) 2013  Nathan Osman
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 3 of the
 * License, or (at your option) any later version.
 */

#include <nitroshare/api/client.h>
#include "client_p.h"

using namespace NitroShare::API;

Client::Client(QObject * parent)
    : QObject(parent), d(new ClientPrivate)
{
}

Client::~Client()
{
    delete d;
}

void Client::setKey(QString key)
{
    d->key = key;
}

void Client::setAccessToken(QString token)
{
    d->token = token;
}
