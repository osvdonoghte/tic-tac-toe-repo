#include <iostream>
using namespace std;
char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice;
int row, cols;
int checkWin()
{
    if (square[1] == square[2] && square[2] == square[3])
    {
        return 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
    {
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9])
    {
        return 1;
    }
    else if (square[1] == square[4] && square[4] == square[7])
    {
        return 1;
    }
    else if (square[2] == square[5] && square[5] == square[8])
    {
        return 1;
    }
    else if (square[3] == square[6] && square[6] == square[9])
    {
        return 1;
    }
    else if (square[1] == square[5] && square[5] == square[9])
    {
        return 1;
    }
    else if (square[3] == square[5] && square[5] == square[7])
    {
        return 1;
    }
}
void draw()
{
    system("clear");
    cout << "HELLO DARLING WELCOME TO HELL XD" << endl;
    cout << "LET'S BEGIN " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    
    cout << "    |    |     " << endl;
    cout << " " << square[1] << "  |  " << square[2] << " |  " << square[3] << endl;
    cout << "____|____|____" << endl;
    cout << "    |    |    " << endl;
    cout << " " << square[4] << "  |  " << square[5] << " |  " << square[6] << endl;
    cout << "____|____|____" << endl;
    cout << "    |    |    " << endl;
    cout << " " << square[7] << "  |  " << square[8] << " |  " << square[9] << endl;
    cout << "    |    |    " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

}
void startgame()
{

    cout << "HELLO DARLING WELCOME TO GAME" << endl;
    cout << "LET'S BEGIN" << endl;
}
int main()
{
    startgame();
    int player = 1, i, choice;
    char mark;

    while (i != 1)
    {

        draw();
        player = (player % 2) ? 1 : 2;
        cout << "player " << player << " "  << "enter your number : " << endl;
        cin >> choice;
        mark = (player == 1) ? 'X' : 'O';
        if (choice == 1 && square[1] == '1')
        {
            square[1] = mark;
        }
        else if (choice == 2 && square[2] == '2')
        {
            square[2] = mark;
        }
        else if (choice == 3 && square[3] == '3')
        {
            square[3] = mark;
        }
        else if (choice == 4 && square[4] == '4')
        {
            square[4] = mark;
        }
        else if (choice == 5 && square[5] == '5')
        {
            square[5] = mark;
        }
        else if (choice == 6 && square[6] == '6')
        {
            square[6] = mark;
        }
        else if (choice == 7 && square[7] == '7')
        {
            square[7] = mark;
        }
        else if (choice == 8 && square[8] == '8')
        {
            square[8] = mark;
        }
        else if (choice == 9 && square[9] == '9')
        {
            square[9] = mark;
        }

        i = checkWin();
        player++;
    }

    if (i == 1)
    {
        cout << "player number " << --player << " won the game :) " << endl;
    }
    else
    {
        cout << "draw" << endl;
    }

    return 0;
}