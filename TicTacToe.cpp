/*
*Person 1 & 2: Sergio Nogueira
*PE4 - TicTacToe
*/ 

#include <iostream>

enum class SquareClass {Empty, X, O};

struct Board{
    SquareClass square[3][3];
    int row;
    int col;        
};

void CreateBoard (Board &board){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            board.square[i][j] = Empty;
            
        }
    }
}


void DisplayBoard(const Board &b){
    std::cout << "   1  2  3" << std::endl; 
    for (int i = 0; i < 3; i++){
        std::cout << i+1 << " ";
        for (int j = 0; j < 3; j++){
            if board
            std::cout << b.square[i][j] + " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    Board *b = new Board();
    CreateBoard(*b);
    DisplayBoard(*b);
    
    
}