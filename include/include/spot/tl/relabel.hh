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

#include <spot/tl/formula.hh>
#include <spot/misc/hash.hh>
#include <map>

namespace spot
{
  enum relabeling_style { Abc, Pnn };

  typedef std::map<formula, formula> relabeling_map;

  /// \ingroup tl_rewriting
  /// \brief Relabel the atomic propositions in a formula.
  ///
  /// If \a m is non-null, it is filled with correspondence
  /// between the new names (keys) and the old names (values).
  ///
  /// \see relabel_bse
  /// \see relabel_overlapping_bse
  SPOT_API
  formula relabel(formula f, relabeling_style style,
                  relabeling_map* m = nullptr);


  /// \ingroup tl_rewriting
  /// \brief Relabel Boolean subexpressions in a formula using
  /// atomic propositions.
  ///
  /// If \a m is non-null, it is filled with correspondence
  /// between the new names (keys) and the old names (values).
  ///
  /// The relabel_overlapping_bse() will introduce a new atomic
  /// proposition for each maximal Boolean subexpression encountered,
  /// even if they overlap (i.e., share common atomic
  /// propositions). For instance `(a & b & c) U (c & d & e)` will be
  /// simply be relabeled as `p0 U p1`.  This kind of renaming does not
  /// preserve the satisfiability of the input formula.
  ///
  /// The relabel_bse() version will make sure that the replaced
  /// subexpressions do not share atomic propositions.  For instance
  /// `(a & b & c) U (!c & d & e)` will be simply be relabeled as
  /// `(p0 & p1) U (!p1 & p2)`, were `p1` replaces `c` and the rest
  /// is obvious.
  ///
  /// @{
  SPOT_API
  formula relabel_bse(formula f, relabeling_style style,
                      relabeling_map* m = nullptr);
  SPOT_API formula
  relabel_overlapping_bse(formula f, relabeling_style style, relabeling_map* m);
  // @}

  /// \ingroup tl_rewriting
  /// \brief Replace atomic propositions of \a f by subformulas
  /// specified in \a m.
  ///
  /// Atomic proposition that do not appear in \a m are not
  /// replaced.
  SPOT_API
  formula relabel_apply(formula f, relabeling_map* m);
}
