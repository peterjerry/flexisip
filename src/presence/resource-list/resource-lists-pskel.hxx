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

#ifndef RESOURCE_LISTS_PSKEL_HXX
#define RESOURCE_LISTS_PSKEL_HXX

#include <xsde/cxx/version.hxx>

#if (XSDE_INT_VERSION != 3020000L)
#error XSD/e runtime version mismatch
#endif

#include <xsde/cxx/config.hxx>

#ifndef XSDE_ENCODING_UTF8
#error the generated code uses the UTF-8 encodingwhile the XSD/e runtime does not (reconfigure the runtime or change the --char-encoding value)
#endif

#ifndef XSDE_STL
#error the generated code uses STL while the XSD/e runtime does not (reconfigure the runtime or add --no-stl)
#endif

#ifndef XSDE_IOSTREAM
#error the generated code uses iostream while the XSD/e runtime does not (reconfigure the runtime or add --no-iostream)
#endif

#ifndef XSDE_EXCEPTIONS
#error the generated code uses exceptions while the XSD/e runtime does not (reconfigure the runtime or add --no-exceptions)
#endif

#ifndef XSDE_LONGLONG
#error the generated code uses long long while the XSD/e runtime does not (reconfigure the runtime or add --no-long-long)
#endif

#ifndef XSDE_PARSER_VALIDATION
#error the generated code uses validation while the XSD/e runtime does not (reconfigure the runtime or add --suppress-validation)
#endif

#ifndef XSDE_POLYMORPHIC
#error the generated code expects XSD/e runtime with polymorphism support (reconfigure the runtime or remove --generate-polymorphic/--runtime-polymorphic)
#endif

#ifndef XSDE_REUSE_STYLE_TIEIN
#error the generated code uses the tiein reuse style while the XSD/e runtime does not (reconfigure the runtime or add --reuse-style-mixin or --reuse-style-none)
#endif

#ifdef XSDE_CUSTOM_ALLOCATOR
#error the XSD/e runtime uses custom allocator while the generated code does not (reconfigure the runtime or add --custom-allocator)
#endif

#include <xsde/cxx/pre.hxx>

// Begin prologue.
//

#include <xsde/cxx/hybrid/any-type.hxx>
#include <xsde/cxx/hybrid/any-type-pskel.hxx>
#include <xsde/cxx/hybrid/any-type-pimpl.hxx>

namespace xml_schema
{
  using ::xsde::cxx::hybrid::any_type;

  using ::xsde::cxx::hybrid::any_type_pskel;
  using ::xsde::cxx::hybrid::any_type_pimpl;
}


//
// End prologue.

// Forward declarations
//
namespace resource_lists
{
  class display_nameType_pskel;
  class display_name_pskel;
  class entryType_pskel;
  class entry_refType_pskel;
  class externalType_pskel;
  class listType_pskel;
  class list_pskel;
  class resource_lists_pskel;
}


#include <xsde/cxx/ro-string.hxx>

#include <xsde/cxx/parser/xml-schema.hxx>

#include <xsde/cxx/parser/exceptions.hxx>

#include <xsde/cxx/parser/map.hxx>
#include <xsde/cxx/parser/substitution-map-callback.hxx>
#include <xsde/cxx/parser/substitution-map-load.hxx>
#include <xsde/cxx/parser/validating/inheritance-map-load.hxx>

#include <xsde/cxx/stack.hxx>
#include <xsde/cxx/parser/validating/parser.hxx>
#include <xsde/cxx/parser/validating/xml-schema-pskel.hxx>
#include <xsde/cxx/parser/validating/xml-schema-pimpl.hxx>

#include <xsde/cxx/parser/expat/document.hxx>

#include "resource-lists.hxx"

