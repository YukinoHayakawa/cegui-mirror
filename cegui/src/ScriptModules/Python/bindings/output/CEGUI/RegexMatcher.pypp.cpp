// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "RegexMatcher.pypp.hpp"

namespace bp = boost::python;

struct RegexMatcher_wrapper : CEGUI::RegexMatcher, bp::wrapper< CEGUI::RegexMatcher > {

    RegexMatcher_wrapper()
    : CEGUI::RegexMatcher()
      , bp::wrapper< CEGUI::RegexMatcher >(){
        // null constructor
        
    }

    virtual ::CEGUI::String const & getRegexString(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual bool matchRegex( ::CEGUI::String const & str ) const {
        bp::override func_matchRegex = this->get_override( "matchRegex" );
        return func_matchRegex( boost::ref(str) );
    }

    virtual void setRegexString( ::CEGUI::String const & regex ){
        bp::override func_setRegexString = this->get_override( "setRegexString" );
        func_setRegexString( boost::ref(regex) );
    }

};

void register_RegexMatcher_class(){

    { //::CEGUI::RegexMatcher
        typedef bp::class_< RegexMatcher_wrapper, boost::noncopyable > RegexMatcher_exposer_t;
        RegexMatcher_exposer_t RegexMatcher_exposer = RegexMatcher_exposer_t( "RegexMatcher" );
        bp::scope RegexMatcher_scope( RegexMatcher_exposer );
        { //::CEGUI::RegexMatcher::getRegexString
        
            typedef ::CEGUI::String const & ( ::CEGUI::RegexMatcher::*getRegexString_function_type )(  ) const;
            
            RegexMatcher_exposer.def( 
                "getRegexString"
                , bp::pure_virtual( getRegexString_function_type(&::CEGUI::RegexMatcher::getRegexString) )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "! Set the regex string that will be matched against.\n\
            ! Return reference to current regex string set.\n" );
        
        }
        { //::CEGUI::RegexMatcher::matchRegex
        
            typedef bool ( ::CEGUI::RegexMatcher::*matchRegex_function_type )( ::CEGUI::String const & ) const;
            
            RegexMatcher_exposer.def( 
                "matchRegex"
                , bp::pure_virtual( matchRegex_function_type(&::CEGUI::RegexMatcher::matchRegex) )
                , ( bp::arg("str") )
                , "! Return reference to current regex string set.\n\
            ! Return whether a given string matches the set regex.\n" );
        
        }
        { //::CEGUI::RegexMatcher::setRegexString
        
            typedef void ( ::CEGUI::RegexMatcher::*setRegexString_function_type )( ::CEGUI::String const & ) ;
            
            RegexMatcher_exposer.def( 
                "setRegexString"
                , bp::pure_virtual( setRegexString_function_type(&::CEGUI::RegexMatcher::setRegexString) )
                , ( bp::arg("regex") )
                , "! Destructor.\n\
            ! Set the regex string that will be matched against.\n" );
        
        }
    }

}
