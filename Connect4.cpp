#include <iostream>
#include <stdlib.h>

using namespace std;
 int** p_p_board;
 int y = 0;
 bool player_1 = true;
 bool moves = false;
 bool game_won = false;
 string name, player1, player2;
 void indicate_player()
 {
     if (player_1 == true)
    {
        name = player1;
    }
    else if (player_1 == false)
    {
        name = player2;
    }
 }

int create_board(int h, int w)
{
    p_p_board = new int* [h];
   for (int i = 0; i < h; i++)
   {
       p_p_board [i] = new int[w];
   }
   for (int i = 0; i < h; i++)
   {
       for (int j = 0; j < w; j++)
       {
           p_p_board [i][j] = 0;
       }
   }
}
void show_board(int h, int w)
{
    for (int i = 0; i < h; i++)
    {
        cout<< "\n";
        for (int j = 0; j < w; j++)
        {
            cout<< p_p_board [i][j]<< " ";
        }
    }
}
void player_move(int x, int h)
{
    for (int i = h; i--; i < 0)
    {
        if (moves == false)
        {
           if (p_p_board[i][x] == 0)
        {
            moves = true;
            y = i;
            if (player_1 == true)
            {
              p_p_board[i][x] = 1;
              player_1 = false;
            }
            else if (player_1 == false)
            {
                p_p_board[i][x] = 2;
                player_1 = true;
            }
        }
        }
    }
    moves = false;
}

void scan_move(int y, int x)
{

}
int main()
{
    cout << "What's your name, player 1? ";
    cin>>player1;
    cout << "\nWhat's your name, player 2? ";
    cin>>player2;
    system("CLS");

    int width, height, x;
    cout << "Please indicate the width: ";
    cin >>width;
    cout << "\nPlease indicate the height:";
    cin >>height;
    system("CLS");

   create_board(height, width);
   cout<< "THIS IS THE BOARD:\n";

   while (game_won == false)
   {
        indicate_player();
        show_board(height, width);
        cout<< "\n\n"<<name<<", in what column do you wish to put the coin?:";
        cin>>x;
        player_move(x, height);
        cout<<"\n\n\nthis is x:"<<x<<"\nThis is y:"<<y;
        scan_move(y, x);
        system("CLS");
   }
delete p_p_board;
}