namespace xml_schema
{
  // Built-in XML Schema types mapping.
  //
  using ::xsde::cxx::string_sequence;
  using ::xsde::cxx::qname;
  using ::xsde::cxx::buffer;
  using ::xsde::cxx::time_zone;
  using ::xsde::cxx::gday;
  using ::xsde::cxx::gmonth;
  using ::xsde::cxx::gyear;
  using ::xsde::cxx::gmonth_day;
  using ::xsde::cxx::gyear_month;
  using ::xsde::cxx::date;
  using ::xsde::cxx::time;
  using ::xsde::cxx::date_time;
  using ::xsde::cxx::duration;

  // Base parser skeletons.
  //
  using ::xsde::cxx::parser::parser_base;
  typedef ::xsde::cxx::parser::validating::empty_content parser_empty_content;
  typedef ::xsde::cxx::parser::validating::simple_content parser_simple_content;
  typedef ::xsde::cxx::parser::validating::complex_content parser_complex_content;
  typedef ::xsde::cxx::parser::validating::list_base parser_list_base;

  // Parser map interface and default implementation.
  //
  using ::xsde::cxx::parser::parser_map;
  using ::xsde::cxx::parser::parser_map_impl;

  // Parser substitution map callack.
  //
  using ::xsde::cxx::parser::parser_smap_callback;

  // Substitution and inheritance hashmaps load querying.
  //
  using ::xsde::cxx::parser::parser_smap_buckets;
  using ::xsde::cxx::parser::parser_smap_elements;
  using ::xsde::cxx::parser::validating::parser_imap_buckets;
  using ::xsde::cxx::parser::validating::parser_imap_elements;

  // Parser skeletons and implementations for the XML Schema
  // built-in types.
  //
  using ::xsde::cxx::parser::validating::any_simple_type_pskel;
  using ::xsde::cxx::parser::validating::any_simple_type_pimpl;

  using ::xsde::cxx::parser::validating::byte_pskel;
  using ::xsde::cxx::parser::validating::byte_pimpl;

  using ::xsde::cxx::parser::validating::unsigned_byte_pskel;
  using ::xsde::cxx::parser::validating::unsigned_byte_pimpl;

  using ::xsde::cxx::parser::validating::short_pskel;
  using ::xsde::cxx::parser::validating::short_pimpl;

  using ::xsde::cxx::parser::validating::unsigned_short_pskel;
  using ::xsde::cxx::parser::validating::unsigned_short_pimpl;

  using ::xsde::cxx::parser::validating::int_pskel;
  using ::xsde::cxx::parser::validating::int_pimpl;

  using ::xsde::cxx::parser::validating::unsigned_int_pskel;
  using ::xsde::cxx::parser::validating::unsigned_int_pimpl;

  using ::xsde::cxx::parser::validating::long_pskel;
  using ::xsde::cxx::parser::validating::long_pimpl;

  using ::xsde::cxx::parser::validating::unsigned_long_pskel;
  using ::xsde::cxx::parser::validating::unsigned_long_pimpl;

  using ::xsde::cxx::parser::validating::integer_pskel;
  using ::xsde::cxx::parser::validating::integer_pimpl;

  using ::xsde::cxx::parser::validating::non_positive_integer_pskel;
  using ::xsde::cxx::parser::validating::non_positive_integer_pimpl;

  using ::xsde::cxx::parser::validating::non_negative_integer_pskel;
  using ::xsde::cxx::parser::validating::non_negative_integer_pimpl;

  using ::xsde::cxx::parser::validating::positive_integer_pskel;
  using ::xsde::cxx::parser::validating::positive_integer_pimpl;

  using ::xsde::cxx::parser::validating::negative_integer_pskel;
  using ::xsde::cxx::parser::validating::negative_integer_pimpl;

  using ::xsde::cxx::parser::validating::boolean_pskel;
  using ::xsde::cxx::parser::validating::boolean_pimpl;

  using ::xsde::cxx::parser::validating::float_pskel;
  using ::xsde::cxx::parser::validating::float_pimpl;

  using ::xsde::cxx::parser::validating::double_pskel;
  using ::xsde::cxx::parser::validating::double_pimpl;

