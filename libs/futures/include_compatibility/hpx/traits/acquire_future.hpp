//  Copyright (c) 2019 Ste||ar Group
//
//  SPDX-License-Identifier: BSL-1.0
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <hpx/config.hpp>
#include <hpx/futures/config/defines.hpp>
#include <hpx/future.hpp>

#if HPX_FUTURES_HAVE_DEPRECATION_WARNINGS
#if defined(HPX_MSVC)
#pragma message("The header hpx/traits/acquire_future.hpp is deprecated, \
    please include hpx/future.hpp instead")
#else
#warning "The header hpx/traits/acquire_future.hpp is deprecated, \
    please include hpx/future.hpp instead"
#endif
#endif
