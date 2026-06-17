# 🎮 Tic-Tac-Toe Game Board Evaluator

A matrix-based computational game logic engine engineered to analyze the state of a $3 \times 3$ Tic-Tac-Toe game board. The application reads user-defined structural layouts, tracks active player components, and instantly processes linear vector intersections to determine winning configurations or stalemate statuses.

---

## 🎯 Project Overview
Game engines rely heavily on constant state tracking and boundary evaluations. This project simulates the referee backbone of a standard Tic-Tac-Toe match. By feeding the current layout grid into the program, it parses token distributions (`X` and `O`), counts remaining empty legal slots (`-`), and detects absolute match completions without requiring external heavy graphics wrappers.

---

## 🛠️ Tech Stack & Technical Specifications
- **Language Stack:** C++
- **Data Structures:** Multi-dimensional Arrays (2D Matrix Grid Mapping)
- **Algorithmic Complexity:** Linear Matrix Scanning & Counter Accruals

---

## 🚀 Key Engineering Features

### 1. Multi-Dimensional Grid Parsing
The application instantiates a native `char arr[3][3]` memory layout to replicate the physical spaces of the board, scanning indices via nested iterative loops to map token placement accurately.

### 2. Comprehensive Multi-Axis Win Detection
To secure perfect rule compliance, the evaluation script executes multi-branch conditional checks across all **8 possible winning vectors**:
- **Horizontal Rows:** Row 0, Row 1, and Row 2.
- **Vertical Columns:** Column 0, Column 1, and Column 2.
- **Diagonal Vectors:** Top-Left to Bottom-Right ($[0][0] \rightarrow [1][1] \rightarrow [2][2]$) and Top-Right to Bottom-Left ($[0][2] \rightarrow [1][1] \rightarrow [2][0]$).

### 3. Automated Token Accounting & Game State Output
The application calculates real-time grid summaries, displaying:
- Total active moves registered by player **X**
- Total active moves registered by player **O**
- Remainder count of unplayed spaces (`-`)
- **Final Game Status Classification:** Explicitly flags whether Player X won, Player O won, the game is a forced "Draw", or the state remains "On-going".

---

## 🧠 Algorithmic Evaluation Workflow
1. **Matrix Seeding:** The console waits for the user to input 9 sequential tokens representing the row-by-row board state.
2. **Vector Analysis:** The engine evaluates cross-axis matching strings while explicitly verifying that empty spaces (`-`) are not falsely grouped as a winning run.
3. **State Compilation:** A secondary looping sequence compiles spatial counts to evaluate grid capacity metrics.
4. **Result Resolution:** The program merges the win flags and empty-slot variables to render an instant terminal evaluation breakdown.

---

## 💻 How to Compile and Run
Ensure you have a C++ compiler (like GCC) installed on your system.

```bash
# 1. Navigate to the project directory
cd 02-Tic-Tac-Toe-Game-Engine

# 2. Compile the source code using g++
g++ main.cpp -o tictactoe_evaluator

# 3. Run the compiled binary executable
./tictactoe_evaluator
