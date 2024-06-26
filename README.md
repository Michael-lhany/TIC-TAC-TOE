                    
  

<div align="center">

  <img src="TicTacToeLast - Copy/images/icon.png"   alt="logo" width="200" height="auto" />
  <h1>Advanced Tic Tac Toe Game</h1>
  
  <!-- Table of Contents -->
# :notebook_with_decorative_cover: Project Overview                                                          
  Develop an advanced version of Tic Tac Toe game that incorporates user authentication,
personalized game history, and an intelligent (Artificial Intelligent) AI opponent. The game will
support both player-vs-player and player-vs-AI modes, allowing users to log in, track their game
history, and analyze past games. The project will employ best practices in software
engineering, including secure user management, rigorous testing, and professional version
control workflows.
  
<!-- Badges -->
<p>
  <a href="https://github.com/Michael-lhany/TIC-TAC-TOE/graphs/contributors">
    <img src="https://img.shields.io/github/contributors/Michael-lhany/TIC-TAC-TOE" alt="contributors" />
  </a>
  <a href="">
    <img src="https://img.shields.io/github/last-commit/Michael-lhany/TIC-TAC-TOE" alt="last update" />
  </a>
  <a href="https://github.com/Michael-lhany/TIC-TAC-TOE/network/members">
    <img src="https://img.shields.io/github/forks/Michael-lhany/TIC-TAC-TOE" alt="forks" />
  </a>
  <a href="https://github.com/Michael-lhany/TIC-TAC-TOE/stargazers">
    <img src="https://img.shields.io/github/stars/Michael-lhany/TIC-TAC-TOE" alt="stars" />
  </a>
  <a href="https://github.com/Michael-lhany/TIC-TAC-TOE/issues/">
    <img src="https://img.shields.io/github/issues/Michael-lhany/TIC-TAC-TOE" alt="open issues" />
  </a>
  <a href="https://github.com/Michael-lhany/TIC-TAC-TOE/master/LICENSE">
    <img src="https://img.shields.io/github/license/Michael-lhany/TIC-TAC-TOE.svg" alt="license" />
  </a>
</p>
   
<h4>
    <a href="https://github.com/Michael-lhany/TIC-TAC-TOE/overview.gif">View Demo</a>
  <span> · </span>
    <a href="https://github.com/Michael-lhany/TIC-TAC-TOE/TicTacToe SRS.doc">Documentation</a>
  <span> · </span>
    <a href="https://github.com/Michael-lhany/TIC-TAC-TOE/issues/">Report Bug</a>
  <span> · </span>
    <a href="https://github.com/Michael-lhany/TIC-TAC-TOE/issues/">Request Feature</a>
  </h4>
</div>

<br />

