# Competitive Programming Repository

This repository contains my **competitive programming practice** for codeforces, via CP-31, organized for fast lookup, reuse, and post-contest analysis.

Note:
use https://www.scaler.com/topics/cpp/online-cpp-compiler/ for easy compiling
and use https://www.tle-eliminators.com/cp-sheet for easy tracking

The focus is on:
- clean problem isolation
- difficulty-based progression
- reusable templates
- preserving live contest work without polluting solved sets

---

## 📁 Repository Structure
```
├── 800/
│ ├── problem-name/
│ │ └── main.cpp
│ └── ...
├── 900/
│ └── ...
├── 1000/
│ └── ...
├── live/
│ └── contest-id/
│ ├── A.cpp
│ ├── B.cpp
│ └── ...
├── template/
│ └── main.cpp
├── CP-Handbook.pdf
└── README.md
```
---

## 🧠 Difficulty Folders (`800`, `900`, `1000`, …)

- Each folder corresponds to **Codeforces difficulty ratings**
- Inside each difficulty folder:
  - One subfolder per problem
  - Folder name = problem name or ID
  - Each problem is self-contained (usually a single `main.cpp`)

This makes it easy to:
- revisit weak difficulty bands
- track progression over time
- avoid mixing unrelated problems

---

## ⚡ Live Contests (`/live`)

- Contains code written **during live contests**
- Organized by contest ID (e.g. `live/2179/`)
- Files named by problem letter (`A.cpp`, `B.cpp`, …)

These solutions may be:
- unfinished
- unoptimized
- messy

That’s intentional — this folder preserves **real contest conditions**.

Cleaned-up or re-solved versions should eventually move to the appropriate difficulty folder.

---

## 🧩 Templates (`/template`)

- Boilerplate code for:
  - fast I/O
  - common macros
  - standard headers
- Used as a starting point for new problems

If you’re copying code manually instead of using this folder, you’re wasting time.

---

## 📘 CP Handbook

- `CP-Handbook.pdf` is included as a reference
- Used alongside problem solving for:
  - algorithms
  - data structures
  - competitive programming patterns

This repo is practice-first; the book is support material, not a replacement.

---

## 🛠 Language & Environment

- Language: **C++**
- Standard: `C++17` (unless explicitly required otherwise)
- Platform: primarily **Codeforces**

---

## 📌 Notes

- No guarantee that all solutions are optimal
- Some problems may have multiple valid approaches — only one is stored
- The goal is **consistency and iteration**, not perfection

---

## 📈 Future Improvements (Planned)

- Add tags (e.g. `dp`, `greedy`, `graphs`)
- Add brief solution notes for tricky problems
- Track solved count per difficulty

---

