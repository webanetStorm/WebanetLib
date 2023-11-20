#include "String.h"
#include <string>


using namespace std;

String::String( const char* str ) : string( str ) {}

String& String::StrReplace( String search, String replace )
{
    size_t start = 0, end = find( search ), length = search.length();

    while ( end != npos )
    {
        string::replace( end, length, replace );
        start = end + length;
        end = find( search, start );
    }

    return *this;
}

String& String::Trim()
{
    while ( !empty() and front() == ' ' )
        erase( begin() );

    while ( !empty() and back() == ' ' )
        pop_back();

    return *this;
}

String& String::RemoveExtraSpaces()
{
    Trim();

    while ( find( "  " ) != npos )
        *this = StrReplace( "  ", " " );

    return *this;
}