<!-- Table of Contents -->
# :notebook_with_decorative_cover: Table of Contents                                                                                                    
- [About the Project](#star2-about-the-project)
  * [Technical Map](#space_invader-tech-stack)
  * [Features](#dart-features)
  * [Game Screenshots](#key-environment-variables)
- [Getting Started](#toolbox-getting-started)
  * [Installation](#gear-installation)
  * [Usage](#toolbox)
  * [Testing](#bangbang-prerequisites)
- [Contributing](#wave-contributing)
- [Contact](#handshake-contact)
- [Acknowledgements](#gem-acknowledgements)
  

<!-- About the Project -->
## :star2: About the Project

<div align="center">
  <img src="overview.gif" alt="Overview" />
</div>

<!-- Tools -->
### :space_invader: Technical Map

<details>
  <summary>Tools</summary>
  <ul>
    <li><a href="https://visualstudio.microsoft.com/">VisualStudio</a></li>
    <li><a href="https://www.jetbrains.com/clion/">CLion</a></li>
    <li><a href="https://www.qt.io/product/development-tools">GUI Framework: Qt</a></li>
    <li><a href="https://en.wikipedia.org/wiki/Google_Test">GoogleTest framework</a></li>
    <li><a href="https://doc.qt.io/qt-6/qmake-manual.html">Qmake</a></li>
  </ul>
</details>

<details>
  <summary>Server</summary>
  <ul>
    <li><a href="https://github.com/">Git & Github</a></li>
  </ul>
</details>

<details>
<summary>Database</summary>
  <ul>
    <li><a href="https://www.mysql.com/">MySQL</a></li>
  </ul>
</details>

<!-- Features -->
### :dart: Features

- Gameplay Modes:
     * Player-versus-Player (PvP): Two human players compete against each other.
     * Player-versus-AI (PvAI): A single player competes against an AI opponent with strategic algorithms in addition to the option of if Ai start or not.
- User Authentication:
     * Secure login and registration.
     * Password hashing for secure storage.
- Personalized Game History:
     * Storage and retrieval of game histories for each user.
     * Ability to review and replay past games.
- Graphical User Interface (GUI):
     * Intuitive interface displaying the Tic Tac Toe board.
     * User-friendly screens for registration, login, and profile management.
- AI Opponent:
     * AI uses the minimax algorithm for optimal moves.

<!-- Simple Class Diagram -->
### :art: Simple Class Diagram
![Class Diagram](https://github.com/Michael-lhany/TIC-TAC-TOE/blob/main/simple%20class%20diagram.png)

<!-- User Sequence Flow -->
### :key: User Sequence Flow
![Class Diagram](https://github.com/Michael-lhany/TIC-TAC-TOE/blob/main/SequenceDiagram.png)

<!-- Game Screenshots -->
##  :art: Game Screenshots
1. Startup Page

   - ![Startup Page](https://github.com/Michael-lhany/TIC-TAC-TOE/blob/main/asserts/Capture.PNG)

2. Game menu

   - ![Game menu](https://github.com/Michael-lhany/TIC-TAC-TOE/blob/main/asserts/Capture2.PNG)

3. Game options

   - ![Game options](https://github.com/Michael-lhany/TIC-TAC-TOE/blob/main/asserts/Capture3.PNG)

4. Player history

   - ![Player history](https://github.com/Michael-lhany/TIC-TAC-TOE/blob/main/asserts/Capture4.PNG)

<!-- Getting Started -->
## 	:toolbox: Getting Started

<!-- Installation -->
### :gear: Installation
1. Clone the Repository
```bash
  git clone https://github.com/Michael-lhany/TIC-TAC-TOE.git
  cd advanced-tic-tac-toe
  cd Qt-Tic-Tac-Toe
```
2. Install Dependencies: Ensure you have Qt installed. You can download it from Qt's official website.

3. Build the Project: Open the project in Qt Creator and build it, or use the following command line instructions:
```bash
  mkdir -p build
  cd build
  qmake ../Qt-Tic-Tac-Toe.pro
  make
```

<!-- Usage -->
## :eyes: Usage
1. Run the Application: After building the project, run the executable:
```bash
  ./Qt-Tic-Tac-Toe
```
2. Login or Register:
     - If you are a new user, register by providing a username and password.
     - If you are an existing user, log in with your credentials.

3. Start a Game:
     - If you are a new user, you can learn how to play the game from the guide.
     - Before start a game, you can set the options as you like 3x3 or 4x4 ...10x10 board's size, Choose between PvP or PvAI mode.

4. Play the Game:
     - The game will display the winner or indicate a tie.

5. View Game History:
     - Access your game history to review past games, no of games played, games won, games losed, games drawed.

<!-- Testing -->
## 	:toolbox: Testing
1. Download GoogleTest: Download GoogleTest from `GoogleTest GitHub repository`.
2. Configure GoogleTest Directory: Navigate to the testing directory
```bash
  cd test/
```
3.Configure GoogleTest Directory: Navigate to the testing directory Open the `gtest_dependency file` and change the line:
```bash
  GOOGLETEST_DIR = "$$PWD/googletest/googletest"
```
  to the directory where you have downloaded `GoogleTest`, for example:
```bash
  GOOGLETEST_DIR = "/path/to/your/googletest"
```
4.Run Tests: Build and run the tests to ensure everything is working correctly:
```bash
  mkdir -p build
  cd build
  qmake ../Qt-Tic-Tac-Toe.pro
  make
  ./tictactoe
```

<!-- Contributing -->
## :wave: Contributing

<a href="https://github.com/Louis3797/awesome-readme-template/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=Louis3797/awesome-readme-template" />
</a>


Contributions are always welcome! Follow these steps to contribute:
  1. Fork the repository.
  2. Create a new branch `(git checkout -b feature-branch)`.
  3. Make your changes and commit them `(git commit -m 'Add new feature')`.
  4. Push to the branch `(git push origin feature-branch)`.
  5. Create a Pull Request.


<!-- Contact -->
## :handshake: Contact

- Muhammed Adel - [@gmail_handle](https://gmail.com/twitter_handle) - email@email_client.com
- Yousef Bably - [@gmail_handle](https://gmail.com/twitter_handle) - email@email_client.com
- Michael Hany - [@gmail_handle](https://gmail.com/twitter_handle) - email@email_client.com
- Yousef Karam - [@gmail_handle](https://gmail.com/twitter_handle) - email@email_client.com
- Yousef Gamal -  YousefGamalTawfik@gmail.com
- Project Link: [https://github.com/Michael-lhany/TIC-TAC-TOE](https://github.com/Michael-lhany/TIC-TAC-TOE)

<!-- Acknowledgments -->
## :gem: Acknowledgements

Use this section to mention useful resources and libraries that you have used in your projects.

 - [ChatGPT](https://shields.io/)
 - [QT Documentation](https://doc.qt.io/)
 - [Google Test](https://github.com/google/googletest)
 - [QT Templates](https://doc.qt.io/qt-6/qtquicktemplates2-index.html)

