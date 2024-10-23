#include <iostream>
#include <cmath>
#include <string>
#include <cctype>

using namespace std;




int main()
{
    char mode;
    string e = "You have chosen the easy mode";
    string h = "You have chosen the hard mode";
    int count = 0;

    cout << "--------------- THE GAME OF NIM ---------------" << endl;
    cout << endl;
    cout << "Rules of the game:" << endl;
    cout << " * Players take alternate turns taking stones from the pile" << endl;
    cout << " * Each player remove 1, 2, or 3 stones from the pile." << endl;
    cout << " * The player who takes the last stone resulting in 0 stones left from the pile loses" << endl;

    cout << "Choose mode: " << endl;
    cout << "Easy Mode (e) or Hard Mode (h): ";
    
    cin >> mode;

    while (count < 1)
    {
        if (mode != 'e' || mode != 'h')
        {
        cout << "Try again, enter (e) for easy more or (h) for hard mode" << endl;
        cin >> mode;
        }
        if (mode == 'e' || mode == 'h')
        {
        count++;
        }
    }

    if (mode == 'e')
    {
        cout << "haha";
    }

    

   return 0; 
}