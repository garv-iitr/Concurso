# Roadmap
- Number Theory
    - GCD
    - Binary Exponentiation 
    - Modular Arithmetic
    - Sieve
    - Extended Euclidean Algorithm
    - Euler Totient Function 
- Data Structures 
    - STL (Standard Template Library)
    - Trie
    - Segment Tree
      - Merge Sort Tree
      - Persistent Segment Trees
  - Binar Indexeded Trees
  - Sqrt Decomposition
    - Mo's Algorithm
  - *Heavy Ligth Decomposition*
  - _Suffix Arrays_
- Graph Theory
  - BFS
  - DFS
  - Dijkstra
  - Minimum Spanning Tree
  - Disjoint Set Union 
  - Lowest Common Ancestor
  - *Bridges And Articulation Points*
  - *Strongly Connected Components*
    - Tarjan's Algorithm
  - Miniumum and Maximum Flows
    - Dinic's Algorithm
  - Euler Tour
- Dynamic Programming
  - Bit Masking
  - Sum over Subsets
  - DP on Trees
- Miscellaneous
  - Binary Search
  - Game Theory
  - String Searching
    - Rabin-Karp Algorithm
    - Knuth-Morris-Pratt Algorithm
    - Matrix Exponentiation
    - Fast Fourier Transform 

# CP Course

## Overflow, Precision Errors, Calculation Order
### Decreasing order of Significance
- Double
- Float 
- Long Long int
- long int
- int 
- char
### Operator Precedence
|    Category    |              Operator              | Associativity |
| :------------: | :--------------------------------: | :-----------: |
|    Postfix     |          () [] -> . ++ --          |      LR       |
|     Unary      |  + - ! ~ ++ -- (type)* &  sizeof   |      RL       |
| Multiplicative |               * / %                |      LR       |
|    Additive    |                + -                 |      LR       |
|     Shift      |               << >>                |      LR       |
|   Relational   |             < <= > =>              |      LR       |
|    Equality    |               == !=                |      LR       |
|  Bitwise AND   |                 &                  |      LR       |
|  Bitwise XOR   |                 ^                  |      LR       |
|   Bitwise OR   |                 \|                 |      LR       |
|  Logical AND   |                 &&                 |      LR       |
|   Logical OR   |                \|\                 |      LR       |
|  Conditional   |                 ?:                 |      RL       |
|   Assignment   | = += -= *= /= %= >>= <<= &= ^= \|= |      RL       |
|     Comma      |                 ,                  |      LR       |
### Int range
- -10<sup>9</sup> < <font color = "cyan"> int </font> < 10<sup>9</sup> 
- -10<sup>12</sup> < <font color = "yellow"> long int </font> < 10<sup>12</sup> 
- -10<sup>18</sup> < <font color = "red"> long long int </font> < 10<sup>18</sup> 

## Conditions , Loops , Jump Statements
```
cout << (a != b) ;
```
It is a valid code.

## C++ Strings

- getline(cin, string) takes input of whole line including white spaces 
- cin.ignore() ignores the white spaces after an input and moves to the next line 
- string.push_back() inserts a character a end of the string and is faster than concatenating the string with character

##  Arrays and Size limits



