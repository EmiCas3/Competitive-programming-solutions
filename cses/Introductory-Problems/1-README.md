# CSES Introductory Problems - Logic Explanation

This document details the logic and solving approach for each of the problems in the "Introductory Problems" section of CSES found in this folder.

---

## 1. Bit Strings
- **File:** `Bit-Strings.cpp`
- **Link:** https://cses.fi/problemset/task/1617
- **Logic:** The problem asks to calculate $2^n \pmod{10^9+7}$. Given that $n$ can be up to $10^6$, the **Binary Exponentiation** (Modular Exponentiation) algorithm is used. This method reduces complexity from $O(n)$ to $O(\log n)$ by processing the bits of the exponent. In each step, if the current bit is 1, the result is multiplied by the current base; in all steps, the base is squared and the modulo is applied.

## 2. Coin Piles
- **File:** `Coin-Piles.cpp`
- **Link:** https://cses.fi/problemset/task/1754/
- **Logic:** To empty two coin piles of size $a$ and $b$ using moves of (1, 2) or (2, 1), two mathematical conditions must be met:
    1. The total sum of coins $(a+b)$ must be divisible by 3, as each move removes exactly 3 coins in total.
    2. No pile can be more than double the size of the other ($a \le 2b$ and $b \le 2a$). If one pile is too large, the other will be exhausted before both can be emptied.

## 3. Increasing Array
- **File:** `Increasing-Array.cpp`
- **Link:** https://cses.fi/problemset/task/1094
- **Logic:** The array is traversed ensuring that each element is at least as large as the previous one. If the current element is smaller than the previous one, the difference needed to match it is calculated, added to a global move counter, and the current element's value is updated.

## 4. Missing Number (Versions V1-V4)
- **Link:** https://cses.fi/problemset/task/1083
- **V1 (Frequency):** Uses a boolean (or integer) array as a frequency table to mark numbers as they appear. At the end, it checks which one was not marked.
- **V2 (Sorting):** Sorts the vector of numbers and then compares each position `i` with the expected value `i+1`. The first mismatch is the missing number.
- **V3 & V3_1 (Mathematical Sum):** Uses the formula for the sum of the first $n$ natural numbers: $S = \frac{n(n+1)}{2}$. The missing number is the difference between this theoretical sum and the actual sum of the input numbers. It is crucial to use `long long` to avoid overflows.
- **V4 (XOR):** Uses the properties of the XOR operation ($x \oplus x = 0$ and $x \oplus 0 = x$). The XOR of all numbers from 1 to $n$ is calculated and then XORed with all numbers present in the input. The final result will be the missing number.

## 5. Number Spiral
- **File:** `Number-Spiral.cpp`
- **Link:** https://cses.fi/problemset/task/1071/
- **Logic:** The problem consists of finding a pattern in an infinite spiral. First, the "layer" of the coordinate $(y, x)$ is identified by taking the maximum of both values ($z = \max(y, x)$). The logic depends on whether layer $z$ is even or odd:
    - If $z$ is the column value ($x > y$), the behavior depends on whether $x$ is even or odd.
    - If $z$ is the row value ($y \ge x$), a symmetrical but inverted logic is followed.
    The base value of the square of the previous layer is calculated and the offset is added/subtracted accordingly.

## 6. Palindrome Reorder
- **File:** `Palindrome-Reorder.cpp`
- **Link:** https://cses.fi/problemset/task/1755
- **Logic:** To form a palindrome, at most one character can have an odd frequency. 
    1. Frequencies for each letter are counted.
    2. If there is more than one character with an odd frequency, it prints "NO SOLUTION".
    3. The left half of the palindrome is built using half of the occurrences of each even character.
    4. The odd character (if it exists) is placed in the center.
    5. The inverted left half is appended to the end to complete the palindrome.

## 7. Permutations
- **File:** `Permutations.cpp`
- **Link:** https://cses.fi/problemset/task/1070
- **Logic:** A "beautiful" permutation is one where the absolute difference between adjacent elements is greater than 1.
    - For $n=2$ and $n=3$, no solution exists.
    - For $n \ge 4$, a simple strategy is to print all even numbers first ($2, 4, 6 \dots$) and then all odd numbers ($1, 3, 5 \dots$). This ensures that the difference between the last even and the first odd number is acceptable.

## 8. Repetitions
- **File:** `Repetitions.cpp`
- **Link:** https://cses.fi/problemset/task/1069/
- **Logic:** The DNA string is traversed by comparing the current character with the previous one. If they are the same, a current sequence counter is incremented. If they are different, the counter is reset. A variable is maintained to store the maximum value reached by the counter throughout the process.

## 9. Trailing Zeros
- **File:** `Trailing-Zeros.cpp`
- **Link:** https://cses.fi/problemset/task/1618/
- **Logic:** The number of trailing zeros in $n!$ depends on how many times the factor 10 appears, which is equivalent to the number of pairs of factors (2, 5). Since there are always more factors of 2 than 5, it suffices to count the factors of 5 in the decomposition of all numbers from 1 to $n$. **Legendre's Formula** is used: $\lfloor n/5 \rfloor + \lfloor n/25 \rfloor + \lfloor n/125 \rfloor \dots$

## 10. Two Knights
- **File:** `Two-Knights.cpp`
- **Link:** https://cses.fi/problemset/task/1072/
- **Logic:** For a $k \times k$ board, the total number of ways to place two knights is $\binom{k^2}{2} = \frac{k^2(k^2-1)}{2}$. From this total, we subtract the positions where the knights attack each other. Two knights attack each other if they are within a $2 \times 3$ or $3 \times 2$ rectangle. In a $k \times k$ board, there are $(k-1)(k-2)$ rectangles of size $2 \times 3$ and $(k-2)(k-1)$ rectangles of size $3 \times 2$. Each rectangle allows for 2 attacking configurations. Therefore, $4(k-1)(k-2)$ positions are subtracted.

## 11. Two Sets
- **File:** `Two-Sets.cpp`
- **Link:** https://cses.fi/problemset/task/1092
- **Logic:** First, it checks if the total sum $S = \frac{n(n+1)}{2}$ is even. If it is odd, it is impossible to divide the numbers into two sets of equal sum. If it is even, the goal is to form a set whose sum is $S/2$. The implemented algorithm uses a distribution strategy to split the numbers between the two sets, handling even and odd $n$ cases separately to ensure balance.

## 12. Weird Algorithm
- **File:** `Weird-Algorithm.cpp`
- **Link:** https://cses.fi/problemset/task/1068
- **Logic:** Direct implementation of the **Collatz Conjecture**. Given a number $n$:
    - If $n$ is even, divide it by 2.
    - If $n$ is odd, multiply it by 3 and add 1.
    The process repeats until $n$ reaches 1. `long long` must be used to avoid overflows during intermediate calculations.