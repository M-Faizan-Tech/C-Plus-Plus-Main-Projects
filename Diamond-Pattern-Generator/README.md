# 💎 Mathematical Diamond Pattern Generator

A computational geometry terminal script designed to build symmetrical nested star patterns, calculate dynamic space offsets, and handle nested mathematical row loops.

---

## 🎯 Project Overview
In computer science, printing complex shapes in a CLI environment tests your understanding of multi-tiered looping constructs. This application ingests a sizing variable, computes dynamic spaces using algebraic limits, and prints a perfectly proportional diamond matrix using inverted star increments.

---

## 🛠️ Tech Stack & Technical Specifications
- **Language Stack:** C++
- **Logic Blocks:** Nested Loops (`for` matrices within rows).
- **Algorithmic Flow:** Dual-Phase Loop Halving.

---

## 🚀 Key Engineering Features

### 1. Upper Symmetrical Expansion Phase
- The program initiates a forward row iteration loop running up to the peak threshold formula ($n/2 + 1$).
- **Space Calculations:** Uses an inverse offset equation (`n - i`) to systematically reduce blank margins as the pyramid structure widens.
- **Character Population:** Maps out an odd-number progression ($2i - 1$) to generate stars linearly.

### 2. Lower Symmetrical Contraction Phase
- Employs a mirrored descending iteration flow starting from the mid-point axis ($n/2$) down to 1.
- Naturally mirrors the exact spacing grids to perfectly close the diamond geometry without leaving alignment discrepancies.

---

## 💻 How to Compile and Run
```bash
cd 08-Diamond-Pattern-Generator
g++ main.cpp -o diamond_generator
./diamond_generator
