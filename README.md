# Multi-Currency Banking & Ledger Engine

## About the Project

The **Multi-Currency Banking & Ledger Engine** is a C++ Object-Oriented Programming (OOP) project designed to simulate a banking management system.

The main purpose of this project is to demonstrate the four fundamental pillars of OOP: Encapsulation, Inheritance, Polymorphism, and Abstraction.

The system manages different types of bank accounts, processes financial transactions, calculates interest, deducts account fees, and maintains transaction records.

## Project Objectives

- Understand and implement Object-Oriented Programming concepts.
- Develop a structured banking management system.
- Implement multiple bank account types.
- Perform deposit and withdrawal operations.
- Calculate interest and account fees.
- Support multiple currencies.
- Maintain transaction history and financial records.

## Technologies Used

- **Programming Language:** C++
- **Concepts:** Object-Oriented Programming
- **IDE:** Code::Blocks / Visual Studio
- **Compiler:** GCC / MinGW

## OOP Concepts Implemented

### 1. Encapsulation
Private data members are used to protect sensitive account information such as account number, account holder name, and account balance.

### 2. Inheritance
Different account classes inherit common properties and functions from the abstract Account base class.

### 3. Polymorphism
Different account types implement their own interest calculation and fee deduction methods.

### 4. Abstraction
An abstract Account class defines common account functionality using pure virtual functions.

## Main Features

- Create and manage bank accounts.
- Savings Account management.
- Checking Account management.
- High Yield Account management.
- Deposit money.
- Withdraw money.
- Calculate account interest.
- Deduct account maintenance fees.
- Multiple currency support (PKR, USD, EUR).
- Currency conversion.
- Transaction history.
- Financial ledger management.
- Input validation and balance protection.

## Project Structure

```text
Multi-Currency-Banking-Ledger-System/
│
├── main.cpp
├── README.md
└── .gitignore
```

*The project structure may be expanded into separate header and source files as development progresses.*

## Account Types

| Account | Description |
|---|---|
| SavingsAccount | Designed for savings with interest calculation. |
| CheckingAccount | Designed for regular banking transactions. |
| HighYieldAccount | Designed to provide a different interest structure. |

## Supported Currencies

- PKR – Pakistani Rupee
- USD – US Dollar
- EUR – Euro

## How to Run

1. Clone the repository:

```bash
git clone https://github.com/your-username/Multi-Currency-Banking-Ledger-System.git
```

2. Open the project folder.

3. Compile the C++ file:

```bash
g++ main.cpp -o banking
```

4. Run the program:

```bash
./banking
```

On Windows:

```bash
banking.exe
```

## Learning Outcomes

Through this project, I aim to improve my understanding of:

- C++ programming.
- Object-Oriented Programming.
- Class relationships and inheritance.
- Abstract classes and virtual functions.
- Data validation and encapsulation.
- Financial transaction processing.
- Problem-solving and software development.

## Future Improvements

- Graphical User Interface (GUI).
- Database integration.
- Secure user authentication.
- Advanced transaction reporting.
- More currencies and exchange-rate support.
- File handling for permanent transaction storage.

## Author

**M Jawad Mazhar**

BS Computer Science Student

The University of Lahore

## License

This project is created for educational and learning purposes.
