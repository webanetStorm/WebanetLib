#include <iostream>
#include "func.h"


using namespace webanet;
using namespace std;

int main()
{
    setlocale( LC_ALL, "Russian" );

    cout << RemoveExtraSpaces( "Matvey   Korshunov" );
}
