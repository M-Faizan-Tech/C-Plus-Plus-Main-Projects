# 🔒 Cryptographic Password Strength Analyzer

An interactive CLI security utility engineered to intercept user inputs in real-time, mask sensitive characters, analyze string complexity, and dynamically calculate password strength arrays.

---

## 🎯 Project Overview
In modern cyber security architecture, enforcing strong password hygiene is the first line of defense against brute-force attacks. This software mimics professional credential input forms by suppressing visual echoes in the terminal. It scans each typed character, categorizes it across multiple character groups, and grades the password's overall vulnerability parameters.

---

## 🛠️ Tech Stack & Technical Specifications
- **Language Core:** C++ (Procedural Logic Architecture)
- **Environment Handling:** Non-standard Console I/O via `<conio.h>` for real-time keystroke interception.
- **Complexity Assessment:** Custom character matrix flag mapping.

---

## 🚀 Key Features Implemented

### 1. Real-Time Keystroke Masking
- Leverages the `getch()` routine to capture keystrokes straight from the keyboard buffer before they are printed to the display screen.
- Dynamically intercepts ASCII value `13` (The **Enter** key) to safely break input capture execution loops.
- Replaces raw characters with defensive masks (`*`) instantly to secure shoulder-surfing vectors.

### 2. Micro-Level Character Group Scanning
As the string is compiled, a multi-branch validation scanner updates specific complexity indicators:
- **Uppercase Validation (`A` to `Z`):** Tracks presence of corporate complexity triggers.
- **Lowercase Validation (`a` to `z`):** Counts standard string anchors.
- **Numerical Capacity (`0` to `9`):** Flags numeric strength additions.
- **Special Character Isolation:** Catches all remaining punctuation or cryptographic symbols.

### 3. Structural Strength Tier Categorization
The engine dynamically scores the final password by counting how many distinct categories are satisfied (`typeCount`) alongside total length requirements to render absolute rankings:
- **Strong:** High variety across all letter sets ($\ge 8$ total characters AND all 4 types checked).
- **Moderate:** Balanced layout ($\ge 6$ total characters AND $\ge 2$ types checked).
- **Weak:** Fails variety tests or minimum length scales.

---

## 🧠 Architectural Logic & Workflow
1. **Keystroke Hook:** A continuous `while(true)` execution loop runs, actively listening to the terminal input stream.
2. **Buffer Diversion:** `getch()` catches the raw character code. If it matches Enter (ASCII 13), compilation breaks.
3. **Array Type Analysis:** The code checks boundaries using explicit ASCII range mapping (`ch >= 'A' && ch <= 'Z'`) to increment the corresponding counters.
4. **Metric Resolution:** The program prints a full breakdown of uppercase, lowercase, numbers, special symbols, and outputs the final security ranking tier.

---

## 💻 How to Compile and Run
*Note: This application requires `<conio.h>`, which is typically supported in Windows environments (MinGW/GCC).*

```bash
# 1. Navigate to the project directory
cd 03-Password-Check-Analyzer

# 2. Compile using GCC
g++ main.cpp -o password_analyzer

# 3. Run the application
./password_analyzer
