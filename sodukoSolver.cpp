#include <iostream>
#include<string>
using namespace std;

bool isSafe(string board[9][9] , int row , int col , int n)
{
    //column
       for(int i=0; i<9; i++) {
           if(board[i][col] == (string)(n+"0")) {
               return false;
           }
       }
      
       //row
       for(int j=0; j<9; j++) {
           if(board[row][j] == (string)(n+"0")) {
               return false;
           }
       }
      
       //grid
       int sr = 3 * (row/3);
       int sc = 3 * (col/3);
      
       for(int i=sr; i<sr+3; i++) {
           for(int j=sc; j<sc+3; j++) {
               if(board[i][j] == (string)(n+"0")) {
                   return false;
               }
           }
       }
    return true;

}


bool solver(string board[9][9], int row , int col)
{
    if(row==9)
    {
        for(int a=0 ; a<9;a++)
        {
            for(int b =0;b<9;b++)
            {
                cout<<board[a][b]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    int nrow=0;
    int ncol=0;
    if(col==8)
    {
        nrow +=1;
        ncol=0;
    }
    else
    {
        ncol+=1;
        nrow=nrow;
    }
    if(board[row][col]!=".")
    {
        if(solver(board,nrow,ncol))
        {
            return true;
        }

    }
    else
    {
        for(int i =1;i<=9;i++)
        {
            if(isSafe(board,row,col,i))
            {
                board[row][col]=(string)(i+"0");
                if(solver(board,nrow,ncol))
                {
                    return true;
                }
                else{
                    board[row][col]=".";
                }
            }

        }

    }
    return false;
}


int main()
{
    
    string board [9][9]= {{"5","3",".",".","7",".",".",".","."},
                          {"6",".",".","1","9","5",".",".","."},
                          {".","9","8",".",".",".",".","6","."},
                          {"8",".",".",".","6",".",".",".","3"},
                          {"4",".",".","8",".","3",".",".","1"},
                          {"7",".",".",".","2",".",".",".","6"},
                          {".","6",".",".",".",".","2","8","."},
                          {".",".",".","4","1","9",".",".","5"},
                          {".",".",".",".","8",".",".","7","9"}};
    solver(board,0,0);
    for(int a=0 ; a<9;a++)
        {
            for(int b=0;b<9;b++)
            {
                cout<<board[a][b]<<" ";
            }
            cout<<endl;
        }
}

