// Copyright Cristian Pag�n D�az. All Rights Reserved.

using UnityEngine;

namespace NetworkSpawning
{
    public abstract class NetworkSpawnable : MonoBehaviour
    {
        protected internal virtual void OnSpawn(object args) { }
    }
}