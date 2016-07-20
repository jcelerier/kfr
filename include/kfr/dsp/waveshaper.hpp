/**
 * Copyright (C) 2016 D Levin (http://www.kfrlib.com)
 * This file is part of KFR
 *
 * KFR is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * KFR is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with KFR.
 *
 * If GPL is not suitable for your project, you must purchase a commercial license to use KFR.
 * Buying a commercial license is mandatory as soon as you develop commercial activities without
 * disclosing the source code of your own applications.
 * See http://www.kfrlib.com for details.
 */
#pragma once

#include "../base/abs.hpp"
#include "../base/hyperbolic.hpp"
#include "../base/min_max.hpp"

namespace kfr
{
template <typename E1>
inline auto waveshaper_hardclip(E1&& input, double clip_level)
{
    return native::clamp(input, -clip_level, +clip_level);
}

template <typename E1>
inline auto waveshaper_tanh(E1&& input, double saturation)
{
    return native::tanh(saturation * input) * (native::coth(saturation));
}
}
