// Copyright Cristian Pag�n D�az. All Rights Reserved.

#pragma once

namespace Connection
{
	class NetworkThreadFactory
	{
	public:
		static class INetworkThread* Create();
	};
}