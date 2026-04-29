# 🏢 Corporate Org Chart Tool – Employee Hierarchy Tree

A **menu-driven C application** that models a company's organizational structure using a **Binary Tree**.
This project demonstrates **CRUD operations**, dynamic memory usage, and structured programming in C.

---

## 👥 Team Members

* **Meha E** (79)
* **Sweenija Reddy** (3)

---

## 🎯 Problem Statement

Managing employee hierarchies in an organization can be complex.
This project simulates a **corporate reporting structure** where each employee can have up to two subordinates.

The system allows:

* Adding employees under managers
* Viewing hierarchy levels
* Searching employee details
* Updating employee information
* Deleting employees (with constraints)

---

## 🌳 Data Structure Used

### **Binary Tree**

Each node represents an employee:

```
struct Employee {
    int id;
    char name[50];
    char position[50];
    struct Employee* left;
    struct Employee* right;
};
```

* **Root Node** → CEO
* **Left Child** → First subordinate
* **Right Child** → Second subordinate

---

## ⚙️ Features (CRUD Operations)

| Operation | Description                         |
| --------- | ----------------------------------- |
| ➕ Create  | Add a new employee under a manager  |
| 📖 Read   | Display full hierarchy              |
| 🔍 Search | Find employee by ID                 |
| ✏️ Update | Modify employee details             |
| ❌ Delete  | Remove employee (only if leaf node) |

---

## 🧠 Algorithm Overview

### 🔹 Insert

* If tree is empty → new node becomes root
* Otherwise → attach under a parent (left/right)

### 🔹 Search

* Recursive traversal to locate employee by ID

### 🔹 Display

* Pre-order traversal with indentation to show levels

### 🔹 Update

* Search employee → modify name & position

### 🔹 Delete

* Only **leaf nodes** can be deleted
* Prevents breaking hierarchy structure

---

## 🖥️ Menu-Driven Interface

```
--- Org Chart Menu ---
1. Add Employee
2. Delete Employee
3. Update Employee
4. Search Employee
5. Display
6. Exit
```

---

## 🛠️ Technologies Used

* **C Programming Language**
* **Dynamic Memory Allocation (malloc, free)**
* **Structures & Pointers**
* **Recursion**

---

## ▶️ Compilation & Execution

Make sure GCC is installed.

```bash
gcc src/main.c -o orgchart
./orgchart
```

---

## 📌 Sample Output

```
--- Org Chart Menu ---
Choice: 1

Enter ID: 101
Enter Name: Alice Johnson
Enter Position: CEO
Added as root (CEO).

Choice: 5
[101] Alice Johnson - CEO
  [102] Bob Smith - CTO
    [104] David Lee - Dev Lead
  [103] Carol Ray - CFO

Choice: 4
Enter ID to search: 103
Found: [103] Carol Ray - CFO

Choice: 6
Goodbye!
```

---

## 📂 Project Structure

```
project-name/
│
├── src/
│   └── main.c
│
├── docs/
│   └── project_report.pdf
│
├── ppt/
│   └── presentation.pptx
│
├── sample_output.txt
└── README.md
```

---

## 🎥 Demo Video

🔗 *Google Drive Link (to be added)*

> ⚠️ Note: Video is kept private as per submission guidelines.

---

## 🚀 Future Enhancements

* Allow deletion of nodes with children (using restructuring)
* Convert to **Binary Search Tree (BST)** for faster search
* Add file storage (save/load data)
* Improve UI with graphical representation

---

## 📚 References

* Data Structures in C – Standard textbooks
* GCC Documentation
* Classroom Notes

---

## ✅ Project Highlights

✔ Fully menu-driven
✔ Uses dynamic memory allocation
✔ Implements complete CRUD operations
✔ Clean modular code
✔ Real-world application model

---

**⭐ If you found this project useful, consider giving it a star!**
