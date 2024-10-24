#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
#include <ctime>
using namespace std;

void easy_mode()
{
    srand(time(0)); //randomly generates need number every time by seeding

    int turn =  0 + rand() % (1 - 0 + 1);
    int player = 0;
    int computer = 0;
    int max = 21;
    int min = 10;
    int pile_of_stones = min + rand() % (max - min + 1);

    cout << "The initial number of stones is: " << pile_of_stones << endl;
    cout << endl;

    if (turn == 0)
    {
        cout << "Player startss first" << endl;
        cout << "There are " << pile_of_stones << " left" << endl;
        cout << "Choose between 1, 2, or 3 stones to take: " << endl;
        cin >> player;
        cout << "Player takes " << player << " stones" << endl;
    }
    else if (turn == 1)
    {
        cout << "Computer starts first" << endl;
        cout << "There are " << pile_of_stones << " stones left" << endl;
        computer = 1 + rand() % (3 - 1 +1);
        pile_of_stones - computer;
        cout << "Computer takes " << computer << " stones" << endl;
    }

    



}


int main()
{
    char mode;
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

    while (count == 0)
    {
        if (mode == 'e')
        {
            cout << "You have chosen the easy mode" << endl;
            count++;
        }
        else if (mode == 'h') 
        {
            cout << "You have chosen the hard mode" << endl;
            count++;
        }
        else if (mode != 'e')
        {
            cout << "Try again, enter (easy) for easy mode or (hard) for hard mode" << endl;
            cin >> mode;
        }
        else if (mode != 'h')
        {
            cout << "Try again, enter (easy) for easy mode or (hard) for hard mode" << endl;
            cin >> mode;
        }
    }
    

    if (mode == 'e')
    {
        easy_mode();
    }

    

   return 0; 
}