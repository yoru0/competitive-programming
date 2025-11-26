# Competitive Programming

Personal archive of C++ solutions for Codeforces, LeetCode, and HackerRank practice problems.

## Structure
- `codeforces/` - Codeforces solutions named by problem ID (e.g., `1A.cpp`, `339A.cpp`).
- `leetcode/` - LeetCode solutions named by problem number (e.g., `1.cpp`, `3335.cpp`).
- `hackerrank/` - HackerRank solutions named by challenge slug (e.g., `mini-max-sum.cpp`).
- Each platform folder has an `output/` directory (ignored by git) for scratch binaries or local runs.

## Running a solution
Every file is standalone. Compile and run directly, for example:
```bash
g++ -std=c++17 -O2 -pipe -static -s codeforces/339A.cpp -o codeforces/output/339A && codeforces/output/339A
```