  using ::xsde::cxx::parser::validating::decimal_pskel;
  using ::xsde::cxx::parser::validating::decimal_pimpl;

  using ::xsde::cxx::parser::validating::string_pskel;
  using ::xsde::cxx::parser::validating::string_pimpl;

  using ::xsde::cxx::parser::validating::normalized_string_pskel;
  using ::xsde::cxx::parser::validating::normalized_string_pimpl;

  using ::xsde::cxx::parser::validating::token_pskel;
  using ::xsde::cxx::parser::validating::token_pimpl;

  using ::xsde::cxx::parser::validating::name_pskel;
  using ::xsde::cxx::parser::validating::name_pimpl;

  using ::xsde::cxx::parser::validating::nmtoken_pskel;
  using ::xsde::cxx::parser::validating::nmtoken_pimpl;

  using ::xsde::cxx::parser::validating::nmtokens_pskel;
  using ::xsde::cxx::parser::validating::nmtokens_pimpl;

  using ::xsde::cxx::parser::validating::ncname_pskel;
  using ::xsde::cxx::parser::validating::ncname_pimpl;

  using ::xsde::cxx::parser::validating::language_pskel;
  using ::xsde::cxx::parser::validating::language_pimpl;

  using ::xsde::cxx::parser::validating::id_pskel;
  using ::xsde::cxx::parser::validating::id_pimpl;

  using ::xsde::cxx::parser::validating::idref_pskel;
  using ::xsde::cxx::parser::validating::idref_pimpl;

  using ::xsde::cxx::parser::validating::idrefs_pskel;
  using ::xsde::cxx::parser::validating::idrefs_pimpl;

  using ::xsde::cxx::parser::validating::uri_pskel;
  using ::xsde::cxx::parser::validating::uri_pimpl;

  using ::xsde::cxx::parser::validating::qname_pskel;
  using ::xsde::cxx::parser::validating::qname_pimpl;

  using ::xsde::cxx::parser::validating::base64_binary_pskel;
  using ::xsde::cxx::parser::validating::base64_binary_pimpl;

  using ::xsde::cxx::parser::validating::hex_binary_pskel;
  using ::xsde::cxx::parser::validating::hex_binary_pimpl;

  using ::xsde::cxx::parser::validating::date_pskel;
  using ::xsde::cxx::parser::validating::date_pimpl;

  using ::xsde::cxx::parser::validating::date_time_pskel;
  using ::xsde::cxx::parser::validating::date_time_pimpl;

  using ::xsde::cxx::parser::validating::duration_pskel;
  using ::xsde::cxx::parser::validating::duration_pimpl;

  using ::xsde::cxx::parser::validating::gday_pskel;
  using ::xsde::cxx::parser::validating::gday_pimpl;

  using ::xsde::cxx::parser::validating::gmonth_pskel;
  using ::xsde::cxx::parser::validating::gmonth_pimpl;

  using ::xsde::cxx::parser::validating::gmonth_day_pskel;
  using ::xsde::cxx::parser::validating::gmonth_day_pimpl;

  using ::xsde::cxx::parser::validating::gyear_pskel;
  using ::xsde::cxx::parser::validating::gyear_pimpl;

  using ::xsde::cxx::parser::validating::gyear_month_pskel;
  using ::xsde::cxx::parser::validating::gyear_month_pimpl;

  using ::xsde::cxx::parser::validating::time_pskel;
  using ::xsde::cxx::parser::validating::time_pimpl;

  // Read-only string.
  //
  using ::xsde::cxx::ro_string;

  // Error codes.
  //
  typedef xsde::cxx::parser::expat::xml_error parser_xml_error;
  typedef xsde::cxx::schema_error parser_schema_error;

  // Exceptions.
  //
  typedef xsde::cxx::parser::exception parser_exception;
  typedef xsde::cxx::parser::xml parser_xml;
  typedef xsde::cxx::parser::schema parser_schema;

  // Document parser.
  //
  using xsde::cxx::parser::expat::document_pimpl;

