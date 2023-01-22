# Algorithms

## Backtracking
Backtracking is used when searching for every possible combinations. It's **check the subsequences/combinations/permutations of some group of letters/numbers**.
Based on Recursion.

> Conceptually, one can imagine the procedure of backtracking as the tree traversal. Starting from the root node, one sets out to search for solutions that are located at the leaf nodes. Each intermediate node represents a partial candidate solution that could potentially lead us to a final valid solution. At each node, we would fan out to move one step further to the final solution, i.e. we iterate the child nodes of the current node. Once we can determine if a certain node cannot possibly lead to a valid solution, we abandon the current node and backtrack to its parent node to explore other possibilities.

#### Template
```
def backtrack(candidate):
    if find_solution(candidate):
        output(candidate)
        return
    
    # iterate all possible candidates.
    for next_candidate in list_of_candidates:
        if is_valid(next_candidate):
            # try this partial candidate solution
            place(next_candidate)
            # given the candidate, explore further.
            backtrack(next_candidate)
            # backtrack
            remove(next_candidate)
```

#### Examples
- [NQueens (Number of solutions).cpp](https://github.com/NouraAlgohary/Algorithms/tree/main/Backtracking)
- [Palindrome Partitioning (Number of palindrome).cpp](https://github.com/NouraAlgohary/Algorithms/blob/main/Backtracking/Palindrome%20Partitioning.cpp)
- [Palindrome Partitioning (Number of palindrome).py](https://github.com/NouraAlgohary/Algorithms/blob/main/Backtracking/Palindrome%20Partitioning.py)

#### Read about Backtracking
- [LeetCode](https://leetcode.com/explore/featured/card/recursion-ii/472/backtracking/2654/)
- [GeeksforGeeks](https://www.geeksforgeeks.org/backtracking-algorithms/)


## Kadane's Algorithm

## Depth First Search (DFS)
