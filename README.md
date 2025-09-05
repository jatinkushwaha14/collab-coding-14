# Collaborative Modular Calculator

## Project Goal
Build a simple modular C++ calculator with addition, subtraction, multiplication, and division functions contributed by different team members. Practice GitHub collaboration with branching, pull requests, and code reviews.

## Project Structure
- main.cpp — driver code calling all functions
- addition.h/cpp — addition module (Person 1)
- subtraction.h/cpp — subtraction module (Person 2)
- multiplication.h/cpp — multiplication module (Person 3)
- division.h/cpp — division module (Person 4)
- test.cpp — tests for all functions (Person 5)
- README.md — this file
- CONTRIBUTING.md — guidelines for contribution and workflow

## How to Build & Run
Compile all source files:
g++ main.cpp addition.cpp subtraction.cpp multiplication.cpp division.cpp -o calculator
./calculator

Run tests:
g++ test.cpp addition.cpp subtraction.cpp multiplication.cpp division.cpp -o test_runner
./test_runner


## Contribution Guidelines

- Clone the repo and create a branch named after your module (e.g., addition-module)
- Implement your function in header (.h) and source (.cpp) files
- Include your header in main.cpp and uncomment your function call
- Commit changes and push your branch to GitHub
- Open a Pull Request (PR) against `main` branch
- At least one peer reviews your PR before merging
- Admin merges only reviewed and approved PRs

## Contact
Admin: Jatin Kushwaha  
For questions, open an issue in the repo.

Thank you for collaborating!



