# Chess Game in C

## Overview

This project is a command-line based chess game implemented in the C programming language. The main objective of this project is to help me deepen my understanding of C programming, including concepts such as pointers, dynamic memory allocation, and data structures.

## Features

- Standard chess rules and moves
- Two-player mode
- Command-line interface
- Simple and clean code structure to facilitate learning and understanding

## Getting Started

### Prerequisites

To compile and run this project, you will need:

- A C compiler (GCC is recommended)
- A terminal or command-line interface

### Compilation
To compile the game, navigate to the project directory and run the following command:

```
gcc -o chess main.c chess.c -lm
```
### Running the Game
After compilation, you can start the game by executing the following command:
```
./chess
```
## How to Play

1. The game starts with the standard chessboard layout.
2. Players take turns to input their moves in the format: `e2 e4`
3. The game checks for legal moves and updates the board accordingly.
4. The game continues until a checkmate, stalemate, or draw is reached.

## File Structure

- `main.c`: Contains the `main` function and handles the game loop.
- `chess.c`: Contains the core game logic, including move validation, board updates, and game state checks.
- `chess.h`: Header file with function declarations and data structures used in the game.

## Learning Objectives

This project is designed to help me:

- Understand and implement complex algorithms
- Practice using pointers and dynamic memory in C
- Learn about structuring a larger C project
- Improve debugging and problem-solving skills in C

## Contributions

As this is a personal learning project, contributions are welcome! If you have suggestions or improvements, feel free to open an issue or submit a pull request.

## Acknowledgements

Special thanks to the online C programming community and various tutorials and resources that have helped me along the way.

---

Thank you for checking out my Chess Game project! I hope it helps others in their journey to learn C as much as it has helped me.
