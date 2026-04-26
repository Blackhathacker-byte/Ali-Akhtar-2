#include <iostream>
#include <conio.h> // For _getch() to handle movement
#include <windows.h>

using namespace std;

// Board Dimensions
const int rows = 20;
const int cols = 40;
char board[rows][cols];

// Player Position
int pR = 17; 
int pC = 20;

// Function Prototypes
void initializeBoard();
void printBoard();
void movePlayerLeft();
void movePlayerRight();
void fire();
void moveFire();

void initializeBoard() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
                board[i][j] = '#'; // Walls
            else
                board[i][j] = ' '; // Empty space
        }
    }
    board[pR][pC] = 'P'; // Initial Player Position
}

void printBoard() {
    system("cls"); // Clear screen for every frame
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
}

void movePlayerLeft() {
    if (board[pR][pC - 1] == ' ') {
        board[pR][pC] = ' '; // Clear old position
        pC--;
        board[pR][pC] = 'P'; // Update new position
    }
}

void movePlayerRight() {
    if (board[pR][pC + 1] == ' ') {
        board[pR][pC] = ' ';
        pC++;
        board[pR][pC] = 'P';
    }
}

void fire() {
    // Place a bullet '.' right above the player
    if (board[pR - 1][pC] == ' ') {
        board[pR - 1][pC] = '.';
    }
}

void moveFire() {
    // Loop through the board to find bullets and move them up
    for (int i = 1; i < rows - 1; i++) {
        for (int j = 1; j < cols - 1; j++) {
            if (board[i][j] == '.') {
                board[i][j] = ' '; // Remove bullet from current spot
                if (i - 1 > 0) {
                    board[i - 1][j] = '.'; // Move it up
                }
            }
        }
    }
}

int main() {
    initializeBoard();
    
    while (true) {
        printBoard();
        
        // Check for key press without pausing the game
        if (_kbhit()) {
            char key = _getch();
            if (key == 'a' || key == 'A') movePlayerLeft();
            if (key == 'd' || key == 'D') movePlayerRight();
            if (key == ' ') fire(); // Spacebar to fire
        }

        moveFire(); // Bullets move every frame
        Sleep(50);  // Adjust game speed
    }

    return 0;
}