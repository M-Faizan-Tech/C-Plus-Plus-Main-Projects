# 📊 Academic Exam Marks Manager & Performance Profiler

A structural data management utility engineered in C++ to process classroom marks metrics, analyze grade passing distributions, isolate student extremes, and run dynamic comparative averages.

---

## 🎯 Project Overview
In educational data pipelines, raw lists of academic scores require automated parsing to generate meaningful performance reports. This application instantiates a memory array to record student score data, performs multi-pass data validation, calculates structural metrics (Pass/Fail counts, Averages), and executes a post-process loop filter to identify top-performing students.

---

## 🛠️ Tech Stack & Technical Specifications
- **Language Core:** C++
- **Data Architecture:** One-Dimensional Linear Array Mapping (`arr[10]`)
- **Algorithmic Methods:** Multi-pass Extremum Scanning and Threshold Filtering

---

## 🚀 Key Engineering Features

### 1. Data Ingestion & Array Buffering
- Provisions a dedicated sequential memory stack (`int arr[10]`) to store score entries without risking mid-execution data leaks.
- Uses index-offset tracking (`i + 1`) to present a clean user-facing input experience.

### 2. Multi-Variable Batch Auditing
A secondary linear sweep evaluates individual element parameters to generate multiple statistics simultaneously:
- **Pass/Fail Threshold Monitoring:** Dynamically logs success records based on an institutional baseline benchmark ($\ge 50$).
- **Extremum Matrix Evaluation:** Runs comparison checks to capture the absolute maximum and minimum scores present in the array.

### 3. Above-Average Performance Filtering
- Calculates the absolute mean baseline (`avg = sum / 10`) of the class dataset.
- Executes a specialized analytical pass to scan the historical database, isolating and printing only the student profiles that exceed the statistical class average.

---

## 💻 How to Compile and Run
```bash
# 1. Navigate to the project folder
cd 07-Exam-Marks-Manager

# 2. Compile using g++
g++ main.cpp -o marks_manager

# 3. Run the binary
./marks_manager
