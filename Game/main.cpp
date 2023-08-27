#include <iostream>
#include <algorithm>
#include <string.h>
#include <map>

struct GameBoard
{
    std::string position[3][3];
};


int render() {

}

bool legalMove(std::string input) {
    
}

bool win() {

}

int getNextMove() {

}

std::string Input() {
    bool x = true;
    std::string input;
    while (x == true) {
        std::cin >> input;
        std::remove_if(input.begin(), input.end(), isspace);
        std::cout << input << std::endl;
        if (input == "TL" || input == "TM" || input == "TR" || input == "ML" || input == "M" || input == "MR" || input == "BL" || input == "BM" || input == "BR")
        {
            return input;
        }
        else
            std::cout << "not a valid input" << std::endl;
            continue;
    return 0;
            
    }
        

        
}

int main() {
    std::cout << "Welcome to TickTackToe!\nPlayer 1 starts\nChoose one of the Squares\nTL | TM | TR\n-----------\nML |  M | MR\n-----------\nBL | BM | BR" << std::endl;
    std::string input = Input();
    legalMove(input);
    return 0;
}
