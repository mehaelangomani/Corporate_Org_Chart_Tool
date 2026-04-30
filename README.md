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
1. Add Employee
<img width="389" height="339" alt="Screenshot 2026-04-30 103808" src="https://github.com/user-attachments/assets/3c5b47c7-c0a4-4b0b-aae8-36f5b4dac179" />

<img width="400" height="413" alt="Screenshot 2026-04-30 103301" src="https://github.com/user-attachments/assets/1143a669-547e-40dd-9515-1799b2fb34b3" />

<img width="443" height="411" alt="Screenshot 2026-04-30 103314" src="https://github.com/user-attachments/assets/92cc42de-235c-468f-a306-eabd534725f8" />

5. Display
<img width="406" height="302" alt="Screenshot 2026-04-30 103451" src="https://github.com/user-attachments/assets/778a843a-e21c-4b6f-87c3-721ac3f48fbe" />

4. Search Employee
<img width="362" height="278" alt="Screenshot 2026-04-30 103510" src="https://github.com/user-attachments/assets/b9596b6d-0b66-4f83-a8fa-a1f2780b6f04" />

<img width="419" height="284" alt="Screenshot 2026-04-30 103500" src="https://github.com/user-attachments/assets/f12fc0b3-0381-4891-b1f1-cc9d64f224fd" />

<img width="326" height="281" alt="Screenshot 2026-04-30 104706" src="https://github.com/user-attachments/assets/1b939f0a-10a7-4a6c-bdfa-ee5c4cccfd37" />

3. Update Employee
<img width="413" height="330" alt="Screenshot 2026-04-30 103444" src="https://github.com/user-attachments/assets/8f9f0273-1b57-45c3-8056-1fb2716fc8d5" />

<img width="406" height="302" alt="Screenshot 2026-04-30 103451" src="https://github.com/user-attachments/assets/5ff92d2c-c93c-43e5-bd28-52a50e7e495b" />

2. Delete Employee
<img width="371" height="273" alt="Screenshot 2026-04-30 103521" src="https://github.com/user-attachments/assets/580c9912-bc3e-4af6-afea-652f0dc165ed" />

<img width="372" height="279" alt="Screenshot 2026-04-30 103529" src="https://github.com/user-attachments/assets/bacd8390-c68c-4459-93ad-1cc54c526196" />

<img width="400" height="281" alt="Screenshot 2026-04-30 103536" src="https://github.com/user-attachments/assets/eaae72fa-8a3e-412c-addb-24fba1fd38c0" />

6.Exit
<img width="498" height="236" alt="Screenshot 2026-04-30 103554" src="https://github.com/user-attachments/assets/e3d7de6d-89c0-40c9-95e7-38349e7a3d21" />


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
