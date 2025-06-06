#include <iostream>
using namespace std;

char board[3][3];
char currentPlayer;

void resetBoard() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            board[i][j] = '1' + i * 3 + j;
}

void printBoard() {
    cout << "\n";
    for (int i = 0; i < 3; ++i) {
        cout << " ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        if (i < 2) cout << "\n-----------\n";
    }
    cout << "\n";
}

bool makeMove(int position) {
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;
    if (position < 1 || position > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
        return false;
    }
    board[row][col] = currentPlayer;
    return true;
}

bool checkWin() {
    for (int i = 0; i < 3; ++i) {
        // rows and columns
        if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
            (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {
            return true;
        }
    }
    // diagonals
    if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
        (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) {
        return true;
    }
    return false;
}

bool checkDraw() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    char playAgain;
    do {
        resetBoard();
        currentPlayer = 'X';
        bool gameEnded = false;

        while (!gameEnded) {
            printBoard();
            int move;
            cout << "\nPlayer " << currentPlayer << ", enter your move (1-9): ";
            cin >> move;

            if (!makeMove(move)) {
                cout << "Invalid move. Try again.\n";
                continue;
            }

            if (checkWin()) {
                printBoard();
                cout << "\nPlayer " << currentPlayer << " wins!\n";
                gameEnded = true;
            } else if (checkDraw()) {
                printBoard();
                cout << "\nIt's a draw!\n";
                gameEnded = true;
            } else {
                switchPlayer();
            }
        }

        cout << "Play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!\n";
    return 0;
}
