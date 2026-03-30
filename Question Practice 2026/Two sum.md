# 📌 Two Sum — Revision Notes
> **LeetCode #1 &nbsp;|&nbsp; Array & Hash Map &nbsp;|&nbsp; Difficulty: Easy**

---

## ⚡ Quick Summary

| Category | Details |
|---|---|
| **Problem Type** | Find two indices whose values sum to target |
| **Input** | Array of integers + a target integer |
| **Output** | Indices `[i, j]` such that `nums[i] + nums[j] == target` |
| **Brute Force** | O(n²) time · O(1) space |
| **Optimal (Hash Map)** | O(n) time · O(n) space |
| **Key Data Structure** | `std::unordered_map<int, int>` |

---

## 📖 Problem Statement

Given an array of integers `nums` and an integer `target`, return the **indices** of the two numbers that add up to `target`. Exactly one solution exists, and you cannot use the same element twice.

```
Input:  nums = [2, 7, 11, 15],  target = 9
Output: [0, 1]
Why:    nums[0] + nums[1] = 2 + 7 = 9  ✓
```

---

## 🐢 Approach 1 — Brute Force (Slow)

**The sock-matching analogy:** Pick up one sock and compare it to every other sock in the pile, one by one. It works — but it's painfully slow.

**How it works:** Use two nested loops. Pick every pair `(i, j)` and check if they sum to target.

| Time | Space |
|---|---|
| **O(n²) ← SLOW** | O(1) |

> **Why it's slow:** 100 numbers → up to 9,900 comparisons. 200 numbers → 39,800 comparisons. Grows *quadratically*.

---

## 🚀 Approach 2 — Hash Map (Optimal)

**The "Lost and Found Notebook" analogy:** Write down each number you've seen and where you saw it. For every new number, ask the notebook: *"Do you have the partner I need?"*

### Step-by-Step Logic

1. Look at the current number.
2. Calculate: `neededNumber = target − currentNumber`
3. Check if `neededNumber` is already in the notebook.
4. **YES →** return both indices. &nbsp;**NO →** add `currentNumber` to the notebook.

| Time | Space |
|---|---|
| **O(n) ← FAST** | O(n) — the notebook |

---

## 💻 C++ Solution

```cpp
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    // Our "Notebook": Key = number, Value = its index
    unordered_map<int, int> notebook;

    for (int i = 0; i < nums.size(); i++) {
        int currentNumber = nums[i];
        int neededNumber  = target - currentNumber;

        // Is the complement already in the notebook?
        if (notebook.find(neededNumber) != notebook.end()) {
            return {notebook[neededNumber], i};  // Found the pair!
        }

        // Not yet — write this number down
        notebook[currentNumber] = i;
    }
    return {};  // No pair found
}
```

---

## 🔍 Line-by-Line Breakdown

| Code | What it means |
|---|---|
| `unordered_map<int,int> notebook` | Create the notebook (key = number, value = index) |
| `target - currentNumber` | Calculate what partner number we need |
| `notebook.find(neededNumber)` | Ask: *"Have we seen this number before?"* |
| `!= notebook.end()` | If result ≠ "not found" → we found it! |
| `notebook[neededNumber]` | Retrieve the stored index of that number |
| `notebook[currentNumber] = i` | Save this number and its index into the notebook |

---

## 🎯 Walkthrough Example

```
nums = [2, 7, 11, 15]   |   target = 9
```

| Step | Current | Needed (9 − n) | In Notebook? | Notebook after |
|---|---|---|---|---|
| 1 | `nums[0] = 2` | `9 - 2 = 7` | No ✗ | `{2: 0}` |
| 2 | `nums[1] = 7` | `9 - 7 = 2` | **YES ✓ (at idx 0)** | → **Return [0, 1]** |

---

## 📚 `std::map` vs `std::unordered_map`

| Feature | `std::map` | `std::unordered_map` |
|---|---|---|
| Ordering | Sorted (neat bookshelf) | Not sorted (messy drawers) |
| Look-up speed | O(log n) — a bit slower | **O(1) average — near instant ⚡** |
| Under the hood | Red-Black Tree | Hash Table |
| Use when | You need sorted keys | **You need max speed (Two Sum!)** |

> **Hashing explained:** Like a LEGO drawer system where every brick has a secret code pointing to its drawer. You don't search — you go *directly* to the right drawer.

---

## ⚖️ Approach Comparison

| Approach | Time | Space | Verdict |
|---|---|---|---|
| Brute Force | O(n²) | O(1) | ❌ Too slow for large inputs |
| **Hash Map** | **O(n)** | **O(n)** | ✅ **Best — use this in interviews** |

---

## ⚠️ Edge Cases to Remember

- **Negative numbers** — algorithm works fine, math is the same.
- **Duplicate values** — e.g. `[3, 3]` with target `6` → returns `[0, 1]`. Works because we *check before inserting*.
- **No solution** — returns empty vector `{}`. Always handle this.
- **Single element array** — cannot form a pair, returns `{}`.

---

## ✏️ Practice: "Be the Notebook"

Trace through these by hand — write out the notebook at each step:

```
1.  nums = [1, 4, 6, 8],    target = 10   →  Answer: [1, 2]
2.  nums = [3, 2, 4],        target = 6    →  Answer: [1, 2]
3.  nums = [0, 5, 3, 10],   target = 13   →  Answer: [1, 3]
4.  nums = [-1, 2, 5, -3],  target = -4   →  Answer: [0, 3]
```

---


