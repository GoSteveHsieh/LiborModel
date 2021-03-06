/* -*- mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*
Copyright (C) 2006 Klaus Spanderen

This file is part of QuantLib, a free-software/open-source library
for financial quantitative analysts and developers - http://quantlib.org/

QuantLib is free software: you can redistribute it and/or modify it
under the terms of the QuantLib license.  You should have received a
copy of the license along with this program; if not, please email
<quantlib-dev@lists.sf.net>. The license is also available online at
<http://quantlib.org/license.shtml>.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

/*! \file GridSearch.hpp
\brief Grid Search Method
*/

#ifndef quantlib_multi_grid
#define quantlib_multi_grid

#include <ql/types.hpp>
#include <ql/math/array.hpp>
#include <vector>

namespace QuantLib {

	//! 6D Grid Search optimization method
	/*! Levenberg-Marquardt based grid-search
	*/

	class D6MultiGrid {

	public:

		D6MultiGrid();

		void addDimensionStep(
			Natural position,
			Real min,
			Real max,
			Real step);

		std::vector<Array> results() const;

		inline Size size() const { return size_; };

	protected:

		const Size size_ = 6;
		Array max_;
		Array min_;
		Array step_;

	};

	class D5MultiGrid {

	public:

		D5MultiGrid();

		void addDimensionStep(
			Natural position,
			Real min,
			Real max,
			Real step);

		std::vector<Array> results() const;

		inline Size size() const{ return size_; };

	protected:

		const Size size_ = 5;
		Array max_;
		Array min_;
		Array step_;

	};

}


#endif
