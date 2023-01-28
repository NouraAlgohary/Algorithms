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

#### Read about Backtracking
- [LeetCode - A Beginners guid to BFS and DFS](https://leetcode.com/discuss/study-guide/1072548/A-Beginners-guid-to-BFS-and-DFS)

## Breadth First Search (BFS)
DFS is used for **traverse or searsh** in a tree or graph. Starting from the root node (level 0) then visiting all the nodes at the next level (level 1) before moving to the next level (level 2)

![BFS](https://user-images.githubusercontent.com/103903785/214479205-a14c2dbd-e3b7-445e-86bf-ea101fb9a654.png)

#### Template
```
BFS(graph, source_node):                 
      Define a Queue q
      q.enqueue(source_node)    # inserting s in queue until all its neighbour vertices are marked.

      mark source_node as visited.
      while (q is not empty)
           # removing that vertex from queue, whose neighbour will be visited now
           node  =  q.dequeue( )

          # processing all the neighbours of the node
          for all neighbours neighbour of node in graph
               if neighbour is not visited 
                        q.enqueue(neighbour)             # Stores w in Q to further visit its neighbour
                        mark neighbour as visited.
```

#### Examples
- [Same Tree.cpp](https://github.com/NouraAlgohary/Algorithms/blob/main/Breadth%20First%20Search%20(BFS)/Same%20Tree.cpp_)
- [Same Tree.py](https://github.com/NouraAlgohary/Algorithms/blob/main/Breadth%20First%20Search%20(BFS)/Same%20Tree.py)

#### Problems
- [LeetCode](https://leetcode.com/tag/breadth-first-search/)

#### Read about Backtracking
- [LeetCode - A Beginners guid to BFS and DFS](https://leetcode.com/discuss/study-guide/1072548/A-Beginners-guid-to-BFS-and-DFS) 
- [GeeksforGeeks](https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/)

## Dijkstra Algorithm

## Floyd Warshall Algoithm

## Bellman Ford Algorithm

## Binary Search Algorithm 
