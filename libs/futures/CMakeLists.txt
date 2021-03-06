# Copyright (c) 2019-2020 The STE||AR-Group
#
# SPDX-License-Identifier: BSL-1.0
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

set(futures_headers
    hpx/futures/future.hpp
    hpx/futures/futures_factory.hpp
    hpx/futures/detail/future_data.hpp
    hpx/futures/detail/future_transforms.hpp
    hpx/futures/packaged_continuation.hpp
    hpx/futures/traits/acquire_future.hpp
    hpx/futures/traits/acquire_shared_state.hpp
    hpx/futures/traits/future_access.hpp
    hpx/futures/traits/future_then_result.hpp
    hpx/futures/traits/future_traits.hpp
    hpx/futures/traits/get_remote_result.hpp
    hpx/futures/traits/is_future.hpp
    hpx/futures/traits/is_future_range.hpp
    hpx/futures/traits/is_future_tuple.hpp
    hpx/futures/traits/promise_local_result.hpp
    hpx/futures/traits/promise_remote_result.hpp
)

set(futures_compat_headers
    hpx/lcos/future.hpp
    hpx/lcos/local/futures_factory.hpp
    hpx/lcos/local/packaged_continuation.hpp
    hpx/traits/acquire_future.hpp
    hpx/traits/acquire_shared_state.hpp
    hpx/traits/future_access.hpp
    hpx/traits/future_then_result.hpp
    hpx/traits/future_traits.hpp
    hpx/traits/get_remote_result.hpp
    hpx/traits/is_future.hpp
    hpx/traits/is_future_range.hpp
    hpx/traits/is_future_tuple.hpp
    hpx/traits/promise_local_result.hpp
    hpx/traits/promise_remote_result.hpp
)

set(futures_sources future_data.cpp)

include(HPX_AddModule)
add_hpx_module(
  futures
  COMPATIBILITY_HEADERS ON
  DEPRECATION_WARNINGS
  GLOBAL_HEADER_GEN ON
  SOURCES ${futures_sources}
  HEADERS ${futures_headers}
  COMPAT_HEADERS ${futures_compat_headers}
  EXCLUDE_FROM_GLOBAL_HEADER "hpx/futures/detail/future_data.hpp"
                             "hpx/futures/detail/future_transforms.hpp"
  DEPENDENCIES
    hpx_allocator_support
    hpx_assertion
    hpx_async_base
    hpx_execution_base
    hpx_config
    hpx_coroutines
    hpx_errors
    hpx_functional
    hpx_memory
    hpx_serialization
    hpx_synchronization
    hpx_thread_support
    hpx_threading_base
    hpx_timing
    hpx_type_support
  CMAKE_SUBDIRS examples tests
)
