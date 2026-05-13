# 🎂 Birthday Cake Candles — Algorithm Analysis

Implementation and analysis of the **Birthday Cake Candles** problem using two different algorithmic approaches in C++.

---

## 📌 Problem Description

Given an array of candle heights, find how many candles have the **maximum height** — those are the ones that can be blown out.

---

## 📁 Project Structure

```
├── main.cpp          # Algorithm 1: Non-Recursive (Iterative)
├── main2.cpp         # Algorithm 2: Recursive
└── Birthday_Cake_Candles_Algorithms.pdf   # Full documentation
```

---

## ⚙️ Algorithms

### Algorithm 1 — Non-Recursive (Iterative)
Uses a single `for` loop to scan through the array, tracking the maximum height and counting its occurrences.

**Time Complexity:** `O(n)`

### Algorithm 2 — Recursive
Uses recursion to process each candle one at a time, passing the current max and count as parameters.

**Time Complexity:** `O(n)`

---

## 📊 Comparison

| Aspect | Non-Recursive | Recursive |
|---|---|---|
| Approach | Iterative loop | Recursive calls |
| Extra Memory | None | Call stack overhead |
| Debugging | Easy | Harder to trace |
| Time Complexity | O(n) | O(n) |
| Large Inputs | ✅ Safe | ⚠️ Risk of stack overflow |

---

## 🚀 How to Run

```bash
# Compile Non-Recursive
g++ main.cpp -o main
./main

# Compile Recursive
g++ main2.cpp -o main2
./main2
```

---

## 🛠️ Language
C++

