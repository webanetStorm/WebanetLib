#include <string>
#include <vector>


using namespace std;

namespace webanet
{

	string StrReplace( string search, string replace, string subject )
	{
		size_t start = 0, end = subject.find( search ), length = search.length();

		while ( end != string::npos )
		{
			subject.replace( end, length, replace );
			start = end + length;
			end = subject.find( search, start );
		}

		return subject;
	}

	string Trim( string subject )
	{
		while ( subject[0] == ' ' )
			subject.erase( 0, 1 );

		while ( subject[subject.length() - 1] == ' ' )
			subject.erase( subject.length() - 1, 1 );

		return subject;
	}

	string RemoveExtraSpaces( string subject )
	{
		subject = Trim( subject );

		while ( subject.find( "  " ) != string::npos )
			subject = StrReplace( "  ", " ", subject );

		return subject;
	}

	vector<string> Explode( string separator, string text )
	{
		vector<string> result;
		size_t start = 0, end = text.find( separator );

		while ( end != string::npos )
		{
			result.push_back( Trim( text.substr( start, end - start ) ) );
			start = end + separator.length();
			end = text.find( separator, start );
		}

		result.push_back( Trim( text.substr( start ) ) );


		return result;
	}

	string Implode( string separator, vector<string> array )
	{
		string result;
		size_t size = array.size();

		for ( int i = 0; i < size; i++ )
			result += i == size - 1 ? array[i] : array[i] + separator;

		return result;
	}

}
