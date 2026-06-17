# 🛍️ Price Product Manager & Inventory Analytics Suite

A robust data sorting and inventory query system engineered in C++ to catalog commercial assets, parse pricing statistics, isolate cost extremes, filter custom boundary arrays, and perform structured list sorting.

---

## 🎯 Project Overview
In commercial warehousing, managing inventory records manually introduces immediate pricing friction. This system automates inventory records by ingesting parallel arrays for items and values. It builds an analytical stack that computes financial distributions, performs parallel swaps, and provides deep filtration modules to map real-world retail workflows.

---

## 🛠️ Tech Stack & Technical Specifications
- **Language Stack:** Core C++ (Parallel Array Mapping paradigms)
- **Data Structures:** Custom Linear String and Integer Arrays (`product[15]`, `productprice[15]`)
- **Algorithms:** Classic Bubble Sort Engine tailored for multi-array synchronization.

---

## 🚀 Key Engineering Features

### 1. Parallel Array Data Integration
- Manages dual-linked records using synchronized asset type arrays.
- Maintains strict data integrity across index shifts by linking string names to integer pricing indices during execution loops.

### 2. Extremum Isolation & Financial Benchmarking
- Runs continuous evaluation filters to isolate the single cheapest (`min`) and most expensive (`max`) product nodes.
- Accumulates item weights to yield absolute system-wide pricing averages (`avg`).

### 3. Dynamic Boundary Filtration & Algorithmic Sorting
- **Range Query Ingestion:** Allows users to input custom numeric parameters ($start \rightarrow end$) to sweep arrays and print items inside that cost window.
- **Bubble Sort Pipeline Implementation:** Employs an optimized structural nested Bubble Sort routine to reorder assets in an ascending layout while safely executing parallel coordinate swaps on both text and numerical vectors.

---

## 💻 How to Compile and Run
```bash
cd 05-Price-Product-Manager
g++ main.cpp -o asset_manager
./asset_manager
