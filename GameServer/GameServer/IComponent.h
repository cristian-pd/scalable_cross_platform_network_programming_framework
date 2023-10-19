// Copyright Cristian Pag�n D�az. All Rights Reserved.

#pragma once

namespace GameServer
{
	class IComponent
	{
	public:
		virtual void OnUpdate(float deltaTime) = 0;

		virtual ~IComponent() = default;
	};
}