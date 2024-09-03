// -*- coding: utf-8 -*-
// Copyright (C) by the Spot authors, see the AUTHORS file for details.
//
// This file is part of Spot, a model checking library.
//
// Spot is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
//
// Spot is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
// or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
// License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <spot/misc/common.hh>
#include <vector>
#include <stddef.h>

namespace spot
{
  /// \ingroup misc_tools
  /// @{

  /// \brief Compress an int array of size \a n into a int array.
  ///
  /// The destination array should be at least \a dest_size large An
  /// assert will be triggered if \a dest_size is too small.  On
  /// return, \a dest_size will be set to the actually number of int
  /// filled in \a dest
  SPOT_API void
  int_array_array_compress2(const int* array, size_t n,
                           int* dest, size_t& dest_size);

  /// \brief Uncompress an int array of size \a array_size into a int
  ///        array of size \a size.
  ///
  /// \a size must be the exact expected size of uncompressed array.
  SPOT_API void
  int_array_array_decompress2(const int* array, size_t array_size,
                             int* res, size_t size);

  /// @}
}
