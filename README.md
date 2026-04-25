# 📊 Corporate Organization Chart Tool
## Employee Hierarchy Management using Tree (C Programming)

### 👥 Team Members
* Meha E
* G. Sweenija Reddy

---

### 📌 Project Overview
The **Corporate Organization Chart Tool** is a menu-driven C program designed to manage employee hierarchy in an organization. It represents employees in a **tree structure**, where each employee can have subordinates. The system allows users to perform essential **CRUD operations** (Create, Read, Update, Delete) on employee records efficiently.

---

### 🎯 Problem Statement
Managing hierarchical employee data manually can be inefficient and error-prone. This project provides a structured way to store, retrieve, and manage employee relationships using a **tree-based data structure**.

---

### 🌍 Real-World Application
* Corporate organizational hierarchy management
* HR systems for employee structure visualization
* Team and department structure tracking

---

### 🧱 Data Structure Used
**Tree (Binary Tree Structure)**
Each node represents an employee with:
* Employee ID
* Name
* Position
* Left Subordinate
* Right Subordinate

---

### ⚙️ Features (CRUD Operations)
| Operation | Description |
| :--- | :--- |
| **Create** | Add a new employee under a manager |
| **Read** | Display the entire organization hierarchy |
| **Update** | Modify employee details |
| **Delete** | Remove an employee (leaf node) |
| **Search** | Find an employee by ID |

---

### 🧠 Algorithm Explanation
* **Insert Employee:** Create a new node using dynamic memory allocation (`malloc`). If tree is empty, assign as root (CEO). Otherwise, find parent using search and attach as left or right child.
* **Search Employee:** Use recursive traversal to check the root, left subtree, and right subtree.
* **Update Employee:** Search employee by ID and modify name and position.
* **Delete Employee:** Locate node and delete only if it is a **leaf node**. Free memory using `free()`.
* **Display Hierarchy:** Use **pre-order traversal** to print the hierarchy with indentation.



---

### 💻 Technologies Used
* **Programming Language:** C
* **Concepts:** Structures (`struct`), Pointers, Dynamic Memory Allocation (`malloc`, `free`), Trees (Non-linear Data Structure), Recursion

---

### 🏗️ Project Structure
```text
project-name/
 ├── src/
 │    └── main.c
 ├── docs/
 │    └── project_report.pdf
 ├── ppt/
 │    └── presentation.pptx
 ├── README.md
 └── sample_output.txt
▶️ Compilation & Execution

Bash
gcc main.c -o project
./project
🖥️ Sample Output

Plaintext
--- Org Chart Menu ---
1. Add Employee
2. Delete Employee
3. Update Employee
4. Search Employee
5. Display
6. Exit

Enter choice: 1
Enter ID: 1
Enter Name: Alice
Enter Position: CEO
Added as root (CEO)

Enter choice: 1
Enter ID: 2
Enter Name: Bob
Enter Position: Manager
Enter Parent ID: 1
1. Add as Left Subordinate
2. Add as Right Subordinate
Choice: 1

Enter choice: 5

1 - Alice (CEO)
  2 - Bob (Manager)
