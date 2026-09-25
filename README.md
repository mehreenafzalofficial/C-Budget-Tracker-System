# 💰 Personal Budget Tracker (C++)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen.svg)
![License](https://img.shields.io/badge/License-MIT-lightgrey.svg)

A simple, console-based **Personal Budget Tracker** built in C++ to help users record their income, track expenses, and monitor their monthly budget — all while demonstrating core **Object-Oriented Programming (OOP)** principles.

---

## 📖 Overview

This application lets a user enter their monthly income and budget limit, log individual expenses by name and category, and get a clear summary of their spending — including whether they're within budget and how much they're saving each month.

---

## 🚀 Features

- **Add Expense**: Record expenses with name, category, and amount (up to 20 entries).
- **View All Expenses**: Display a complete, formatted list of all recorded expenses.
- **Search by Category**: Quickly find all expenses under a specific category.
- **Budget Status Check**: Instantly see if you're over or within your set budget limit.
- **Budget Summary**: View a full breakdown of income, expenses, and savings.
- **Object-Oriented Design**: Built using abstraction, encapsulation, inheritance, and polymorphism.

---

## 🛠️ Tech Stack

| Layer | Technology |
|---|---|
| Language | C++ |
| Paradigm | Object-Oriented Programming (OOP) |
| Compiler | g++ / any standard C++ compiler |
| Interface | Console-based (CLI) |

---

## 🧠 OOP Concepts Used (`Budget` Class Design)

The application is structured around a relational class hierarchy:

| Class / Concept | Description |
|---|---|
| `Budget` (Abstract Class) | Base class holding income, expenses, and budget limit; defines a pure virtual function `displaySummary()` |
| `ExpenseTracker` (Derived Class) | Inherits from `Budget`; implements expense storage, search, and summary logic |
| **Encapsulation** | `income`, `totalExpenses`, `budgetLimit` are protected and accessed via getter/setter functions |
| **Polymorphism** | `checkBudget()` and `displaySummary()` are overridden in `ExpenseTracker` |

---

## ⚙️ How to Run Locally

### 1. Download the Project
- Download or clone the project files to your system.

### 2. Open budget_tracker.cpp in any C++ IDE or compiler, such as:

- Visual Studio Code
- Dev-C++
### 3: Compile and Run

Compile the program and run the generated executable.
---

## 👤 Author

**Mehreen Afzal**

Developed as a C++ OOP practice/academic project.

## 📄 License

This project is licensed under the [MIT License](LICENSE) — free to use for learning and academic purposes.



