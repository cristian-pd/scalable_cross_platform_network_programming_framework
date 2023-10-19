// Copyright Cristian Pag�n D�az. All Rights Reserved.

using UnityEngine;

namespace Game
{
    public abstract class Status : MonoBehaviour
    {
        private void LateUpdate()
        {
            OnUpdate();
        }

        protected abstract void OnUpdate();
    }
}