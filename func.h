#pragma once

#include <string>
#include <vector>


using namespace std;

namespace webanet
{

	string StrReplace( string search, string replace, string subject );

	string Trim( string subject );

	string RemoveExtraSpaces( string subject );

	vector<string> Explode( string separator, string text );

	string Implode( string separator, vector<string> array );

}
