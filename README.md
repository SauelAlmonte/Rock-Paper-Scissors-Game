# Rock-Paper-Scissors Game

A simple command-line Rock-Paper-Scissors game written in C++.  
The user selects Rock, Paper, or Scissors, and plays against the computer, which makes a random choice.

## Author

**Sauel Almonte**  
April 12, 2025

## Features

- Console-based gameplay
- Input validation (prevents letters or numbers outside of 1–3)
- Random computer choice using `<random>`
- Game loop repeats until there is a winner

## How to Compile

Use any C++11-compatible compiler. Example with `g++`:

```bash
g++ -std=c++11 -o rps_game main.cpp
./rps_game
```

> Make sure you're in the same directory as the source file when compiling.

## Project Structure

This is a single-file implementation for simplicity:

- `main.cpp` – Contains all logic and functions in one file
- `.gitignore` – Ignores build files, binaries, and IDE folders

## License

This project is licensed under the MIT License.
