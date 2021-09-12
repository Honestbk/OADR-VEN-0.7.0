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

#include "oadrLoadControlStateType.hxx"

#include "oadrLoadControlStateTypeType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrLoadControlStateType
    // 

    const oadrLoadControlStateType::oadrCapacity_optional& oadrLoadControlStateType::
    oadrCapacity () const
    {
      return this->oadrCapacity_;
    }

    oadrLoadControlStateType::oadrCapacity_optional& oadrLoadControlStateType::
    oadrCapacity ()
    {
      return this->oadrCapacity_;
    }

    void oadrLoadControlStateType::
    oadrCapacity (const oadrCapacity_type& x)
    {
      this->oadrCapacity_.set (x);
    }

    void oadrLoadControlStateType::
    oadrCapacity (const oadrCapacity_optional& x)
    {
      this->oadrCapacity_ = x;
    }

    void oadrLoadControlStateType::
    oadrCapacity (::std::unique_ptr< oadrCapacity_type > x)
    {
      this->oadrCapacity_.set (std::move (x));
    }

    const oadrLoadControlStateType::oadrLevelOffset_optional& oadrLoadControlStateType::
    oadrLevelOffset () const
    {
      return this->oadrLevelOffset_;
    }

    oadrLoadControlStateType::oadrLevelOffset_optional& oadrLoadControlStateType::
    oadrLevelOffset ()
    {
      return this->oadrLevelOffset_;
    }

    void oadrLoadControlStateType::
    oadrLevelOffset (const oadrLevelOffset_type& x)
    {
      this->oadrLevelOffset_.set (x);
    }

    void oadrLoadControlStateType::
    oadrLevelOffset (const oadrLevelOffset_optional& x)
    {
      this->oadrLevelOffset_ = x;
    }

    void oadrLoadControlStateType::
    oadrLevelOffset (::std::unique_ptr< oadrLevelOffset_type > x)
    {
      this->oadrLevelOffset_.set (std::move (x));
    }

    const oadrLoadControlStateType::oadrPercentOffset_optional& oadrLoadControlStateType::
    oadrPercentOffset () const
    {
      return this->oadrPercentOffset_;
    }

    oadrLoadControlStateType::oadrPercentOffset_optional& oadrLoadControlStateType::
    oadrPercentOffset ()
    {
      return this->oadrPercentOffset_;
    }

    void oadrLoadControlStateType::
    oadrPercentOffset (const oadrPercentOffset_type& x)
    {
      this->oadrPercentOffset_.set (x);
    }

    void oadrLoadControlStateType::
    oadrPercentOffset (const oadrPercentOffset_optional& x)
    {
      this->oadrPercentOffset_ = x;
    }

    void oadrLoadControlStateType::
    oadrPercentOffset (::std::unique_ptr< oadrPercentOffset_type > x)
    {
      this->oadrPercentOffset_.set (std::move (x));
    }

    const oadrLoadControlStateType::oadrSetPoint_optional& oadrLoadControlStateType::
    oadrSetPoint () const
    {
      return this->oadrSetPoint_;
    }

    oadrLoadControlStateType::oadrSetPoint_optional& oadrLoadControlStateType::
    oadrSetPoint ()
    {
      return this->oadrSetPoint_;
    }

    void oadrLoadControlStateType::
    oadrSetPoint (const oadrSetPoint_type& x)
    {
      this->oadrSetPoint_.set (x);
    }

    void oadrLoadControlStateType::
    oadrSetPoint (const oadrSetPoint_optional& x)
    {
      this->oadrSetPoint_ = x;
    }

    void oadrLoadControlStateType::
    oadrSetPoint (::std::unique_ptr< oadrSetPoint_type > x)
    {
      this->oadrSetPoint_.set (std::move (x));
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
  namespace oadr
  {
    // oadrLoadControlStateType
    //

    oadrLoadControlStateType::
    oadrLoadControlStateType ()
    : ::xml_schema::type (),
      oadrCapacity_ (this),
      oadrLevelOffset_ (this),
      oadrPercentOffset_ (this),
      oadrSetPoint_ (this)
    {
    }

    oadrLoadControlStateType::
    oadrLoadControlStateType (const oadrLoadControlStateType& x,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      oadrCapacity_ (x.oadrCapacity_, f, this),
      oadrLevelOffset_ (x.oadrLevelOffset_, f, this),
      oadrPercentOffset_ (x.oadrPercentOffset_, f, this),
      oadrSetPoint_ (x.oadrSetPoint_, f, this)
    {
    }

    oadrLoadControlStateType::
    oadrLoadControlStateType (const ::xercesc::DOMElement& e,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      oadrCapacity_ (this),
      oadrLevelOffset_ (this),
      oadrPercentOffset_ (this),
      oadrSetPoint_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void oadrLoadControlStateType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // oadrCapacity
        //
        if (n.name () == "oadrCapacity" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrCapacity_type > r (
            oadrCapacity_traits::create (i, f, this));

          if (!this->oadrCapacity_)
          {
            this->oadrCapacity_.set (::std::move (r));
            continue;
          }
        }

        // oadrLevelOffset
        //
        if (n.name () == "oadrLevelOffset" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrLevelOffset_type > r (
            oadrLevelOffset_traits::create (i, f, this));

          if (!this->oadrLevelOffset_)
          {
            this->oadrLevelOffset_.set (::std::move (r));
            continue;
          }
        }

        // oadrPercentOffset
        //
        if (n.name () == "oadrPercentOffset" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrPercentOffset_type > r (
            oadrPercentOffset_traits::create (i, f, this));

          if (!this->oadrPercentOffset_)
          {
            this->oadrPercentOffset_.set (::std::move (r));
            continue;
          }
        }

        // oadrSetPoint
        //
        if (n.name () == "oadrSetPoint" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrSetPoint_type > r (
            oadrSetPoint_traits::create (i, f, this));

          if (!this->oadrSetPoint_)
          {
            this->oadrSetPoint_.set (::std::move (r));
            continue;
          }
        }

        break;
      }
    }

    oadrLoadControlStateType* oadrLoadControlStateType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrLoadControlStateType (*this, f, c);
    }

    oadrLoadControlStateType& oadrLoadControlStateType::
    operator= (const oadrLoadControlStateType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->oadrCapacity_ = x.oadrCapacity_;
        this->oadrLevelOffset_ = x.oadrLevelOffset_;
        this->oadrPercentOffset_ = x.oadrPercentOffset_;
        this->oadrSetPoint_ = x.oadrSetPoint_;
      }

      return *this;
    }

    oadrLoadControlStateType::
    ~oadrLoadControlStateType ()
    {
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace oadr
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
  namespace oadr
  {
    void
    operator<< (::xercesc::DOMElement& e, const oadrLoadControlStateType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // oadrCapacity
      //
      if (i.oadrCapacity ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrCapacity",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrCapacity ();
      }

      // oadrLevelOffset
      //
      if (i.oadrLevelOffset ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrLevelOffset",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrLevelOffset ();
      }

      // oadrPercentOffset
      //
      if (i.oadrPercentOffset ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrPercentOffset",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrPercentOffset ();
      }

      // oadrSetPoint
      //
      if (i.oadrSetPoint ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrSetPoint",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrSetPoint ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
