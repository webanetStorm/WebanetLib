#pragma once
#include <string>


using namespace std;

class String : public string
{

public:

	String( const char* str );

	String& StrReplace( String search, String replace );

	String& Trim();

	String& RemoveExtraSpaces();

};

