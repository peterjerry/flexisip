/*
	Flexisip, a flexible SIP proxy server with media capabilities.
	Copyright (C) 2016  Belledonne Communications SARL.
 
	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU Affero General Public License as
	published by the Free Software Foundation, either version 3 of the
	License, or (at your option) any later version.
 
	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Affero General Public License for more details.
 
	You should have received a copy of the GNU Affero General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FLEXISIP_EXCEPTION_HH_
#define FLEXISIP_EXCEPTION_HH_

#include "bctoolbox/exception.hh"
#include <string.h>


/**
 * @brief This exception inherits \ref BctoolboxException.
 *
 *
 */
class FlexisipException : public BctbxException {
public:
	FlexisipException() {mOffset++;};
	FlexisipException(const std::string &message):BctbxException(message){mOffset++;};
	FlexisipException(const char *message):BctbxException(message){mOffset++;};
	virtual ~FlexisipException() throw(){};
	FlexisipException(const FlexisipException &other):BctbxException(other){};
	
	template <typename T2> FlexisipException &operator<<(const T2 &val) {
		BctbxException::operator<<(val);
		return *this;
	}
};

#define FLEXISIP_EXCEPTION FlexisipException() << " " << __FILE__ << ":" << __LINE__ << " "

#endif /* FLEXISIP_EXCEPTION_HH_ */
