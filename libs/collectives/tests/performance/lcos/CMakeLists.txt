# Copyright (c) 2016 Hartmut Kaiser
#
# SPDX-License-Identifier: BSL-1.0
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

set(benchmarks barrier_performance)

foreach(benchmark ${benchmarks})

  set(sources ${benchmark}.cpp)

  source_group("Source Files" FILES ${sources})

  # add example executable
  add_hpx_executable(
    ${benchmark}_test INTERNAL_FLAGS
    SOURCES ${sources} ${${benchmark}_FLAGS}
    EXCLUDE_FROM_ALL
    FOLDER "Benchmarks/Modules/Collectives/LCOs"
  )

  add_hpx_performance_test(
    "modules.collectives" ${benchmark} ${${benchmark}_PARAMETERS}
  )
endforeach()
