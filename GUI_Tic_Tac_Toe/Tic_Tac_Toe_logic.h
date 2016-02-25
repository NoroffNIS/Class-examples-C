#ifndef TIC_TAC_TOE_LOGIC_H_INCLUDED
#define TIC_TAC_TOE_LOGIC_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define BROW 3
#define BCOL 3

void init_board(char board[][BCOL]);
int check_winner();
int winner(char board[][BCOL]);
int valid_Move(int row, int col, char board[][BCOL]);
void start_game();
char player_mark[2] = {'X', 'O'};
int player_turn;
char board[BROW][BCOL];

void start_game()
{
    init_board(board);
    player_turn = 0;
}

int input_number(int player_choice){
    int row, col;
    row = --player_choice/3;
    col = player_choice%3;

   int res = valid_Move(row, col, board);
   if(res == 0){
        int win = winner(board);
        if(win != -3){
           return win;
        }else{
        return -2;
        }
}
    else{
       return -1;
    }
}

int winner(char board[][BCOL])
{
    int r, c, winner_n;
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] ||
            board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return winner_n = (board[1][1] == player_mark[0]) ? 0 : 1;
    }
    else
    {
        for(r=0; r<BROW; r++)
        {
            for(c=0; c<BCOL; c++)
            {
                if(board[r][0] == board[r][1] && board[r][0] == board[r][2])
                    return winner_n = (board[r][0] == player_mark[0]) ? 0 : 1;
                else if(board[0][c] == board[1][c] && board[0][c] == board[2][c])
                    return winner_n = (board[0][c] == player_mark[0]) ? 0 : 1;
                else
                    return winner_n = -3;
            }
        }
    }
}
int valid_Move(int row, int col, char board[][BCOL])
{
    if(board[row][col] > 48 && board[row][col] < 58)
    {
        board[row][col] = (player_turn == 0) ?  player_mark[0]:player_mark[1];
        player_turn = (player_turn == 0) ? 1 : 0;
        return 0;
    }
    else
    {
        return 1;
    }
}

void init_board(char board[][BCOL])
{
    int r,c,i=49;
    for(r=0; r<=BROW; r++)
    {
        for(c=0; c<BCOL; c++)
        {
            board[r][c] = i;
            i++;
        }
    }
}


#endif // TIC_TAC_TOE_LOGIC_H_INCLUDED