  // Parser context.
  //
  typedef xsde::cxx::parser::context parser_context;
}

#include "../xml/xml-pskel.hxx"

namespace resource_lists
{
  class display_nameType_pskel: public ::xml_schema::string_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Attributes.
    //
    virtual void
    lang (const ::namespace_::lang&);

    virtual ::resource_lists::display_nameType
    post_display_nameType () = 0;

    // Parser construction API.
    //
    void
    parsers (::namespace_::lang_pskel& /* lang */);

    // Individual attribute parsers.
    //
    void
    lang_parser (::namespace_::lang_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    display_nameType_pskel (::xml_schema::string_pskel* tiein);

    public:
    static const char*
    _static_type ();

    virtual const char*
    _dynamic_type () const;

    // Implementation details.
    //
    virtual ::std::string
    post_string ();

    protected:
    display_nameType_pskel* display_nameType_impl_;
    display_nameType_pskel (display_nameType_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::namespace_::lang_pskel* lang_parser_;
  };

  class display_name_pskel: public ::resource_lists::display_nameType_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual ::resource_lists::display_name
    post_display_name () = 0;

    // Constructor.
    //
    display_name_pskel (::resource_lists::display_nameType_pskel* tiein);

    public:
    static const char*
    _static_type ();

    virtual const char*
    _dynamic_type () const;

    // Implementation details.
    //
    virtual ::resource_lists::display_nameType
    post_display_nameType ();

    protected:
    display_name_pskel* display_name_impl_;
    display_name_pskel (display_name_pskel*, void*);
  };

  class entryType_pskel: public ::xsde::cxx::parser::validating::complex_content
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Attributes.
    //
    virtual void
    uri (const ::std::string&);

    // Elements.
    //
    virtual void
    display_name (const ::resource_lists::display_name&);

    virtual ::resource_lists::entryType
    post_entryType () = 0;

    // Parser construction API.
    //
    void
    parsers (::xml_schema::uri_pskel& /* uri */,
             ::resource_lists::display_name_pskel& /* display-name */);

    // Individual attribute parsers.
    //
    void
    uri_parser (::xml_schema::uri_pskel&);

