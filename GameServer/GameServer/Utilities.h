// Copyright Cristian Pag�n D�az. All Rights Reserved.

#pragma once

namespace GameServer
{
	template <typename T> static inline void Swap(T& a, T& b)
	{
		T aux = a;
		a = b;
		b = aux;
	}
}