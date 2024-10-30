#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
#include <ctime>
using namespace std;

void get_valid_player_input(int pile_of_stones, int player_input) //function to get correct player input
{
    int correct = 0;

    while (correct < 1)
    {
        if (player_input <= 0 || player_input > 3 || player_input > pile_of_stones)
        {
            cout << "Please only take 1, 2, or 3 stones at one time. As long as there is enough in pile of stones" << endl;
            cin >> player_input;
        }
        else if (player_input >= 0 || player_input < 3 || player_input <= pile_of_stones)
        {
            correct++;
        }
    }
}
void easy_mode()
{
    srand(time(0)); //randomly generates need number every time by seeding

    int turn =  0 + rand() % (100 - 0 + 1); // randomizes starting to ensure 50/50
    int player = 0;
    int computer = 0;
    int max = 21;
    int min = 10;
    int pile_of_stones = min + rand() % (max - min + 1);
    int count = 0;

    int initial_stones;
    int last_turn;

    cout << "The initial number of stones is: " << pile_of_stones << endl;
    initial_stones = pile_of_stones;
    cout << endl;
    while (count < 1)   
    {

        if (turn > 50)
        {   
            cout << "Player starts first" << endl;
            cout << "There are " << pile_of_stones << " left" << endl;
            cout << "Choose between 1, 2, or 3 stones to take: " << endl;
            cin >> player;
            get_valid_player_input(pile_of_stones, player);
            cout << "Player takes " << player << " stones" << endl;
            pile_of_stones = pile_of_stones - player;
        }
        else if (turn <= 50)
        {
            cout << "Computer starts first" << endl;
            cout << "There are " << pile_of_stones << " stones left" << endl;
            computer = 1 + rand() % (3 - 1 +1);
            pile_of_stones = pile_of_stones - computer;
            cout << "Computer takes " << computer << " stones" << endl;
        }
        count++;
    }
    while (pile_of_stones > 0) //automates the rest of game depending on who starts first
    {
        if (turn > 50)
        {
            cout << "There are " << pile_of_stones << " stones left" << endl;
            computer = 1 + rand() % (3 - 1 +1);
            pile_of_stones = pile_of_stones - computer;
            cout << "Computer takes " << computer << " stones" << endl;
            turn = turn - 100; //ensures next turn is other player
            last_turn = 1;
        }

        else if (turn <= 50)
        {
            cout << "There are " << pile_of_stones << " left" << endl;
            cout << "Choose between 1, 2, or 3 stones to take: " << endl;
            cin >> player;
            get_valid_player_input(pile_of_stones, player);
            cout << "Player takes " << player << " stones" << endl;
            pile_of_stones = pile_of_stones - player;
            turn = turn + 100;
            last_turn = 0;
        }
        if (pile_of_stones <= 0) //decides whether user wins or loses
        {
            if (last_turn == 0)
            {
                cout << "You LOSE :( " << endl;
            }
            else if (last_turn == 1)
            {
                cout << "You Win!!!" << endl;
            }
        }
    }
    
}
void hard_mode()
{
    srand(time(0)); //randomly generates need number every time by seeding

    int turn =  0 + rand() % (100 - 0 + 1); // randomizes starting to ensure 50/50
    int player = 0;
    int computer = 0;
    int max = 21;
    int min = 10;
    int pile_of_stones = min + rand() % (max - min + 1);
    int count = 0;

    int initial_stones;
    int last_turn;

    cout << "The initial number of stones is: " << pile_of_stones << endl;
    initial_stones = pile_of_stones;
    cout << endl;
    while (count < 1)   
    {

        if (turn > 50)
        {   
            cout << "Player starts first" << endl;
            cout << "There are " << pile_of_stones << " stones" << endl;
            cout << "Choose between 1, 2, or 3 stones to take: " << endl;
            cin >> player;
            get_valid_player_input(pile_of_stones, player);
            cout << "Player takes " << player << " stones" << endl;
            pile_of_stones = pile_of_stones - player;
        }
        else if (turn <= 50)
        {
            cout << "Computer starts first" << endl;
            cout << "There are " << pile_of_stones << " stones" << endl;
            if (pile_of_stones % 4 - 1 == 0) // if pile_of_stones is a multiple of stones
            {
                pile_of_stones = pile_of_stones - 1;
            }
            else if (pile_of_stones % 4 - 1 != 0)
            {
            computer = pile_of_stones % 4 - 1;
            cout << computer << endl;
            pile_of_stones = pile_of_stones - computer;
            }
            cout << "Computer takes " << computer << " stones" << endl;
        }
        count++;
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
    else if(mode == 'h')
    {
        hard_mode();
    }

    

   return 0; 
}