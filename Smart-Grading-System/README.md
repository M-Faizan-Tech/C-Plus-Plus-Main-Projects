# 🎓 Smart Academic Grading & Weighted Performance Evaluator

An academic analytics application designed to ingest multi-tier exam scores, compute weighted averages based on institutional criteria, audit student attendance logs, and resolve definitive alphabetic grades.

---

## 🎯 Project Overview
Raw test marks do not reflect accurate academic standing without proportional weighting factors. A student scoring perfectly in short quizzes might still fail if their final exam weightage drops. This system resolves this by processing raw quiz scores, midterms, and final exam sheets through absolute institutional scaling structures, while dynamically enforcing strict attendance thresholds.

---

## 🛠️ Tech Stack & Technical Specifications
- **Language Core:** C++ (Procedural Logic Architecture)
- **Mathematical Inferences:** Floating-point precision scaling factors for multi-variable fraction equations.
- **Logic Matrix:** Two-tier compound relational boundaries (`&&` logic blocks).

---

## 🚀 Key Features Implemented

### 1. Proportional Score Weighting Setup
The application transforms heterogeneous score bounds into standardized academic weight benchmarks using precise fractional math:
- **Quizzes (3 Modules Combined):** Raw total out of $30$ marks is scaled onto a relative **20%** weight bracket.
- **Midterm Examinations:** Raw score out of $35$ marks is mapped onto a relative **30%** weight bracket.
- **Final Examinations:** Raw score out of $40$ marks is mapped onto a relative **50%** weight bracket.
- **Total Ledger Evaluation:** Merges floating points together to forge a master aggregate out of **100**.

### 2. Dual-Condition Attendance Safety Interlocks
Unlike generic calculators, this grading engine uses a strict dual-condition decision tree. A high score can be overridden if a student's attendance falls below the required threshold:
- **Grade A Criterion:** Total score $\ge 85\%$ **AND** Attendance $\ge 75\%$.
- **Grade B Penalization:** If total score $\ge 85\%$ but Attendance $< 75\%$, the grade automatically drops to a **B**.
- Multi-tier cascades down through **C** and **F** brackets follow identical safety guidelines.

---

## 🧠 Algorithmic Evaluation Workflow
1. **Data Ingestion:** The interface asks for 3 separate quiz values, midterm results, terminal final paper marks, and current attendance statistics.
2. **Fraction Scaling Resolution:** The engine computes sub-formulas: 
   $$\text{quizweight} = \left(\frac{\text{sum}}{30.0}\right) \times 20$$
3. **Aggregate Consolidation:** Accumulates sub-weights into a master float container (`total`).
4. **Relational Matrix Sorting:** Runs a prioritized conditional branch comparing the total aggregate and attendance integers to isolate the final letter grade.

---

## 💻 How to Compile and Run
```bash
# 1. Navigate to the project directory
cd 04-Smart-Grading-System

# 2. Compile using g++
g++ main.cpp -o grading_system

# 3. Execute the binary
./grading_system
