# Algorithmic efficiency comparison metrics

Compiled with:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long comparison_algorithms.c -o comparison_algorithms
```
## Run 1

```
Naive algorithm result: 625025000
Naive algorithm time: 2.487197 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000096 seconds
```
## Run 2

```
Naive algorithm result: 625025000
Naive algorithm time: 2.487293 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000097 seconds
```
## Run 3

```
Naive algorithm result: 625025000
Naive algorithm time: 2.486729 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000096 seconds
```
| Run		| Naive (A) time (s) | Single-pass (B) time (s) |
| 1   		| 2.487197           | 0.000096 	      	|
| 2   		| 2.487293 	     | 0.000097			|
| 3   		| 2.486729 	     | 0.000096 		|
| **Average** 	| **2.487073** 	     | **0.000096** 	      	|

## Relative difference

Implementation A (naive) is ~25,800 times slower than implementation B (single-pass).
Avg. A / avg. B = 2.476729 / 0.000097 ~= 25,817

## Conclusion
Naive checks about 1.25 billion items, when 50,000 checks are enough; it also counts the same even numbers over and over (625 million times instead of 25,000).
