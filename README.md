ATM Simulation in C

**Overview**

This project is a simple ATM (Automated Teller Machine) Simulation implemented in the C programming language. It mimics basic ATM functionalities such as PIN-based authentication, checking account balance, depositing money, withdrawing money, and exiting the system. The program demonstrates fundamental C concepts like functions, loops, conditionals, and input validation, while providing a secure and user-friendly interface.

**Features**

PIN Setup and Authentication: Users set a 4-digit PIN at the start and must enter it correctly to access the ATM, with a limit of 3 incorrect attempts.
Check Balance: Displays the current account balance.
Deposit: Allows users to add money to their account (positive amounts only).
Withdraw: Permits money withdrawal (if sufficient balance and positive amount).
Exit: Gracefully terminates the program.
Error Handling: Validates inputs and provides feedback for invalid PINs, amounts, or menu choices.

Prerequisites
A C compiler (e.g., GCC) installed on your system.
Basic knowledge of running C programs in a terminal or IDE.

Installation
Clone the Repository:
bash :git clone https://github.com/abhishekk1004/atm.git
cd atm

Compile the Code: Use a C compiler like GCC to compile the source file:
bash : gcc -o atm atm.c

Run the Program:
bash : ./atm_simulation

Usage
1. Launch the program.
2. Set up a 4-digit PIN when prompted (e.g., 1234).
3. Enter the PIN to authenticate (3 attempts allowed).
4. Once authenticated, interact with the menu:
    1: Check your balance.
    2: Deposit money.
    3: Withdraw money.
    4: Exit the program.