    // Individual element parsers.
    //
    void
    display_name_parser (::resource_lists::display_name_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    entryType_pskel ();

    public:
    static const char*
    _static_type ();

    virtual const char*
    _dynamic_type () const;

    // Implementation details.
    //
    protected:
    entryType_pskel* entryType_impl_;
    entryType_pskel (entryType_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&,
                         const char*);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    virtual bool
    _attribute_impl_phase_two (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);

    protected:
    ::xml_schema::uri_pskel* uri_parser_;
    ::resource_lists::display_name_pskel* display_name_parser_;

    public:
    struct v_state_descr_
    {
      void (::resource_lists::entryType_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        const char*,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                const char*,
                bool);

    protected:
    struct v_state_attr_
    {
      bool uri;
    };

    v_state_attr_ v_state_attr_first_;
    ::xsde::cxx::stack v_state_attr_stack_;

    virtual void
    _pre_a_validate ();

    virtual void
    _post_a_validate ();
  };

  class entry_refType_pskel: public ::xsde::cxx::parser::validating::complex_content
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Attributes.
    //
    virtual void
    ref (const ::std::string&);

    // Elements.
    //
    virtual void
    display_name (const ::resource_lists::display_nameType&);

    virtual ::resource_lists::entry_refType
    post_entry_refType () = 0;

    // Parser construction API.
    //
    void
    parsers (::xml_schema::uri_pskel& /* ref */,
             ::resource_lists::display_nameType_pskel& /* display-name */);

    void
    parser_maps (::xml_schema::parser_map& /* display-name */);

    // Individual attribute parsers.
    //
    void
    ref_parser (::xml_schema::uri_pskel&);

    // Individual element parsers.
    //
    void
    display_name_parser (::resource_lists::display_nameType_pskel&);

    void
    display_name_parser (::xml_schema::parser_map&);

    virtual void
    _reset ();

    // Constructor.
    //
    entry_refType_pskel ();

    public:
    static const char*
    _static_type ();

    virtual const char*
    _dynamic_type () const;

    // Implementation details.
    //
    protected:
    entry_refType_pskel* entry_refType_impl_;
    entry_refType_pskel (entry_refType_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&,
                         const char*);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    virtual bool
    _attribute_impl_phase_two (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);

    protected:
    ::xml_schema::uri_pskel* ref_parser_;
    ::resource_lists::display_nameType_pskel* display_name_parser_;
    ::xml_schema::parser_map* display_name_parser_map_;


    public:
    struct v_state_descr_
    {
      void (::resource_lists::entry_refType_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        const char*,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                const char*,
                bool);

    protected:
    struct v_state_attr_
    {
      bool ref;
    };

    v_state_attr_ v_state_attr_first_;
    ::xsde::cxx::stack v_state_attr_stack_;

    virtual void
    _pre_a_validate ();

    virtual void
    _post_a_validate ();
  };

  class externalType_pskel: public ::xsde::cxx::parser::validating::complex_content
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Attributes.
    //
    virtual void
    anchor (const ::std::string&);

    // Elements.
    //
    virtual void
    display_name (const ::resource_lists::display_nameType&);

    virtual ::resource_lists::externalType
    post_externalType () = 0;

    // Parser construction API.
    //
    void
    parsers (::xml_schema::uri_pskel& /* anchor */,
             ::resource_lists::display_nameType_pskel& /* display-name */);

    void
    parser_maps (::xml_schema::parser_map& /* display-name */);

    // Individual attribute parsers.
    //
    void
    anchor_parser (::xml_schema::uri_pskel&);

    // Individual element parsers.
    //
    void
    display_name_parser (::resource_lists::display_nameType_pskel&);

    void
    display_name_parser (::xml_schema::parser_map&);

    virtual void
    _reset ();

    // Constructor.
    //
    externalType_pskel ();

    public:
    static const char*
    _static_type ();

    virtual const char*
    _dynamic_type () const;

    // Implementation details.
    //
    protected:
    externalType_pskel* externalType_impl_;
    externalType_pskel (externalType_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&,
                         const char*);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    virtual bool
    _attribute_impl_phase_two (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);

    protected:
    ::xml_schema::uri_pskel* anchor_parser_;
    ::resource_lists::display_nameType_pskel* display_name_parser_;
    ::xml_schema::parser_map* display_name_parser_map_;


    public:
    struct v_state_descr_
    {
      void (::resource_lists::externalType_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        const char*,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                const char*,
                bool);
  };

  class listType_pskel: public ::xsde::cxx::parser::validating::complex_content
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Attributes.
    //
    virtual void
    name (const ::std::string&);

    // Elements.
    //
    virtual void
    display_name (const ::resource_lists::display_nameType&);

    virtual void
    sequence_next ();

    enum choice_arm_tag
    {
      list_tag,
      external_tag,
      entry_tag,
      entry_ref_tag
    };

    virtual void
    choice_arm (choice_arm_tag);

    virtual void
    list (::resource_lists::list*);

    virtual void
    external (const ::resource_lists::externalType&);

    virtual void
    entry (const ::resource_lists::entryType&);

    virtual void
    entry_ref (const ::resource_lists::entry_refType&);

    virtual ::resource_lists::listType*
    post_listType () = 0;

    // Parser construction API.
    //
    void
    parsers (::xml_schema::string_pskel& /* name */,
             ::resource_lists::display_nameType_pskel& /* display-name */,
             ::resource_lists::list_pskel& /* list */,
             ::resource_lists::externalType_pskel& /* external */,
             ::resource_lists::entryType_pskel& /* entry */,
             ::resource_lists::entry_refType_pskel& /* entry-ref */);

    void
    parser_maps (::xml_schema::parser_map& /* display-name */,
                 ::xml_schema::parser_map& /* external */,
                 ::xml_schema::parser_map& /* entry */,
                 ::xml_schema::parser_map& /* entry-ref */);

    // Individual attribute parsers.
    //
    void
    name_parser (::xml_schema::string_pskel&);

    // Individual element parsers.
    //
    void
    display_name_parser (::resource_lists::display_nameType_pskel&);

    void
    display_name_parser (::xml_schema::parser_map&);

    void
    list_parser (::resource_lists::list_pskel&);

    void
    external_parser (::resource_lists::externalType_pskel&);

    void
    external_parser (::xml_schema::parser_map&);

    void
    entry_parser (::resource_lists::entryType_pskel&);

    void
    entry_parser (::xml_schema::parser_map&);

    void
    entry_ref_parser (::resource_lists::entry_refType_pskel&);

    void
    entry_ref_parser (::xml_schema::parser_map&);

    virtual void
    _reset ();

    // Constructor.
    //
    listType_pskel ();

    public:
    static const char*
    _static_type ();

    virtual const char*
    _dynamic_type () const;

    // Implementation details.
    //
    protected:
    listType_pskel* listType_impl_;
    listType_pskel (listType_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&,
                         const char*);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    virtual bool
    _attribute_impl_phase_two (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);

    protected:
    ::xml_schema::string_pskel* name_parser_;
    ::resource_lists::display_nameType_pskel* display_name_parser_;
    ::xml_schema::parser_map* display_name_parser_map_;

    ::resource_lists::list_pskel* list_parser_;
    ::resource_lists::externalType_pskel* external_parser_;
    ::xml_schema::parser_map* external_parser_map_;

    ::resource_lists::entryType_pskel* entry_parser_;
    ::xml_schema::parser_map* entry_parser_map_;

    ::resource_lists::entry_refType_pskel* entry_ref_parser_;
    ::xml_schema::parser_map* entry_ref_parser_map_;


    public:
    struct v_state_descr_
    {
      void (::resource_lists::listType_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        const char*,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[4UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_1 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                const char*,
                bool);

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                const char*,
                bool);

    void
    choice_0 (unsigned long&,
              unsigned long&,
              const ::xsde::cxx::ro_string&,
              const ::xsde::cxx::ro_string&,
              const char*,
              bool);
  };

  class list_pskel: public ::resource_lists::listType_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual ::resource_lists::list*
    post_list () = 0;

    // Constructor.
    //
    list_pskel (::resource_lists::listType_pskel* tiein);

    public:
    static const char*
    _static_type ();

    virtual const char*
    _dynamic_type () const;

    // Implementation details.
    //
    virtual ::resource_lists::listType*
    post_listType ();

    protected:
    list_pskel* list_impl_;
    list_pskel (list_pskel*, void*);
  };

  class resource_lists_pskel: public ::xsde::cxx::parser::validating::complex_content
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    sequence_next ();

    virtual void
    list (::resource_lists::listType*);

    virtual ::resource_lists::resource_lists*
    post_resource_lists () = 0;

    // Parser construction API.
    //
    void
    parsers (::resource_lists::listType_pskel& /* list */);

    void
    parser_maps (::xml_schema::parser_map& /* list */);

    // Individual element parsers.
    //
    void
    list_parser (::resource_lists::listType_pskel&);

    void
    list_parser (::xml_schema::parser_map&);

    virtual void
    _reset ();

    // Constructor.
    //
    resource_lists_pskel ();

    public:
    static const char*
    _static_type ();

    virtual const char*
    _dynamic_type () const;

    // Implementation details.
    //
    protected:
    resource_lists_pskel* resource_lists_impl_;
    resource_lists_pskel (resource_lists_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&,
                         const char*);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::resource_lists::listType_pskel* list_parser_;
    ::xml_schema::parser_map* list_parser_map_;


    public:
    struct v_state_descr_
    {
      void (::resource_lists::resource_lists_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        const char*,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                const char*,
                bool);
  };
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsde/cxx/post.hxx>

#endif // RESOURCE_LISTS_PSKEL_HXX
