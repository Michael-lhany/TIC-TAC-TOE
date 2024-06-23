#pragma once



#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "Board.h"
#include "MiniMaxAgent.h"

using namespace testing;
TEST(MiniMaxAgentTest, PlayerStartAIWin)
{
    Board board(3);
    MiniMaxAgent ai(9, BoardMarks::O, BoardMarks::X);

    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::O);

    board.setPlayerInput(1, 0, BoardMarks::Empty);
    board.setPlayerInput(1, 1, BoardMarks::X);
    board.setPlayerInput(1, 2, BoardMarks::Empty);

    board.setPlayerInput(2, 0, BoardMarks::O);
    board.setPlayerInput(2, 1, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::Empty);


    ai.play(board);
    EXPECT_EQ(BoardState::OWins, board.evaluateBoard());

    board.reset();

    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::O);

    board.setPlayerInput(1, 0, BoardMarks::Empty);
    board.setPlayerInput(1, 1, BoardMarks::O);
    board.setPlayerInput(1, 2, BoardMarks::X);

    board.setPlayerInput(2, 0, BoardMarks::Empty);
    board.setPlayerInput(2, 1, BoardMarks::X);
    board.setPlayerInput(2, 2, BoardMarks::Empty);

    ai.play(board);
    EXPECT_EQ(BoardState::OWins, board.evaluateBoard());
    board.reset();

}
TEST(MiniMaxAgentTest, AIStartAIWin)
{
    Board board(3);
    MiniMaxAgent ai(9, BoardMarks::X, BoardMarks::O);

    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::O);

    board.setPlayerInput(1, 0, BoardMarks::Empty);
    board.setPlayerInput(1, 1, BoardMarks::X);
    board.setPlayerInput(1, 2, BoardMarks::Empty);

    board.setPlayerInput(2, 0, BoardMarks::O);
    board.setPlayerInput(2, 1, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::Empty);

    ai.play(board);
    EXPECT_EQ(BoardState::XWins, board.evaluateBoard());

    board.reset();

    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::O);

    board.setPlayerInput(1, 0, BoardMarks::Empty);
    board.setPlayerInput(1, 1, BoardMarks::O);
    board.setPlayerInput(1, 2, BoardMarks::Empty);

    board.setPlayerInput(2, 0, BoardMarks::X);
    board.setPlayerInput(2, 1, BoardMarks::X);
    board.setPlayerInput(2, 2, BoardMarks::Empty);

    ai.play(board);
    EXPECT_EQ(BoardState::XWins, board.evaluateBoard());


    board.reset();

    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::Empty);

    board.setPlayerInput(1, 0, BoardMarks::Empty);
    board.setPlayerInput(1, 1, BoardMarks::O);
    board.setPlayerInput(1, 2, BoardMarks::O);

    board.setPlayerInput(2, 0, BoardMarks::X);
    board.setPlayerInput(2, 1, BoardMarks::X);
    board.setPlayerInput(2, 2, BoardMarks::O);

    ai.play(board);
    EXPECT_EQ(BoardState::XWins, board.evaluateBoard());
}
TEST(MiniMaxAgentTest, AIStartAIBlock)
{
    Board board(3);
    MiniMaxAgent ai(9, BoardMarks::X, BoardMarks::O);

    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::O);

    board.setPlayerInput(1, 0, BoardMarks::X);
    board.setPlayerInput(1, 1, BoardMarks::Empty);
    board.setPlayerInput(1, 2, BoardMarks::Empty);

    board.setPlayerInput(2, 0, BoardMarks::O);
    board.setPlayerInput(2, 1, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::Empty);

    /* X X O
     * X - -
     * O O - */
    ai.play(board);
    EXPECT_EQ(BoardMarks::X, board.at(1, 1));

    board.reset();

    board.setPlayerInput(0, 0, BoardMarks::Empty);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::O);

    board.setPlayerInput(1, 0, BoardMarks::Empty);
    board.setPlayerInput(1, 1, BoardMarks::Empty);
    board.setPlayerInput(1, 2, BoardMarks::Empty);

    board.setPlayerInput(2, 0, BoardMarks::X);
    board.setPlayerInput(2, 1, BoardMarks::Empty);
    board.setPlayerInput(2, 2, BoardMarks::O);

    /* - X O
     * - - -
     * X - O */
    ai.play(board);
    EXPECT_EQ(BoardMarks::X, board.at(1, 2));


    board.reset();

    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::Empty);
    board.setPlayerInput(0, 2, BoardMarks::Empty);

    board.setPlayerInput(1, 0, BoardMarks::Empty);
    board.setPlayerInput(1, 1, BoardMarks::O);
    board.setPlayerInput(1, 2, BoardMarks::O);

    board.setPlayerInput(2, 0, BoardMarks::Empty);
    board.setPlayerInput(2, 1, BoardMarks::X);
    board.setPlayerInput(2, 2, BoardMarks::Empty);

    /* X - -
     * - O O
     * - X - */
    ai.play(board);
    EXPECT_EQ(BoardMarks::X, board.at(1, 0));
}





