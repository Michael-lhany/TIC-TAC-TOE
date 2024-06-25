#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QtMultimedia/qsoundeffect.h"
#include "TTTCommonTypes.h"
#include "ui_TicTacToeGame.h"
#include <QDialog>
#include <vector>
#include <memory>
#include <QLabel>
#include <QSoundEffect>
using std::vector;


/**
 * @brief The TicTacToeGame class is responsible for the GUI of a game,
 * it is responsible for building the cells of a board, which can be of
 * variable size, and a navigation button to take the user back to
 * the title screen, and a button for resetting the game and playing a
 * new one.
 */

class TicTacToeGame final : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief TicTacToeGame constructs a view of a game.
     * @param parent is a QWidget type parent that owns this instance of the controller.
     */
    explicit TicTacToeGame(QWidget *parent = nullptr);
    /**
     * @brief updateCell sets the Text of the cell to the current player's mark.
     * @param cell: a refernece to the clicked cell.
     * @param currentPlayer: the current player's mark (X or O).
     */
    void updateCell(Cell &cell, BoardMarks currentPlayer);
    /**
     * @brief declareGameState outputs the board's state to a QMessageBox.
     * @param boardState the current board state.
     */
    void declareGameState(BoardState boardState);
    /**
     * @brief buildCellButtons builds the GUI cells as push buttons.
     * @param boardSize: number of rows or columns of a board.
     * @return a collection of cells containing push button references
     * and their corresponding row and column.
     */
    vector<Cell> buildCellButtons(size_t boardSize);

    //reset clears out the text of all push button cells.

    void reset(vector<Cell> &cells);
    void updatePlayerNames();
    QString getPlayerStyleSheet(BoardMarks currentPlayer);

private:
    int counterX = 0;  // Counter for Player 1 wins
    int counterO = 0;  // Counter for Player 2 wins or AI wins
    QSoundEffect clickSound;  // Add a member for the sound effect
    QSoundEffect clickSound2;  // Add a member for the sound effect
    QSoundEffect clickSound3;  // Add a member for the sound effect
    QSoundEffect clickSound4;  // Add a member for the sound effect
    void handleResetButton();
    void handleBackButton();
    /**
     * @brief ui is a reference to the ui object of the tic tac toe game.
     */
    std::unique_ptr<Ui::TicTacToeGame> ui;
    /**
     * @brief setConnections handles setting the connection to emit if cells have cliked,
     * and the navigational back button.
     */
    void setConnections();
    /**
     * @brief getPlayerText converts a board mark to a QString.
     * @param currentPlayer: the current player's mark (X or O).
     * @return a QString of the player's mark.
     */
    QString getPlayerText(BoardMarks currentPlayer);
    /**
     * @brief getPlayerStyleSheet gets a stylesheet associated with each player.
     * @param currentPlayer: the current player's mark (X or O).
     * @return a QString stylesheet of the player given in the input.
     */

    /**
     * @brief getBoardFinalStateText converts a state to a decleration text,
     * that will be used when declaring the final state of a game.
     * @param boardState the current board state.
     * @return QString decleration text,
     * that will be used when declaring the final state of a game.
     */
    QString getBoardFinalStateText(BoardState boardState);

signals:
    /**
     * @brief newGame is emitted when the New Game button is clicked and
     * some reset logic must be executed.
     */
    void newGame();
};

#endif // MAINWINDOW_H
