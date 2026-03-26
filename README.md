# 🃏 Blackjack Game
A terminal-based Blackjack game written in C, featuring betting, multiple rounds, and player-vs-player gameplay.


## 📑 Table of Contents
- [Features](#-features)
- [Tech Stack](#tech-stack)
- [Usage](#-usage)
- [The Process](#-the-process)
- [Future Improvements](#-future-improvements)
- [Code Highlights](#-code-highlights)
- [Installation](#-installation)
- [Contributing](#-contributing)
- [License](#-license)


## ✨ Features
- Full Blackjack gameplay (Hit, Stand, Bust)
- Player vs Player system with dealer role
- Betting system with credit management
- Command-line interface with user input handling
- Multiple rounds with replay option
- Random card generation system


## 🛠️ Tech Stack <a name="tech-stack"></a>
- Language Used: C
- Tools: CLion, Git, GitHub


## 🚀 Usage
1. Enter player name
2. Enter credits to bet
3. Choose **Hit** or **Stand** for the player  
4. Choose **Hit** or **Stand** for the dealer  
5. Decide whether to play another round  

## 📍 The Process
After working on several smaller C projects and spending many hours coding, debugging, and learning, I decided to build my first complete project: a Blackjack game.

I started by implementing the player logic, then moved on to the dealer functionality. After initial testing, the game was functional but needed improvement. I refined the random card generation, improved code readability, and added comments for maintainability.

The most challenging part was implementing the hit/stand mechanism, as it required a deeper understanding of memory management and pointers which were concepts I was not yet fully comfortable with. Through research, experimentation, and persistence, I overcame these challenges and significantly improved my understanding of memory handling in C.

Finally, I added the ability to replay the game without restarting the program and implemented a betting system. After additional bug fixes and improvements, the project reached its current state.

**Key learnings:**
- Memory management and pointers in C  
- Handling user input safely  
- Writing clean, readable, and well-documented code  

## 🔧 Future Improvements
- Implement AI-based dealer logic (Player vs Computer mode)
- Replace RNG system with a full deck simulation
- Add card shuffling algorithm (e.g. Fisher-Yates)
- Improve UI with ASCII card visuals

## 💡 Code Highlights
- Implemented dynamic memory handling for gameplay logic
- Designed modular structure using multiple `.c` and `.h` files
- Built input validation to handle incorrect user input
- Implemented randomized card generation logic

## 💾 Installation

Follow these steps to clone, compile, and run the Blackjack game in C. This guide works for **Linux, macOS, and Windows** (via Git Bash or WSL).

### 1. Clone the repository
Make sure you have git installed. Open your terminal or command prompt and run:

```bash

git clone https://github.com/XM-George/BlackJack-Game.git

cd BlackJack-Game

```

### 2. Compile the game
Make sure you have gcc installed on your system. Then compile all C files into one executable:

```bash

gcc *.c -o blackjack

```

### 3. Run the game

#### Windows

```bash

blackjack.exe

```

#### Linux / macOS
```bash

./blackjack

```


## 🤝 Contributing
Contributions are welcome. Feel free to fork the repository and submit a pull request.


## 📜 License
This project is licensed under the MIT License. See the LICENSE file for details.
