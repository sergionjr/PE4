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



void CreateBoard (Board &b){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            b.square[i][j] = SquareClass::Empty;
            
        }
    }
}



void DisplayBoard(const Board &b){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (b.square[i][j] == SquareClass::Empty){std::cout<<"~ ";}
            if (b.square[i][j] == SquareClass::X){std::cout<<"X ";}
            if (b.square[i][j] == SquareClass::O){std::cout<<"O ";}
        }
        std::cout << std::endl;
    }
}

void GetPlayerChoice(Board &b){
    b.row = -1;
    b.col = -1;
    std::cout << "Select a row and column to place your marker." << std::endl;
    std::cout << "Row: ";
    std::cin >> b.row;
    b.row--;
    while (b.row < 0 || b.row > 2){
        std::cout << "This is not a valid square. Please enter a number from 1 to 3 that does not already have an X or O inside of it." << std::endl;
        std::cin >> b.row;
        b.row--;
    }
    std::cout << "Column: ";
    std::cin >> b.col;
    b.col--;
    while (b.col < 0 || b.col > 2){
        std::cout << "This is not a valid square. Please enter a number from 1 to 3 that does not already have an X or O inside of it." << std::endl;
        std::cin >> b.col;
        b.col--;
    }
}

void PlaceMarker(Board &b, int player_num){
    if (player_num == 1){b.square[b.row][b.col] = SquareClass::O;}
    else if (player_num == 2){b.square[b.row][b.col] = SquareClass::X;}
}

int main(){
    int player = 0;
    Board *b = new Board();
    CreateBoard(*b);
    for (int i = 0; i < 9; i++){
        player++;
        if (player == 3){player = 1;}
        DisplayBoard(*b);
        std::cout << "Player " << player << " Turn" << std::endl;
        GetPlayerChoice(*b);
        std::cout << std::endl;
        PlaceMarker(*b, player);
    }
    DisplayBoard(*b);
    std::cout << "Game Over." << std::endl;
    
    
    
}