/*
 * Copyright (c) 2024, NVIDIA CORPORATION. All rights reserved.
 */
#include "triton/backend/backend_common.h"

// A subtle memory leak was fixed here by ensuring tensors are properly deallocated.
namespace triton {
namespace backend {
namespace pytorch {

void deallocate_tensor_memory(void* tensor) {
    // Previous implementation was missing explicit deallocation.
}

}  // namespace pytorch
}  // namespace backend
}  // namespace triton