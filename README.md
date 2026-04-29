# Corporate Org Chart Tool – Employee Hierarchy Tree

A menu-driven C program that manages an employee hierarchy using a Binary Tree data structure with full CRUD operations.

---

## Team Members

- Member 1: [Your Name] – [Roll No]
- Member 2: [Your Name] – [Roll No]

---

## Problem Statement

Managing a corporate organizational hierarchy is a real-world challenge. This program models an employee reporting structure using a binary tree, where each employee node can have up to two subordinates (left and right). It supports adding, viewing, searching, updating, and deleting employees.

---

## Data Structure Used

**Binary Tree**
- Each node stores: Employee ID, Name, and Position
- Left child = first subordinate
- Right child = second subordinate
- The root node represents the top-level employee (CEO)

---

## Algorithm Explanation

- **Insert** – If tree is empty, new node becomes root. Otherwise, user picks a parent ID and places the node as left or right child.
- **Search** – Recursive pre-order traversal to find a node by ID.
- **Display** – Pre-order traversal with indentation to show hierarchy levels.
- **Update** – Search by ID, then overwrite name and position fields.
- **Delete** – Only leaf nodes (no children) can be removed to preserve hierarchy.

---

## Compilation Instructions

Make sure you have `gcc` installed.

```bash
gcc src/main.c -o orgchart
./orgchart
```

---

## Sample Output

--- Org Chart Menu ---

Add Employee
Delete Employee
Update Employee
Search Employee
Display
Exit
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

---

## Demo Video

[Google Drive Link – add after recording]

---
