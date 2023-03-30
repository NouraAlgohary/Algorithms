# Algorithms

## Brute Force 
It goes through all possible choices until the solution is found 

#### Template
```
For each element in the array
  if element equal target value then
    print success message
    return its index
  if element is not found 
    print Value not found message
    return -1
```
Return all choices
```
For each element in the searchList
  if element equal target value then
    Add its index to a list of occurrences
if the list of occurrences is empty
  raise ValueError
otherwise
  return the list occurrences
```
#### Examples

#### Read about Brute Force 
- [Codeacademy](https://www.codecademy.com/learn/learn-data-structures-and-algorithms-with-python/modules/brute-force-algorithms/cheatsheet)
- [GeeksforGeeks](https://www.geeksforgeeks.org/brute-force-approach-and-its-pros-and-cons/)

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
The DFS algorithm works as follows:
1. Start by putting any one of the graph's vertices on top of a stack.
2. Take the top item of the stack and add it to the visited list.
3. Create a list of that vertex's adjacent nodes. Add the ones which aren't in the visited list to the top of the stack.
4. Keep repeating steps 2 and 3 until the stack is empty.<br/>
Note: A graph can have more than one DFS traversal.
![dfs](https://user-images.githubusercontent.com/103903785/218292569-336bba74-eff9-4572-a02d-8414481287c6.png)

#### Template
```
Initialize an empty stack for storage of nodes, S.
For each vertex u, define u.visited to be false.
Push the root (first node to be visited) onto S.
While S is not empty:
    Pop the first element in S, u.
    If u.visited = false, then:
        U.visited = true
        for each unvisited neighbor w of u:
            Push w into S.
End process when all nodes have been visited.
```
#### Examples
- [Minimum Fuel Cost to Report to the Capital](https://github.com/NouraAlgohary/Algorithms/tree/main/Depth%20First%20Search%20(DFS)/Minimum%20Fuel%20Cost%20to%20Report%20to%20the%20Capital)

#### Problems

#### Read about DFS
- [LeetCode - A Beginners guid to BFS and DFS](https://leetcode.com/discuss/study-guide/1072548/A-Beginners-guid-to-BFS-and-DFS)
- [GeeksforGeeks](https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/)
- [Briliant](https://brilliant.org/wiki/depth-first-search-dfs/)

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

## Sliding Window 
It's used for optimizing loops. 

#### Template
```

```
#### Examples

#### Read about Brute Force 
- [Medium](https://itnext.io/sliding-window-algorithm-technique-6001d5fbe8b3)
- [GeeksforGeeks](https://www.geeksforgeeks.org/window-sliding-technique/)

## Dijkstra Algorithm

## Floyd Warshall Algoithm

## Bellman Ford Algorithm

## Binary Search Algorithm 
It's used to search for an element in a sorted array

Ex1 
![Binary Search 1](https://user-images.githubusercontent.com/103903785/228853053-d6eb3551-dd7b-422a-8877-1e95fa55f1b3.png)
Ex2
![Binary Search 2](https://user-images.githubusercontent.com/103903785/228853033-786ec4d7-ffca-44ac-b23c-ed6391eb48d4.png)


#### Template
1. Iteration Method
```
    binarySearch(arr, x, low, high)
        repeat till low = high
               mid = (low + high)/2
                   if (x == arr[mid])
                   return mid
   
                   else if (x > arr[mid]) // x is on the right side
                       low = mid + 1
   
                   else                  // x is on the left side
                       high = mid - 1
```
2. Recursive Method (Divide and Conquer approach)

```
    binarySearch(arr, x, low, high)
           if low > high
               return False 
   
           else
               mid = (low + high) / 2 
                   if x == arr[mid]
                   return mid
       
               else if x > arr[mid]        // x is on the right side
                   return binarySearch(arr, x, mid + 1, high)
               
               else                        // x is on the left side
                   return binarySearch(arr, x, low, mid - 1) 
```

#### Examples
- [Binary Search.cpp](https://github.com/NouraAlgohary/Algorithms/blob/main/Binary%20Search/Binary%20Search.cpp_)
- [Binary Search.py](https://github.com/NouraAlgohary/Algorithms/blob/main/Binary%20Search/Binary%20Search.py)

#### Read about Binary Search
[Geeks for Geeks](https://www.geeksforgeeks.org/binary-search/)

## Floyd’s Cycle Detection Algorithm (Hare-Tortoise Algorithm)
Using two pointers(Hare & Tortoise) to traverse the sequence(Linked List) at differernt speeds
- Hare will reach the tail of the linked list(null), which means that there is no cycle in it.
- Hare will meet tortoise, which means that there is a cycle

![Hare-Tortoise Algorithm](https://user-images.githubusercontent.com/103903785/228295688-0ca0cdaa-c11f-42ca-893f-ebc95143f8ff.png)

#### Pseudocode
1) Initialize two-pointers and start traversing the linked list.
2) Move the slow pointer by one position.
3) Move the fast pointer by two positions.
4) If both pointers meet at some point then a loop exists and if the fast pointer meets the end position then no loop exists.

#### Examples
- [Linked List Cycle](https://github.com/NouraAlgohary/Algorithms/tree/main/Floyd%E2%80%99s%20Cycle%20Detection%20Algorithm)

#### Read about Floyd’s Cycle-Finding
- [Geeks for Geeks](https://www.geeksforgeeks.org/floyds-cycle-finding-algorithm/)
- [Code Studio](https://www.codingninjas.com/codestudio/library/floyds-cycle-finding-algorithm)
