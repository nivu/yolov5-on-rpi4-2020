#pragma once

// @generated by aten/src/ATen/gen.py from MetaFunctions.h

#include <ATen/TensorMeta.h>
#include <ATen/TensorIterator.h>

namespace at {

namespace meta {

struct CAFFE2_API add_Tensor : public TensorIteratorBase {
    void meta(const Tensor & self, const Tensor & other, Scalar alpha);
};
struct CAFFE2_API upsample_nearest1d : public at::impl::MetaBase {
    void meta(const Tensor & self, IntArrayRef output_size, c10::optional<double> scales);
};
struct CAFFE2_API upsample_nearest1d_backward : public at::impl::MetaBase {
    void meta(const Tensor & grad_output, IntArrayRef output_size, IntArrayRef input_size, c10::optional<double> scales);
};

} // namespace meta
} // namespace at
