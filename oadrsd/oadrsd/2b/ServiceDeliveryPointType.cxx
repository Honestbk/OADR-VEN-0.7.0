// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
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
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "ServiceDeliveryPointType.hxx"

#include "NodeType.hxx"

namespace power
{
  // ServiceDeliveryPointType
  // 

  const ServiceDeliveryPointType::node_type& ServiceDeliveryPointType::
  node () const
  {
    return this->node_.get ();
  }

  ServiceDeliveryPointType::node_type& ServiceDeliveryPointType::
  node ()
  {
    return this->node_.get ();
  }

  void ServiceDeliveryPointType::
  node (const node_type& x)
  {
    this->node_.set (x);
  }

  void ServiceDeliveryPointType::
  node (::std::unique_ptr< node_type > x)
  {
    this->node_.set (std::move (x));
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace power
{
  // ServiceDeliveryPointType
  //

  ServiceDeliveryPointType::
  ServiceDeliveryPointType (const node_type& node)
  : ::xml_schema::type (),
    node_ (node, this)
  {
  }

  ServiceDeliveryPointType::
  ServiceDeliveryPointType (const ServiceDeliveryPointType& x,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    node_ (x.node_, f, this)
  {
  }

  ServiceDeliveryPointType::
  ServiceDeliveryPointType (const ::xercesc::DOMElement& e,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    node_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
      this->parse (p, f);
    }
  }

  void ServiceDeliveryPointType::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // node
      //
      if (n.name () == "node" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06/power")
      {
        ::std::unique_ptr< node_type > r (
          node_traits::create (i, f, this));

        if (!node_.present ())
        {
          this->node_.set (::std::move (r));
          continue;
        }
      }

      break;
    }

    if (!node_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "node",
        "http://docs.oasis-open.org/ns/emix/2011/06/power");
    }
  }

  ServiceDeliveryPointType* ServiceDeliveryPointType::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class ServiceDeliveryPointType (*this, f, c);
  }

  ServiceDeliveryPointType& ServiceDeliveryPointType::
  operator= (const ServiceDeliveryPointType& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->node_ = x.node_;
    }

    return *this;
  }

  ServiceDeliveryPointType::
  ~ServiceDeliveryPointType ()
  {
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace power
{
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace power
{
  void
  operator<< (::xercesc::DOMElement& e, const ServiceDeliveryPointType& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // node
    //
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "node",
          "http://docs.oasis-open.org/ns/emix/2011/06/power",
          e));

      s << i.node ();
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
