#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const int EMPTY = 0;
const int HUMAN = 1;
const int AI = 2;

char humanSymbol = ' ';
char aiSymbol = ' ';

// Check if the board is full
bool isBoardFull(const vector<vector<int>>& board) {
    for (const auto& row : board) {
        for (int cell : row) {
            if (cell == EMPTY)
                return false;
        }
    }
    return true;
}

// Check if a player has won
int evaluate(const vector<vector<int>>& board) {
    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            if (board[i][0] == HUMAN)
                return -1;
            else if (board[i][0] == AI)
                return 1;
        }
    }
    // Check columns
    for (int i = 0; i < 3; ++i) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            if (board[0][i] == HUMAN)
                return -1;
            else if (board[0][i] == AI)
                return 1;
        }
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        if (board[0][0] == HUMAN)
            return -1;
        else
        if (board[0][0] == AI)
            return 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        if (board[0][2] == HUMAN)
            return -1;
        else if (board[0][2] == AI)
            return 1;
    }

    return 0; // No winner
}

// Minimax algorithm with alpha-beta pruning
int minimax(vector<vector<int>>& board, int depth, bool maximizingPlayer, int alpha, int beta) {
    int score = evaluate(board);

    if (score == 1 || score == -1)
        return score;

    if (isBoardFull(board))
        return 0;

    if (maximizingPlayer) {
        int bestScore = numeric_limits<int>::min();
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == EMPTY) {
                    board[i][j] = AI;
                    int currentScore = minimax(board, depth + 1, false, alpha, beta);
                    board[i][j] = EMPTY;
                    bestScore = max(bestScore, currentScore);
                    alpha = max(alpha, bestScore);
                    if (beta <= alpha)
                        break; // Beta cut-off
                }
            }
        }
        return bestScore;
    } else {
        int bestScore = numeric_limits<int>::max();
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == EMPTY) {
                    board[i][j] = HUMAN;
                    int currentScore = minimax(board, depth + 1, true, alpha, beta);
                    board[i][j] = EMPTY;
                    bestScore = min(bestScore, currentScore);
                    beta = min(beta, bestScore);
                    if (beta <= alpha)
                        break; // Alpha cut-off
                }
            }
        }
        return bestScore;
    }
}

// Find the best move for the AI using minimax
pair<int, int> findBestMove(vector<vector<int>>& board) {
    int bestScore = numeric_limits<int>::min();
    pair<int, int> bestMove = make_pair(-1, -1);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == EMPTY) {
                board[i][j] = AI;
                int moveScore = minimax(board, 0, false, numeric_limits<int>::min(), numeric_limits<int>::max());
                board[i][j] = EMPTY;
                if (moveScore > bestScore) {
                    bestScore = moveScore;
                    bestMove = make_pair(i, j);
                }
            }
        }
    }
    return bestMove;
}

// Initialize symbols based on player choice
void initializeSymbols() {
    cout << "Choose X or O: ";
    cin >> humanSymbol;
    humanSymbol = toupper(humanSymbol); // Convert to uppercase

    if (humanSymbol == 'X')
        aiSymbol = 'O';
    else if (humanSymbol == 'O')
        aiSymbol = 'X';
    else {
        cout << "Invalid choice. Defaulting to X." << endl;
        humanSymbol = 'X';
        aiSymbol = 'O';
    }
}

// Print the board
void printBoard(const vector<vector<int>>& board) {
    cout << "  1 2 3" << endl;
    cout << " -------" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i+1 << "|";
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == EMPTY)
                cout << "  ";
            else if (board[i][j] == HUMAN)
                cout << humanSymbol << " ";
            else if (board[i][j] == AI)
                cout << aiSymbol << " ";
        }
        cout << "|" << endl;
    }
    cout << " -------" << endl;
}

// Main game loop for player-vs-AI mode
void playAgainstAI() {
    vector<vector<int>> board(3, vector<int>(3, EMPTY));

    initializeSymbols();

    while (true) {
        printBoard(board);
        // Player's turn
        cout << "Your turn. Enter row and column (1-3): ";
        int row, col;
        cin >> row >> col;
        row--; // Adjust to 0-based index
        col--; // Adjust to 0-based index

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == EMPTY) {
            board[row][col] = HUMAN;
            if (evaluate(board) == -1) {
                printBoard(board);
                cout << "You win!" << endl;
                break;
            }
            if (isBoardFull(board)) {
                printBoard(board);
                cout << "It's a draw!" << endl;
                break;
            }

            // AI's turn
            pair<int, int> aiMove = findBestMove(board);
            board[aiMove.first][aiMove.second] = AI;
            if (evaluate(board) == 1) {
                printBoard(board);
                cout << "AI wins!" << endl;
                break;
            }
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }
}

// Main game loop for player-vs-player mode
void playAgainstPlayer() {
    vector<vector<int>> board(3, vector<int>(3, EMPTY));

    initializeSymbols();

    bool player1Turn = true;

    while (true) {
        printBoard(board);
        // Player's turn
        cout << (player1Turn ? "Player 1's turn. " : "Player 2's turn. ");
        cout << "Enter row and column (1-3): ";
        int row, col;
        cin >> row >> col;
        row--; // Adjust to 0-based index
        col--; // Adjust to 0-based index

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == EMPTY) {
            board[row][col] = (player1Turn ? HUMAN : AI);
            if (evaluate(board) == -1) {
                printBoard(board);
                cout << (player1Turn ? "Player 1 wins!" : "Player 2 wins!") << endl;
                break;
            }
            if (isBoardFull(board)) {
                printBoard(board);
                cout << "It's a draw!" << endl;
                break;
            }
            player1Turn = !player1Turn; // Switch turns
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }
}

// Main menu
int main() {
    int choice;
    cout << "Select mode: 1 for player-vs-player, 2 for player-vs-AI: ";
    cin >> choice;

    if (choice == 1)
        playAgainstPlayer();
    else if (choice == 2)
        playAgainstAI();
    else
        cout << "Invalid choice." << endl;

    return 0;
}