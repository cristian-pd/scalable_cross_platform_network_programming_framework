// Copyright Cristian Pag�n D�az. All Rights Reserved.

#pragma once

namespace BaseServer
{
	class IDeserializable
	{
	public:
		virtual void Deserialize(class StreamReader& streamReader) const = 0;

		virtual ~IDeserializable() = default;
	};
}