# 🧮 Advanced Arithmetic Calculator with Operational Safety Guards

A high-fidelity calculator engineered in C++ featuring real-time input error handling, data-type validation traps, zero-divisor exception catches, and integrated arithmetic state routing.

---

## 🎯 Project Overview
Basic command-line calculators are highly prone to unexpected system termination when faced with faulty mathematical parameters (like dividing by zero). This engine provides automated validation boundaries that evaluate numeric flags before code execution, providing high stability and clear messaging on invalid data interactions.

---

## 🛠️ Tech Stack & Technical Specifications
- **Language Core:** C++
- **Routing Engine:** Low-overhead `switch-case` blocks.
- **Exception Filters:** Pre-execution multi-conditional gatekeepers (`&&`, `||`).

---

## 🚀 Key Engineering Features

### 1. Robust Divisor Exception Catch
- Before hitting the internal calculation engine, a priority safety block (`if`) scans the inputs.
- Automatically captures and intercepts anytime division (`/`) or modulus (`%`) is queried alongside a zero divisor parameter (`b == 0`), printing protective error states instead of breaking runtime threads.

### 2. Modulus Floating-Point Type Guard
- While supporting floating-point precision numbers (`float`) for generic operations, the calculator restricts the modulus (`%`) function to clean integers only.
- Uses strict conversion evaluations (`a == (int)a`) to ensure the mathematical operations run in total alignment with low-level compilation behaviors.

---

## 💻 How to Compile and Run
```bash
cd 09-Advance-Calculator-with-Validation
g++ main.cpp -o advance_calculator
./advance_calculator
