# 🏫 University Course Registration & Recommendation System

An enterprise-inspired academic routing system designed to automate curriculum mapping, prerequisite checking, and credit-hour auditing for university departments. This console-based application serves as an interactive guide for students navigating their semester configurations across multiple disciplines.

---

## 🎯 Project Overview
In university environments, tracking course sequences and prerequisites is critical to prevent enrollment bottlenecks. This software maps out the complete 8-semester timeline for four major departments, ensuring students are instantly recommended the correct core modules, specialized labs, or capstone projects based on their current academic standing.

---

## 🛠️ Tech Stack & Technical Specifications
- **Language Stack:** Core C++ (Procedural Flow & Structural Design)
- **I/O Management:** Standard Input/Output Stream handling via `<iostream>`
- **Data Types:** Direct string literal comparisons, boolean conditional routing, and integer state-flags.

---

## 🚀 Key Features Implemented

### 1. Multi-Department Architecture
The engine hosts standalone structural records and maps course flows for four dynamic disciplines:
- **CS** (Computer Science)
- **EE** (Electrical Engineering)
- **ME** (Mechanical Engineering)
- **BBA** (Business Administration)

### 2. Live Prerequisite Matrix Display
Before accepting student parameters, the program outputs a clean baseline reference detailing high-level dependency chains, helping students visualize their learning pathways:
- Object-Oriented Programming (OOP) $\longrightarrow$ Requires Programming Fundamentals (PF)
- Data Structures & Algorithms (DSA) $\longrightarrow$ Requires Programming Fundamentals (PF)
- Digital Logic Design (DLD) $\longrightarrow$ Requires Basic Electronics
- Thermodynamics $\longrightarrow$ Requires Physics 1
- Financial Accounting $\longrightarrow$ Requires Principles of Management

### 3. Smart Semester Routing (1–8)
The application dynamically computes course recommendations for any valid semester input:
- **Early Semesters:** Focused on bedrock fundamentals (e.g., Programming Fundamentals, Engineering Drawing, Principles of Management).
- **Mid Semesters:** Transitions into core engineering/business domains (e.g., OOP, DSA, DLD, Thermodynamics, Financial Accounting).
- **Terminal Semesters:** Automatic mapping to Final Year Projects (FYP) with accelerated credit hour capacities (5 Credit Hours).

---

## 🧠 Architectural Logic & Flow Diagram
1. **Bootup:** The console displays an automated directory of available departments, valid semester ranges (1-8), and the global prerequisite mapping matrix.
2. **Input Capture:** The system prompts the user to enter their specific department token and target semester integer.
3. **Validation & Routing:** A master conditional cascade executes string matching for the department. Once verified, a nested structural branch checks the semester integer.
4. **Execution:** If parameters match, it prints the exact course title alongside its weighted credit hour value. If out-of-bounds, defensive safety catches throw clear "Invalid" warnings.

---

## 💻 How to Compile and Run
Ensure you have a C++ compiler (like GCC) installed on your system.

```bash
# 1. Navigate to the project directory
cd 01-University-Course-Registration

# 2. Compile the source code using g++
g++ main.cpp -o registration_system

# 3. Run the compiled binary executable
./registration_system
