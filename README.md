# Coding Problems

https://www.dailycodingproblem.com/

## Problem 1
This problem was recently asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem1.cpp)

---

## Problem 2
This problem was asked by Uber.

Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem2.cpp)

---

## Problem 3
This problem was asked by Google.

Given the root to a binary tree, implement serialize(root), which serializes the tree into a string, and deserialize(s), which deserializes the string back into the tree.

For example, given the following Node class

    class Node:
        def __init__(self, val, left=None, right=None):
            self.val = val
            self.left = left
            self.right = right
    The following test should pass:
    
    node = Node('root', Node('left', Node('left.left')), Node('right'))
    assert deserialize(serialize(node)).left.left.val == 'left.left'
[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem3.cpp)

---

## Problem 4
This problem was asked by Stripe.

Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

You can modify the input array in-place.

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem4.cpp)

---

## Problem 5
This problem was asked by Jane Street.

cons(a, b) constructs a pair, and car(pair) and cdr(pair) returns the first and last element of that pair. For example, car(cons(3, 4)) returns 3, and cdr(cons(3, 4)) returns 4.

Given this implementation of cons:

    def cons(a, b):
        def pair(f):
            return f(a, b)
        return pair

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem5.py)

---

## Problem 6
This problem was asked by Google.

An XOR linked list is a more memory efficient doubly linked list. Instead of each node holding next and prev fields, it holds a field named both, which is an XOR of the next node and the previous node. Implement an XOR linked list; it has an add(element) which adds the element to the end, and a get(index) which returns the node at index.

If using a language that has no pointers (such as Python), you can assume you have access to get_pointer and dereference_pointer functions that converts between nodes and memory addresses.

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem6.cpp)

---

## Problem 7
This problem was asked by Facebook.

Given the mapping a = 1, b = 2, ... z = 26, and an encoded message, count the number of ways it can be decoded.

For example, the message '111' would give 3, since it could be decoded as 'aaa', 'ka', and 'ak'.

You can assume that the messages are decodable. For example, '001' is not allowed.

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem7.cpp)

---

## Problem 8
A unival tree (which stands for "universal value") is a tree where all nodes under it have the same value.

Given the root to a binary tree, count the number of unival subtrees.

For example, the following tree has 5 unival subtrees:

       0
      / \
     1   0
        / \
       1   0
      / \
     1   1

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem8.cpp)

---

## Problem 9
This problem was asked by Airbnb.

Given a list of integers, write a function that returns the largest sum of non-adjacent numbers. Numbers can be 0 or negative.
(
For example, [2, 4, 6, 2, 5] should return 13, since we pick 2, 6, and 5. [5, 1, 1, 5] should return 10, since we pick 5 and 5.

Follow-up: Can you do this in O(N) time and constant space?

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem9.cpp)

---

## Problem 10
[TREEORD](https://www.spoj.com/problems/TREEORD/)

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem10.cpp)

---

## Problem  11
[FIREESC](https://www.codechef.com/problems/FIRESC)

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem11.cpp)

---

## Problem 12
[BUGLIFE](https://www.spoj.com/problems/BUGLIFE/)

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem12.cpp)

---

## Problem 13
[CAM5](https://www.spoj.com/problems/CAM5/)

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem13.cpp)

---

## Problem 14
[GCPC11J](https://www.spoj.com/problems/GCPC11J/)

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem14.cpp)

---

## Problem 15
[KFSTB](https://www.spoj.com/problems/KFSTB/)

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem15.cpp)

---

## Problem 16
[PT07Y](https://www.spoj.com/problems/PT07Y/)

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem16.cpp)

---

## Problem 17
[PT07Z](https://www.spoj.com/problems/PT07Z/)

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem17.cpp)

---

## Problem 18
[LABYR1](https://www.spoj.com/problems/LABYR1/)

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem18.cpp)

---

## Problem 19
[PARADOX](https://www.spoj.com/problems/PARADOX/)

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem19.cpp)

---

## Problem 20
[SWEETS EATING](https://codeforces.com/problemset/problem/1253/C)

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem20.cpp)

---

## Problem 189
This problem was asked by Google.

Given an array of elements, return the length of the longest subarray where all its elements are distinct.

For example, given the array [5, 1, 3, 5, 2, 3, 4, 1], return 5 as the longest subarray of distinct elements is [5, 2, 3, 4, 1].

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem189.cpp)


---

## Problem 190
This problem was asked by Facebook.

Given a circular array, compute its maximum subarray sum in O(n) time. A subarray can be empty, and in this case the sum is 0.

For example, given [8, -1, 3, 4], return 15 as we choose the numbers 3, 4, and 8 where the 8 is obtained from wrapping around.

Given [-4, 5, 1, 0], return 6 as we choose the numbers 5 and 1.

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem190.cpp)

--- 

## Problem 191
This problem was asked by Stripe.

Given a collection of intervals, find the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

Intervals can "touch", such as [0, 1] and [1, 2], but they won't be considered overlapping.

For example, given the intervals (7, 9), (2, 4), (5, 8), return 1 as the last interval can be removed and the first two won't overlap.

The intervals are not necessarily sorted in any order.

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem191.cpp)

---

## Problem 192
This problem was asked by Google.

You are given an array of nonnegative integers. Let's say you start at the beginning of the array and are trying to advance to the end. You can advance at most, the number of steps that you're currently on. Determine whether you can get to the end of the array.

For example, given the array [1, 3, 1, 2, 0, 1], we can go from indices 0 -> 1 -> 3 -> 5, so return true.

Given the array [1, 2, 1, 0, 0], we can't reach the end, so return false.

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem192.cpp)

---

## Problem 193
This problem was asked by Affirm.

Given a array of numbers representing the stock prices of a company in chronological order, write a function that calculates the maximum profit you could have made from buying and selling that stock. You're also given a number fee that represents a transaction fee for each buy and sell transaction.

You must buy before you can sell the stock, but you can make as many transactions as you like.

For example, given [1, 3, 2, 8, 4, 10] and fee = 2, you should return 9, since you could buy the stock at 1 dollar, and sell at 8 dollars, and then buy it at 4 dollars and sell it at 10 dollars. Since we did two transactions, there is a 4 dollar fee, so we have 7 + 6 = 13 profit minus 4 dollars of fees.

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem193.cpp)

---

## Problem 194

This problem was asked by Facebook.

Suppose you are given two lists of n points, one list p1, p2, ..., pn on the line y = 0 and the other list q1, q2, ..., qn on the line y = 1. Imagine a set of n line segments connecting each point pi to qi. Write an algorithm to determine how many pairs of the line segments intersect.

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem194.cpp)

---

## Problem 195

This problem was asked by Google.

Let A be an N by M matrix in which every row and every column is sorted.

Given i1, j1, i2, and j2, compute the number of elements of M smaller than M[i1, j1] and larger than M[i2, j2].

[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem195.cpp)

---

## Problem 196

This problem was asked by Apple.

Given the root of a binary tree, find the most frequent subtree sum. The subtree sum of a node is the sum of all values under a node, including the node itself.

For example, given the following tree:

  5
 / \
2  -5
Return 2 as it occurs twice: once as the left leaf, and once as the sum of 2 + 5 - 5.



[Solution](https://github.com/lordcj/Daily_Coding_Problem/blob/master/Problem196.cpp)

---

