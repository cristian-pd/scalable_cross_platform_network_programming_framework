// Copyright Cristian Pag�n D�az. All Rights Reserved.

using CppPlugins;

namespace Client
{
    namespace Protocol
    {
        public delegate void MessageHandler<T>(T obj, IncomingMessage incomingMessage);
    }
}