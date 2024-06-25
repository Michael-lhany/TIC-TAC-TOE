#pragma once

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "Board.h"

TEST(BoardTest, boardAccessValid){
    Board board(3);

    board.setPlayerInput(1, 1, BoardMarks::X);
    board.setPlayerInput(1, 2, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::Empty);

    EXPECT_EQ(BoardMarks::X, board.at(1, 1));
    EXPECT_EQ(BoardMarks::O, board.at(1, 2));
    EXPECT_EQ(BoardMarks::Empty, board.at(2, 2));
}
TEST(BoardTest,resetBoard){
    //=======================Reset test==============================
    Board board(3);
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::X);

    board.setPlayerInput(1, 0, BoardMarks::O);
    board.setPlayerInput(1, 1, BoardMarks::O);
    board.setPlayerInput(1, 2, BoardMarks::X);

    board.setPlayerInput(2, 0, BoardMarks::Empty);
    board.setPlayerInput(2, 1, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::Empty);
    board.reset();
    EXPECT_EQ(board.at(0, 0), BoardMarks::Empty);
    EXPECT_EQ(board.at(0, 1), BoardMarks::Empty);
    EXPECT_EQ(board.at(0, 2), BoardMarks::Empty);

    EXPECT_EQ(board.at(1, 0), BoardMarks::Empty);
    EXPECT_EQ(board.at(1, 1), BoardMarks::Empty);
    EXPECT_EQ(board.at(1, 2), BoardMarks::Empty);

    EXPECT_EQ(board.at(2, 0), BoardMarks::Empty);
    EXPECT_EQ(board.at(2, 1), BoardMarks::Empty);
    EXPECT_EQ(board.at(2, 2), BoardMarks::Empty);
}
TEST(BoardTest,VerticalWins){
    Board board(3);
    //==========First column test===========
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(1, 0, BoardMarks::X);
    board.setPlayerInput(2, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::O);
    board.setPlayerInput(1, 1, BoardMarks::O);
    EXPECT_EQ(BoardState::XWins, board.evaluateBoard());
    board.reset();
    board.setPlayerInput(0, 0, BoardMarks::O);
    board.setPlayerInput(1, 0, BoardMarks::O);
    board.setPlayerInput(2, 0, BoardMarks::O);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(1, 1, BoardMarks::X);
    board.setPlayerInput(1, 2, BoardMarks::X);
    EXPECT_EQ(BoardState::OWins, board.evaluateBoard());
    //======================================================
    //==========Second column test===========
    board.reset();
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(1, 1, BoardMarks::X);
    board.setPlayerInput(2, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::O);
    EXPECT_EQ(BoardState::XWins, board.evaluateBoard());
    board.reset();
    board.setPlayerInput(0, 1, BoardMarks::O);
    board.setPlayerInput(1, 1, BoardMarks::O);
    board.setPlayerInput(2, 1, BoardMarks::O);
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(2, 2, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::X);
    EXPECT_EQ(BoardState::OWins, board.evaluateBoard());
    //======================================================
    //==========Third column test===========
    board.reset();
    board.setPlayerInput(0, 2, BoardMarks::X);
    board.setPlayerInput(1, 2, BoardMarks::X);
    board.setPlayerInput(2, 2, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::O);
    board.setPlayerInput(1, 1, BoardMarks::O);
    EXPECT_EQ(BoardState::XWins, board.evaluateBoard());
    board.reset();
    board.setPlayerInput(0, 2, BoardMarks::O);
    board.setPlayerInput(1, 2, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::O);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(1, 1, BoardMarks::X);
    board.setPlayerInput(0, 0, BoardMarks::X);
    EXPECT_EQ(BoardState::OWins, board.evaluateBoard());
    //======================================================
}
TEST(BoardTest,HorizontalWins){
    Board board(3);
    //==========First HorizontalWins test===========
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::X);
    board.setPlayerInput(2, 1, BoardMarks::O);
    board.setPlayerInput(1, 1, BoardMarks::O);
    EXPECT_EQ(BoardState::XWins, board.evaluateBoard());
    board.reset();
    board.setPlayerInput(0, 0, BoardMarks::O);
    board.setPlayerInput(0, 1, BoardMarks::O);
    board.setPlayerInput(0, 2, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::X);
    board.setPlayerInput(1, 1, BoardMarks::X);
    board.setPlayerInput(1, 2, BoardMarks::X);
    EXPECT_EQ(BoardState::OWins, board.evaluateBoard());
    board.reset();
    //======================================================
    //==========Second HorizontalWins test===========
    board.setPlayerInput(1, 0, BoardMarks::X);
    board.setPlayerInput(1, 1, BoardMarks::X);
    board.setPlayerInput(1, 2, BoardMarks::X);
    board.setPlayerInput(0, 0, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::O);
    EXPECT_EQ(BoardState::XWins, board.evaluateBoard());
    board.reset();
    board.setPlayerInput(1, 0, BoardMarks::O);
    board.setPlayerInput(1, 1, BoardMarks::O);
    board.setPlayerInput(1, 2, BoardMarks::O);
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(2, 2, BoardMarks::X);
    board.setPlayerInput(2, 1, BoardMarks::X);
    EXPECT_EQ(BoardState::OWins, board.evaluateBoard());
    board.reset();
    //======================================================
    //==========Third HorizontalWins test===========
    board.setPlayerInput(2, 0, BoardMarks::X);
    board.setPlayerInput(2, 1, BoardMarks::X);
    board.setPlayerInput(2, 2, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::O);
    board.setPlayerInput(1, 1, BoardMarks::O);
    EXPECT_EQ(BoardState::XWins, board.evaluateBoard());
    board.reset();
    board.setPlayerInput(2, 0, BoardMarks::O);
    board.setPlayerInput(2, 1, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::O);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(1, 1, BoardMarks::X);
    board.setPlayerInput(0, 0, BoardMarks::X);
    EXPECT_EQ(BoardState::OWins, board.evaluateBoard());
    board.reset();
    //======================================================
}
TEST(BoardTest,DiagonalWins){
    Board board(3);
    //==========First Diagonal test===========
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(1, 1, BoardMarks::X);
    board.setPlayerInput(2, 2, BoardMarks::X);
    board.setPlayerInput(2, 1, BoardMarks::O);
    board.setPlayerInput(1, 2, BoardMarks::O);
    EXPECT_EQ(BoardState::XWins, board.evaluateBoard());
    board.reset();
    board.setPlayerInput(0, 0, BoardMarks::O);
    board.setPlayerInput(1, 1, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::O);
    board.setPlayerInput(1, 2, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(1, 2, BoardMarks::X);
    EXPECT_EQ(BoardState::OWins, board.evaluateBoard());
    board.reset();
    //======================================================
    //==========Second Diagonal test===========
    board.setPlayerInput(2, 0, BoardMarks::X);
    board.setPlayerInput(1, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::X);
    board.setPlayerInput(0, 0, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::O);
    EXPECT_EQ(BoardState::XWins, board.evaluateBoard());
    board.reset();
    board.setPlayerInput(2, 0, BoardMarks::O);
    board.setPlayerInput(1, 1, BoardMarks::O);
    board.setPlayerInput(0, 2, BoardMarks::O);
    board.setPlayerInput(1, 0, BoardMarks::X);
    board.setPlayerInput(2, 1, BoardMarks::X);
    board.setPlayerInput(2, 2, BoardMarks::X);
    EXPECT_EQ(BoardState::OWins, board.evaluateBoard());
    board.reset();

    //======================================================
}
//================================Draw Test======================
TEST(BoardTest,Tie3x3){
    Board board(3);
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::O);
    board.setPlayerInput(0, 2, BoardMarks::X);
    board.setPlayerInput(1, 0, BoardMarks::O);
    board.setPlayerInput(1, 1, BoardMarks::X);
    board.setPlayerInput(1, 2, BoardMarks::X);
    board.setPlayerInput(2, 0, BoardMarks::O);
    board.setPlayerInput(2, 1, BoardMarks::X);
    board.setPlayerInput(2, 2, BoardMarks::O);
    /* X O X
     * O X X
     * O X O */
    EXPECT_EQ(BoardState::Tie, board.evaluateBoard());
    board.reset();

    board.setPlayerInput(0, 0, BoardMarks::O);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::O);
    board.setPlayerInput(1, 0, BoardMarks::X);
    board.setPlayerInput(1, 1, BoardMarks::O);
    board.setPlayerInput(1, 2, BoardMarks::X);
    board.setPlayerInput(2, 0, BoardMarks::X);
    board.setPlayerInput(2, 1, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::X);
    /* O X O
     * X O X
     * X O X */
    EXPECT_EQ(BoardState::Tie, board.evaluateBoard());
    board.reset();

    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::O);
    board.setPlayerInput(1, 0, BoardMarks::O);
    board.setPlayerInput(1, 1, BoardMarks::X);
    board.setPlayerInput(1, 2, BoardMarks::X);
    board.setPlayerInput(2, 0, BoardMarks::X);
    board.setPlayerInput(2, 1, BoardMarks::O);
    board.setPlayerInput(2, 2, BoardMarks::O);
    /* X X O
     * O X X
     * X O O */
    EXPECT_EQ(BoardState::Tie, board.evaluateBoard());
}
//=======================================================================
