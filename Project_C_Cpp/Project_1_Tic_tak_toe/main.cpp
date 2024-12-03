#include <iostream>
#include <stdlib.h>
using namespace std;

char position[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void board()
{
    cout << "\n\n\t Tic Tac Toe \n\n";
    cout << "Player 1 (X) - Player 2 (O)\n\n";

    cout << "     |     |     " << endl;
    cout << "  " << position[1] << "  |  " << position[2] << "  |  " << position[3] << "  " << endl;
    cout << "_____|_____|_____\n";
    cout << "     |     |     " << endl;
    cout << "  " << position[4] << "  |  " << position[5] << "  |  " << position[6] << "  " << endl;
    cout << "_____|_____|_____\n";
    cout << "     |     |     " << endl;
    cout << "  " << position[7] << "  |  " << position[8] << "  |  " << position[9] << "  " << endl;
    cout << "     |     |     \n";
}

int isWin()
{
    if (position[1] == position[2] && position[2] == position[3])
    {
        return 1;
    }
    else if (position[4] == position[5] && position[5] == position[6])
    {
        return 1;
    }
    else if (position[7] == position[8] && position[8] == position[9])
    {
        return 1;
    }
    else if (position[1] == position[4] && position[4] == position[7])
    {
        return 1;
    }
    else if (position[2] == position[5] && position[5] == position[8])
    {
        return 1;
    }
    else if (position[3] == position[6] && position[6] == position[9])
    {
        return 1;
    }
    else if (position[1] == position[5] && position[5] == position[9])
    {
        return 1;
    }
    else if (position[3] == position[5] && position[5] == position[7])
    {
        return 1;
    }
    else if (position[1] != '1' && position[2] != '2' && position[3] != '3' && position[4] != '4' && position[5] != '5' && position[6] != '6' && position[7] != '7' && position[8] != '8' && position[9] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int choice, i;
    char mark;
    int player = 1;
    do
    {
        system("cls");
        board();
        if (player % 2 == 1)
        {
            player = 1;
        }
        else
            player = 2;

        if (player == 1)
        {
            mark = 'X';
        }
        else
            mark = 'O';

        cout << "Player " << player << " enter a number: ";
        cin >> choice;

        if (choice == 1 && position[1] == '1')
        {
            position[1] = mark;
        }
        else if (choice == 2 && position[2] == '2')
        {
            position[2] = mark;
        }
        else if (choice == 3 && position[3] == '3')
        {
            position[3] = mark;
        }
        else if (choice == 4 && position[4] == '4')
        {
            position[4] = mark;
        }
        else if (choice == 5 && position[5] == '5')
        {
            position[5] = mark;
        }
        else if (choice == 6 && position[6] == '6')
        {
            position[6] = mark;
        }
        else if (choice == 7 && position[7] == '7')
        {
            position[7] = mark;
        }
        else if (choice == 8 && position[8] == '8')
        {
            position[8] = mark;
        }
        else if (choice == 9 && position[9] == '9')
        {
            position[9] = mark;
        }
        else
        {
            cout << "Invalid move";
            player--;
            getchar();
        }
        player++;
        // board();
        i = isWin();
    } while (i == -1);

    if (i == 1)
    {
        system("cls");
        board();
        player--;
        cout << ">> Player " << player << " win";
    }
    else
    {
        system("cls");
        board();
        cout << "Game draw";
    }

    return 0;
}