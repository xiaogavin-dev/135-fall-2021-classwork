// sumaiya hossain 
// tong yi 
//
//
//
//
//
//
//
//
//
//


#include "Board.hpp"
#include <iostream>
#include <iomanip>
using namespace std;


Board::Board():Board(3, 3) {}

Board::Board(int m):Board(m, m) {}

Board::Board(int m, int n) { 
    if(m >= 1 && n >= 1) {
        numRows = m;
        numCols = n;
    } else { 
        numRows = 3; 
        numCols = 3;
    }

    panel = new int*[numRows]; 
    for(int i = 0; i < numRows; i++) { 
        panel[i] = new int[numCols];
    }

    setTarget(32);
    max = 0;
}

Board::~Board() {
    for(int i = 0; i < numRows; i++) {
        delete[] panel[i];
        panel[i] = nullptr; 
    }

    delete[] panel;
    panel = nullptr; 
}

void Board::allocateMemory() {
    panel = new int*[numRows]; 
    for(int i = 0; i < numRows; i++) { 
        panel[i] = new int[numCols];
    }
}   

void Board::setTarget(int target) { 
    this->target = target; 
}


void printSeparateLine(int numCols) {
    cout << "+";
    for (int i = 0; i < numCols; i++) {
        cout << "----+";
    }
    cout << endl;
}
void Board::print()const {
    for (int i = 0; i < numRows; i++) {
        printSeparateLine(numCols);
        cout << "|";
        for (int j = 0; j < numCols; j++) {
            if (panel[i][j] > 0) {
                cout << setw(4) << panel[i][j] << "|";
            }
            else
                cout << setw(5) << "|";
        }
        cout << endl;
    }
    printSeparateLine(numCols);
}

bool Board::noAdjacentSameValue() const { 
    for(int i = 1; i < numRows - 1; i++) {
        for(int j = 1; j < numCols - 1; j++) {
            if (panel[i][j] != 0) {
                if (panel[i][j] == panel[i - 1][j] || panel[i][j] == panel[i + 1][j] || panel[i][j] == panel[i][j - 1] || panel[i][j] == panel[i][j +1]) {
                    return true;
                }
            }
        }
    }
    return false;
}

void Board::selectRandomCell(int& row, int& col) {
    int countZero = 0;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (panel[i][j] == 0)  { 
                countZero++;
            }
        }
    }

    if (countZero == 0) {
        if (noAdjacentSameValue()) {
            cout << "Game over. Try again." << endl;
            exit(0);
        }
    }

    int *emptyLocations = new int [countZero];
    int index = 0;
    for(int i = 0; i < numRows; i++) {
        for(int j = 0; j < numCols; j++) {
            if (panel[i][j] == 0) {
                emptyLocations [index] = numCols * i + j;
                index++;
            }
                
        }
    }

    int random = rand() % countZero;
    int element = emptyLocations[random];
    int tempRow = element/ numCols;
    int tempCol = element % numCols;
    
    panel [tempRow][tempCol] = 1;
    delete[] emptyLocations;
    emptyLocations = nullptr;
    
    print();
    
    if(countZero == 0 and noAdjacentSameValue() == true) {
        cout << "Game over. Try again." << endl;
        exit;
    }
}

                    
                
