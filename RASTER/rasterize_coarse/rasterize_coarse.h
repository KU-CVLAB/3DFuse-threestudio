/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <torch/extension.h>
#include <tuple>

// Arguments are the same as RasterizePointsCoarse from
// rasterize_points/rasterize_points.h

#ifdef WITH_CUDA
torch::Tensor RasterizePointsCoarseCuda(
    const torch::Tensor& points,
    const torch::Tensor& cloud_to_packed_first_idx,
    const torch::Tensor& num_points_per_cloud,
    const std::tuple<int, int> image_size,
    const torch::Tensor& radius,
    const int bin_size,
    const int max_points_per_bin);
#endif
