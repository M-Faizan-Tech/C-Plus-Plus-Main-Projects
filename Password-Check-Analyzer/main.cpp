#include <iostream>
#include <conio.h>  // for getch()
using namespace std;
int main() {
    char ch;
    int ucase = 0, lcase = 0, number = 0, special = 0, total = 0;
    cout << "Enter password: ";
    while(true) {
        ch = getch();        // For not showing character
        if(ch == 13) break;  // Enter ASCII = 13
        cout << '*';         // Show '*' instead of character
        total++;
        if(ch >= 'A' && ch <= 'Z')
        ucase++;
        else if(ch >= 'a' && ch <= 'z')
        lcase++;
        else if(ch >= '0' && ch <= '9')
        number++;
        else
        special++;
    }
    cout << "\nTotal characters: " << total << endl;
    cout << "Uppercase: " << ucase << endl;
    cout << "Lowercase: " << lcase << endl;
    cout << "Numbers: " << number << endl;
    cout << "Special characters: " << special << endl;
    // Strength calculation
    int typeCount = 0;
    if(ucase > 0)
    typeCount++;
    if(lcase > 0)
    typeCount++;
    if(number > 0)
    typeCount++;
    if(special > 0)
    typeCount++;
    
    cout << "Password Strength: ";
    if(total >= 8 && typeCount == 4)
        cout << "Strong" << endl;
    else if(total >= 6 && typeCount >= 2)
        cout << "Moderate" << endl;
    else
        cout << "Weak" << endl;
        
    return 0;
}
