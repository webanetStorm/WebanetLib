#include <iostream>
#include "String.h"


using namespace std;

int main()
{
    setlocale( LC_ALL, "Russian" );

    String str = "Matvey    Korshunov";
    cout << str << endl;
    str.RemoveExtraSpaces();
    cout << str;
}
