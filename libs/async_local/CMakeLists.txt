# Copyright (c) 2019 The STE||AR-Group
#
# SPDX-License-Identifier: BSL-1.0
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

set(async_local_headers hpx/async_local/apply.hpp hpx/async_local/async.hpp
                        hpx/async_local/dataflow.hpp hpx/async_local/sync.hpp
)

include(HPX_AddModule)
add_hpx_module(
  async_local
  GLOBAL_HEADER_GEN ON
  HEADERS ${async_local_headers}
  DEPENDENCIES
    hpx_allocator_support
    hpx_async_base
    hpx_config
    hpx_coroutines
    hpx_datastructures
    hpx_execution
    hpx_executors
    hpx_functional
    hpx_memory
    hpx_threading_base
    hpx_type_support
    hpx_util
  CMAKE_SUBDIRS examples tests
)
