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

#include <cstring>
#include <functional>

namespace spot
{

  /// \ingroup misc_tools
  /// \brief Strict Weak Ordering for \c char*.
  ///
  /// This is meant to be used as a comparison functor for
  /// STL \c map whose key are of type <code>const char*</code>.
  ///
  /// For instance here is how one could declare
  /// a map of <code>const state*</code>.
  /// \code
  ///   std::map<const char*, int, spot::state_ptr_less_than> seen;
  /// \endcode
  struct char_ptr_less_than
  {
    bool
    operator()(const char* left, const char* right) const
    {
      return strcmp(left, right) < 0;
    }
  };
}
