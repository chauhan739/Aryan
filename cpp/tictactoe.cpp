#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void board();

int checkWin();

int main(){
    
    int player = 1;
    int choice, i;
    char mark;
    
    do{
        //Print Board
        board();
        
        //Selection of player
        if(player % 2 == 0)
            player = 2;
        else
            player = 1;
        
        cout<<"Player "<<player<<" choice: ";
        cin>>choice;
        cout<<endl;
        
        //Selection of Mark of player
        if(player == 1)
            mark = 'X';
        else
            mark = 'O';
        
        
        //Marking on game board
        if(choice == 1 && square[1] == '1'){
            square[1] = mark;
        }
        else if(choice == 2 && square[2] == '2'){
            square[2] = mark;
        }
        else if(choice == 3 && square[3] == '3'){
            square[3] = mark;
        }
        else if(choice == 4 && square[4] == '4'){
            square[4] = mark;
        }
        else if(choice == 5 && square[5] == '5'){
            square[5] = mark;
        }
        else if(choice == 6 && square[6] == '6'){
            square[6] = mark;
        }
        else if(choice == 7 && square[7] == '7'){
            square[7] = mark;
        }
        else if(choice == 8 && square[8] == '8'){
            square[8] = mark;
        }
        else if(choice == 9 && square[9] == '9'){
            square[9] = mark;
        }
        else{
            cout<<"Invalid Move\n"<<"Press any key to continue";
            
            player--;
            system("pause");
            cin.ignore();
        }
        i = checkWin();
        player++;
        
    }while(i != -1);
    
    if(i ==1)
        cout<<"Player "<<--player<<" won";
    else
        cout<<"Game Draw";
}

void board(){
    
    //Clear the board
    system("clear");
    
    cout<<"Tic-Tac-Toe game\n\n";
    cout<<"Player 1(X) - Player 2(O)\n\n";
    
    //Structure of board
    cout<<"     |     |     \n";
    cout<<"  "<<square[1]<<"  |"<<"  "<<square[2]<<"  |"<<"  "<<square[3]<<endl;
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<square[4]<<"  |"<<"  "<<square[5]<<"  |"<<"  "<<square[6]<<endl;
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<square[7]<<"  |"<<"  "<<square[8]<<"  |"<<"  "<<square[9]<<endl;
    cout<<"     |     |     \n";
}

int checkWin(void){
  
    //Possibility of winning game horizontally
    if(square[1] == square[2] && square[2] == square[3])
        return 1;
    else if(square[4] == square[5] && square[5] == square[6])
        return 1;
    else if(square[7] == square[8] && square[8] == square[9])
        return 1;
    
    //Possibility of winning game vertically
    else if(square[1] == square[4] && square[4] == square[7])
        return 1;
    else if(square[2] == square[5] && square[5] == square[8])
        return 1;
    else if(square[3] == square[6] && square[6] == square[9])
        return 1;
    
    //Possibility of winning game diagonally
    else if(square[1] == square[5] && square[5] == square[9])
        return 1;
    else if(square[3] == square[5] && square[5] == square[7])
        return 1;
    
    //Possibility of continuing the game
    else if(square[1] != 1 && square[2] != 2 && square[3] != 3 && square[4] != 4 && square[5] != 5 && square[6] != 6 && square[7] != 7 && square[8] != 8 && square[9] != 9)
        return 0;
    else 
        return -1;
    
}
