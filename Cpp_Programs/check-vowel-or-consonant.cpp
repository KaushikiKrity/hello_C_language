#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome" << endl;
    //define a variable character c
    char c;
    
    //take input from user
    cout << "Enter an alphabet letter: ";
    cin >> c;
    
    //check the input character is a vowel or a consonant
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {cout << c << " is a vowel letter.";}
    else
        {cout << c << " is a consonant letter.";}
    
    return 0;
}
