#include <bits/stdc++.h>
using namespace std;

class ttt
{
    int match_board[3][3];

public:
    int allfilled()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (match_board[i][j] == -1)
                    return 0;
            }
        }
        return 1;
    }

    int whowin()
    {

        for (int i = 0; i < 3; i++)
        {

            if (match_board[i][0] == -1)
                continue;
            int same = match_board[i][0];

            for (int j = 0; j < 3; j++)
            {
                if (match_board[i][j] != same)
                    continue;
            }

            return same;
        }
        return -1;
    }

    void display()
    {

        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {

                if (match_board[i][j] == -1)
                    cout << "   ";
                else
                    cout << " " << match_board[i][j] << " ";
                if (j != 2)
                    cout << "|";
            }
            cout << endl;
            if (i != 2)
                cout << "-----------" << endl;
        }
        cout << endl;
        cout << endl;
        // cout << endl;
    }

    int fillvalue(int position, int value)
    {
        position--;
        int i = position / 3;
        int j = position % 3;
        if (match_board[i][j] != -1)
            return 0;
        match_board[i][j] = value;
        return 1;
    }

    int checkforwin(int value)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (match_board[i][j] == -1)
                {
                    if (i == 0)
                    {
                        if (match_board[1][j] == match_board[2][j] && match_board[1][j] == value)
                        {
                            match_board[0][j] = value;
                            return 1;
                        }
                    }
                    if (i == 1)
                    {
                        if (match_board[0][j] == match_board[2][j] && match_board[0][j] == value)
                        {
                            match_board[1][j] = value;
                            return 1;
                        }
                    }
                    if (i == 2)
                    {
                        if (match_board[0][j] == match_board[1][j] && match_board[0][j] == value)
                        {
                            match_board[2][j] = value;
                            return 1;
                        }
                    }

                    if (j == 0)
                    {
                        if (match_board[i][1] == match_board[i][2] && match_board[i][2] == value)
                        {
                            match_board[i][0] = value;
                            return 1;
                        }
                    }
                    if (j == 1)
                    {
                        if (match_board[i][0] == match_board[i][2] && match_board[i][2] == value)
                        {
                            match_board[i][1] = value;
                            return 1;
                        }
                    }
                    if (j == 2)
                    {
                        if (match_board[i][0] == match_board[i][1] && match_board[i][1] == value)
                        {
                            match_board[i][2] = value;
                            return 1;
                        }
                    }

                    if (i == 0 && j == 0)
                    {
                        if (match_board[1][1] == match_board[2][2] && match_board[1][1] == value)
                        {
                            match_board[0][0] = value;
                            return 1;
                        }
                    }

                    if (i == 1 && j == 1)
                    {
                        if (match_board[0][0] == match_board[2][2] && match_board[0][0] == value)
                        {
                            match_board[1][1] = value;
                            return 1;
                        }
                        if (match_board[2][0] == match_board[0][2] && match_board[0][2] == value)
                        {
                            match_board[1][1] = value;
                            return 1;
                        }
                    }

                    if (i == 2 && j == 2)
                    {
                        if (match_board[1][1] == match_board[0][0] && match_board[1][1] == value)
                        {
                            match_board[2][2] = value;
                            return 1;
                        }
                    }

                    if (i == 0 && j == 2)
                    {
                        if (match_board[1][1] == match_board[2][0] && match_board[1][1] == value)
                        {
                            match_board[0][2] = value;
                            return 1;
                        }
                    }

                    if (i == 2 && j == 0)
                    {
                        if (match_board[1][1] == match_board[0][2] && match_board[1][1] == value)
                        {
                            match_board[2][0] = value;
                            return 1;
                        }
                    }
                }
            }
        }

        return 0;
    }

    int checkforsafe(int value)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (match_board[i][j] == -1)
                {
                    if (i == 0)
                    {
                        if (match_board[1][j] == match_board[2][j] && match_board[1][j] == 1 - value)
                        {
                            match_board[0][j] = value;
                            return 1;
                        }
                    }
                    if (i == 1)
                    {
                        if (match_board[0][j] == match_board[2][j] && match_board[0][j] == 1 - value)
                        {
                            match_board[1][j] = value;
                            return 1;
                        }
                    }
                    if (i == 2)
                    {
                        if (match_board[0][j] == match_board[1][j] && match_board[0][j] == 1 - value)
                        {
                            match_board[2][j] = value;
                            return 1;
                        }
                    }

                    if (j == 0)
                    {
                        if (match_board[i][1] == match_board[i][2] && match_board[i][2] == 1 - value)
                        {
                            match_board[i][0] = value;
                            return 1;
                        }
                    }
                    if (j == 1)
                    {
                        if (match_board[i][0] == match_board[i][2] && match_board[i][2] == 1 - value)
                        {
                            match_board[i][1] = value;
                            return 1;
                        }
                    }
                    if (j == 2)
                    {
                        if (match_board[i][0] == match_board[i][1] && match_board[i][1] == 1 - value)
                        {
                            match_board[i][2] = value;
                            return 1;
                        }
                    }

                    if (i == 0 && j == 0)
                    {
                        if (match_board[1][1] == match_board[2][2] && match_board[1][1] == 1 - value)
                        {
                            match_board[0][0] = value;
                            return 1;
                        }
                    }

                    if (i == 1 && j == 1)
                    {
                        if (match_board[0][0] == match_board[2][2] && match_board[0][0] == 1 - value)
                        {
                            match_board[1][1] = value;
                            return 1;
                        }
                        if (match_board[2][0] == match_board[0][2] && match_board[0][2] == 1 - value)
                        {
                            match_board[1][1] = value;
                            return 1;
                        }
                    }

                    if (i == 2 && j == 2)
                    {
                        if (match_board[1][1] == match_board[0][0] && match_board[1][1] == 1 - value)
                        {
                            match_board[2][2] = value;
                            return 1;
                        }
                    }

                    if (i == 0 && j == 2)
                    {
                        if (match_board[1][1] == match_board[2][0] && match_board[1][1] == 1 - value)
                        {
                            match_board[0][2] = value;
                            return 1;
                        }
                    }

                    if (i == 2 && j == 0)
                    {
                        if (match_board[1][1] == match_board[0][2] && match_board[1][1] == 1 - value)
                        {
                            match_board[2][0] = value;
                            return 1;
                        }
                    }
                }
            }
        }

        return 0;
    }

    int showresult()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (match_board[i][j] != -1)
                {
                    if (i == 1)
                    {
                        if (match_board[0][j] == match_board[2][j] && match_board[0][j] == match_board[1][j])
                        {
                            cout << "Winner is:" << match_board[i][j] << endl;
                            return match_board[i][j];
                        }
                    }

                    if (j == 1)
                    {
                        if (match_board[i][0] == match_board[i][2] && match_board[i][2] == match_board[i][1])
                        {
                            cout << "Winner is:" << match_board[i][j] << endl;
                            return match_board[i][j];
                        }
                    }

                    if (i == 1 && j == 1)
                    {
                        if (match_board[0][0] == match_board[2][2] && match_board[0][0] == match_board[1][1])
                        {
                            cout << "Winner is:" << match_board[i][j] << endl;
                            return match_board[i][j];
                        }
                        if (match_board[2][0] == match_board[0][2] && match_board[0][2] == match_board[1][1])
                        {
                            cout << "Winner is:" << match_board[i][j] << endl;
                            return match_board[i][j];
                        }
                    }
                }
            }
        }
        return -1;
    }

    void computer_move(int value)
    {
        int flag = 0;

        flag = checkforwin(value);
        if (flag == 1)
            return;

        flag = checkforsafe(value);
        if (flag == 1)
            return;

        vector<int> empty_cell;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (match_board[i][j] == -1)
                {
                    empty_cell.push_back((i * 3) + j + 1);
                }
            }
        }

        int sz = empty_cell.size();
        srand(time(0));

        int random_move = rand() % sz;

        fillvalue(empty_cell[random_move], value);
    }

    void initialize()
    {
        memset(match_board, -1, sizeof(match_board));
    }
};

