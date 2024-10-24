#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
#include <ctime>
using namespace std;

void easy_mode()
{
    srand(time(0)); //randomly generates need number every time by seeding
    int max = 21;
    int min = 10;
    int pile_of_stones = min + rand() % (max - min + 1);
    cout << "The initial number of stones is: " << pile_of_stones << endl;
}


int main()
{
    string mode = "";
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
    cout << "Easy Mode (easy) or Hard Mode (hard): ";
    
    cin >> mode;

    while (count < 1)
    {
        if (mode != "easy" || mode != "hard")
        {
        cout << "Try again, enter (easy) for easy mode or (hard) for hard mode" << endl;
        cin >> mode;
        }
        else if (mode == "easy" || mode == "hard")
        {
        count++;
        }
    }

    if (mode == "easy")
    {
        easy_mode();
    }

    

   return 0; 
}