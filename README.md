# Problem-Solving-Repo
## Table of Contents
1. [Simple Calculator](#simple-calculator)
2. [Person Class Demo](#person-class-demo)
3. [Leap Year](#leap-year-checker)
4. [Zeller Day Of Week](#day-of-the-week-calculator)
5. [Full Year Calendar](#year-calendar)
   
# Simple Calculator

## Description
This is a simple calculator implemented in C++ using a class (`clsCalculator`).  
It supports basic arithmetic operations, clearing the result, and cancelling the last operation.

### Supported Operations:
- **Add**: Adds a number to the current result.
- **Subtract**: Subtracts a number from the current result.
- **Multiply**: Multiplies the current result by a number.
- **Divide**: Divides the current result by a number (division by zero is handled).
- **Clear**: Resets the result to zero.
- **CancelLastOperation**: Cancels the previous operation and restores the previous result.

  
# Person Class Demo

## Description
This project demonstrates a simple **Person class** in C++ using object-oriented programming principles.  
The class stores personal information and provides methods to manipulate and display it.

## Features
- Store personal information: ID, First Name, Last Name, Email, Phone Number
- Getters and Setters for all fields
- Print full information of a person
- Simulate sending an email (console output)
- Simulate sending an SMS (console output)

# Leap Year Checker

This is a simple C++ program that checks whether a given year is a **leap year** or not.

## 📌 Problem Description
A leap year is defined as:
- A year that is **divisible by 400**, OR  
- A year that is **divisible by 4 but not by 100**.  

Otherwise, the year is not a leap year.

## 🛠️ Features
- Reads a year from the user.
- Checks if the year is a leap year using a simple condition.
- Prints the result to the console.

## Usage
1. Compile the code using any C++ compiler

 # Day of the Week Calculator

This C++ program calculates the **day of the week** for any given date using **Zeller's Congruence** formula.  
It takes a date as input (day, month, year) and outputs:

- The formatted date (`dd/mm/yyyy`)
- The numeric order of the day (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
- The full name of the day

---

## 📌 Problem Statement
Write a C++ program that:

1. Reads a date from the user (day, month, year)
2. Computes the day of the week for that date
3. Displays the day order and its name

---
Where:

- `m` = adjusted month (March = 1, ..., February = 12)  
- `y` = year adjusted if month is January or February  
- `0 = Sunday, 1 = Monday, ..., 6 = Saturday`

# Year Calendar

A simple C++ program to display a full calendar for a given year.  
It prints all 12 months with correct day alignment considering leap years.

## Features

- Display calendar for any year entered by the user.
- Automatically handles leap years.
- Shows each month with days aligned under Sun, Mon, Tue, Wed, Thu, Fri, Sat.
- Easy to read console output.

## How to Use

1. Clone or download the repository.
2. Make sure you have a C++ compiler installed (e.g., g++, Visual Studio).
3. Compile the project:
   ```bash
   g++ YearCalendar.cpp -o YearCalendar


  