int main()
{
    cout << "Game Start!\n\n";
    cout << " 1 | 2 | 3\n";
    cout << "-----------\n";
    cout << " 4 | 5 | 6\n";
    cout << "-----------\n";
    cout << " 7 | 8 | 9\n\n";
    ttt game;

    int choice;

    cout << "Enter 1 to play with computer, 2 to play with friend: ";
    cin >> choice;

    game.initialize();
    game.display();

    int value = 0;

    while (true)
    {
        int win = -1;
        win = game.showresult();
        if (game.allfilled() == 1 || win != -1)
        {
            int play_again;
            if (win == -1)
                cout << "Match Draw!!" << endl;
            cout << "Enter 1 to Play again, 0 to end here: ";
            cin >> play_again;
            if (play_again == 1)
            {
                cout << "Enter 1 to play with computer, 2 to play with friend: ";
                cin >> choice;
                game.initialize();
                game.display();
                value = 0;
                continue;
            }
            else
                break;
        }

        cout << "take your move, give input: ";
        int ipt;
        cin >> ipt;
        cout << endl;

        while (game.fillvalue(ipt, value) == 0)
        {
            cout << endl;
            cout << "Invalid Input!!" << endl;
            cout << endl;
            cout << "take your move, give input: ";
            cin >> ipt;
            cout << endl;
        }
        value = 1 - value;
        game.display();

        if (choice == 1)
        {
            win = -1;
            win = game.showresult();
            if (game.allfilled() == 1 || win != -1)
            {
                int play_again;
                if (win == -1)
                    cout << "Match Draw!!" << endl;
                cout << "Enter 1 to Play again, 0 to end here: ";
                cin >> play_again;
                if (play_again == 1)
                {
                    cout << "Enter 1 to play with computer, 2 to play with friend: ";
                    cin >> choice;
                    game.initialize();
                    value = 0;
                    continue;
                }
                else
                    break;
            }

            cout << "Computer Move:" << endl;

            game.computer_move(value);
            value = 1 - value;
            game.display();
        }
    }
}