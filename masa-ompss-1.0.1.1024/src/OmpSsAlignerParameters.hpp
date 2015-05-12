/*******************************************************************************
 *
 * Copyright (c) 2010-2015   Edans Sandes and Guillermo Miranda
 *
 * This file is part of MASA-OmpSs.
 * 
 * MASA-OmpSs is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * MASA-OmpSs is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with MASA-OmpSs.  If not, see <http://www.gnu.org/licenses/>.
 *
 ******************************************************************************/

#ifndef OMPSSALIGNERPARAMETERS_HPP_
#define OMPSSALIGNERPARAMETERS_HPP_

#include "libmasa/libmasa.hpp"

/**
 * Empty parameter handler.
 */
class OmpSsAlignerParameters : public BlockAlignerParameters  {
public:
	OmpSsAlignerParameters();
	~OmpSsAlignerParameters();
};

#endif /* OMPSSALIGNERPARAMETERS_HPP_ */
