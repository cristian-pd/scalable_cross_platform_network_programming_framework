// Copyright Cristian Pag�n D�az. All Rights Reserved.

using System;

namespace CppPlugins
{
    public class TooLongMessageBodyException : Exception
    {
        public TooLongMessageBodyException(string message) : base(message) { }
    }
}