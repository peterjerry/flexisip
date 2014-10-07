// Copyright (c) 2005-2011 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD/e, an XML Schema
// to C++ data binding compiler for embedded systems.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
//

#include <xsde/cxx/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#include "xml.hxx"

namespace namespace_
{
  // lang
  //

  lang::
  lang ()
  {
  }

  const ::std::string& lang::
  value () const
  {
    return this->value_;
  }

  ::std::string& lang::
  value ()
  {
    return this->value_;
  }

  void lang::
  value (const ::std::string& x)
  {
    this->value_ = x;
  }

  // space
  //

  space::
  space ()
  {
  }

  space::
  space (value_type v)
  {
    value_ = v;
  }

  void space::
  value (value_type v)
  {
    value_ = v;
  }

  // lang_member
  //

  lang_member::
  lang_member ()
  {
  }

  lang_member::
  lang_member (value_type v)
  {
    value_ = v;
  }

  void lang_member::
  value (value_type v)
  {
    value_ = v;
  }
}

#include <stdlib.h>
#include <new>

#include <xsde/cxx/guard.hxx>

namespace namespace_
{
  // lang
  //

  // space
  //

  static const char* _xsde_space_enumerators_[] = 
  {
    "default",
    "preserve"
  };

  const char* space::
  string () const
  {
    return _xsde_space_enumerators_[value_];
  }

  // lang_member
  //

  static const char* _xsde_lang_member_enumerators_[] = 
  {
    ""
  };

  const char* lang_member::
  string () const
  {
    return _xsde_lang_member_enumerators_[value_];
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsde/cxx/post.hxx>

