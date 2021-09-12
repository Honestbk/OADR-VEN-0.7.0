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

#include "ObjectType.hxx"

namespace oadr2b
{
  namespace sig
  {
    // ObjectType
    // 

    const ObjectType::Id_optional& ObjectType::
    Id () const
    {
      return this->Id_;
    }

    ObjectType::Id_optional& ObjectType::
    Id ()
    {
      return this->Id_;
    }

    void ObjectType::
    Id (const Id_type& x)
    {
      this->Id_.set (x);
    }

    void ObjectType::
    Id (const Id_optional& x)
    {
      this->Id_ = x;
    }

    void ObjectType::
    Id (::std::unique_ptr< Id_type > x)
    {
      this->Id_.set (std::move (x));
    }

    const ObjectType::MimeType_optional& ObjectType::
    MimeType () const
    {
      return this->MimeType_;
    }

    ObjectType::MimeType_optional& ObjectType::
    MimeType ()
    {
      return this->MimeType_;
    }

    void ObjectType::
    MimeType (const MimeType_type& x)
    {
      this->MimeType_.set (x);
    }

    void ObjectType::
    MimeType (const MimeType_optional& x)
    {
      this->MimeType_ = x;
    }

    void ObjectType::
    MimeType (::std::unique_ptr< MimeType_type > x)
    {
      this->MimeType_.set (std::move (x));
    }

    const ObjectType::Encoding_optional& ObjectType::
    Encoding () const
    {
      return this->Encoding_;
    }

    ObjectType::Encoding_optional& ObjectType::
    Encoding ()
    {
      return this->Encoding_;
    }

    void ObjectType::
    Encoding (const Encoding_type& x)
    {
      this->Encoding_.set (x);
    }

    void ObjectType::
    Encoding (const Encoding_optional& x)
    {
      this->Encoding_ = x;
    }

    void ObjectType::
    Encoding (::std::unique_ptr< Encoding_type > x)
    {
      this->Encoding_.set (std::move (x));
    }
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

namespace oadr2b
{
  namespace sig
  {
    // ObjectType
    //

    ObjectType::
    ObjectType ()
    : ::xml_schema::type (),
      Id_ (this),
      MimeType_ (this),
      Encoding_ (this)
    {
    }

    ObjectType::
    ObjectType (const ObjectType& x,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      Id_ (x.Id_, f, this),
      MimeType_ (x.MimeType_, f, this),
      Encoding_ (x.Encoding_, f, this)
    {
    }

    ObjectType::
    ObjectType (const ::xercesc::DOMElement& e,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      Id_ (this),
      MimeType_ (this),
      Encoding_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
        this->parse (p, f);
      }
    }

    void ObjectType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        break;
      }

      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "Id" && n.namespace_ ().empty ())
        {
          this->Id_.set (Id_traits::create (i, f, this));
          continue;
        }

        if (n.name () == "MimeType" && n.namespace_ ().empty ())
        {
          this->MimeType_.set (MimeType_traits::create (i, f, this));
          continue;
        }

        if (n.name () == "Encoding" && n.namespace_ ().empty ())
        {
          this->Encoding_.set (Encoding_traits::create (i, f, this));
          continue;
        }
      }
    }

    ObjectType* ObjectType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class ObjectType (*this, f, c);
    }

    ObjectType& ObjectType::
    operator= (const ObjectType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->Id_ = x.Id_;
        this->MimeType_ = x.MimeType_;
        this->Encoding_ = x.Encoding_;
      }

      return *this;
    }

    ObjectType::
    ~ObjectType ()
    {
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace sig
  {
  }
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

namespace oadr2b
{
  namespace sig
  {
    void
    operator<< (::xercesc::DOMElement& e, const ObjectType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // Id
      //
      if (i.Id ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "Id",
            e));

        a << *i.Id ();
      }

      // MimeType
      //
      if (i.MimeType ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "MimeType",
            e));

        a << *i.MimeType ();
      }

      // Encoding
      //
      if (i.Encoding ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "Encoding",
            e));

        a << *i.Encoding ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
