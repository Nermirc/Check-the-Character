#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Lutfen karakter giriniz.\n" << endl;
    cin >> ch ;

    //Alphabet check
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is an Alphabet " ;
    }
    else if (ch > '0' && ch<= '9')
    {
        cout << ch << " is a number" ;
    }
    else{
        cout << ch << " is a special character " ;
    }
    return 0 ;
}

