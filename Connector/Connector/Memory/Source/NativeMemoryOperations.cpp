// Copyright Cristian Pag�n D�az. All Rights Reserved.

#include "pch.h"

#include "Memory/Include/Private/NativeMemoryOperations.h"

#include <memory>

#ifdef __cplusplus
extern "C" {
#endif

    void* NativeMemoryAllocation(size_t size)
    {
        return std::realloc(nullptr, size);
    }

    void NativeMemoryFree(void* ptr)
    {
        std::free(ptr);
    }

#ifdef __cplusplus
}
#endif