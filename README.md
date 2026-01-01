# 📘 Student Management System (C)

A menu-driven **Student Management System** built in **C**, designed to demonstrate core programming concepts such as **structures, pointers, file handling, and modular programming**.  
The project supports full **CRUD operations** and stores data persistently using a binary file.

---

## 🚀 Features

- ➕ Add new students  
- 📄 View all students (with pagination)  
- 🔍 Search student by ID  
- ✏️ Update student information  
- 🗑️ Delete student records  
- 💾 Save & load data using binary file (`students.dat`)  
- 🧠 Input validation and error handling  
- 🖥️ Clean, menu-driven console interface  

---

## 🛠️ Technologies Used

- **Programming Language:** C  
- **Core Concepts:**  
  - Structures (`struct`)  
  - Pointers  
  - Arrays  
  - Functions & modular design  
  - File handling (`fread`, `fwrite`)  
  - Input buffer management  

- **Compiler:** GCC (recommended)

---

## 📂 Project Structure

Student-Management-System/
│
├── main.c # Main source code
├── students.dat # Binary file for persistent storage
└── README.md # Project documentation

## 📋 How the Program Works

1. On startup, the program loads existing student data from `students.dat`.
2. The user interacts with the system through a menu-based interface.
3. All operations (add, update, delete) modify in-memory data.
4. Before exiting, the program saves the updated data back to the file.
5. Data remains persistent between program runs.

---

## 📄 Pagination (View Students)

To improve readability, student records are displayed using pagination.

- Displays a fixed number of students per page
- Press **ENTER** to view the next page
- Press **`q`** to exit pagination view

---

## ▶️ How to Compile and Run

### 🔧 Prerequisites
Make sure you have a C compiler installed.

- **Linux / macOS:** GCC
- **Windows:** MinGW (or use Git Bash with GCC)

Check if GCC is installed:
```bash
gcc --version

