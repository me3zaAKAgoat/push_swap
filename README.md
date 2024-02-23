<h1 align="center">Push_Swap Stack Sorting Project</h1>

---

## Overview

Push_swap is a sorting algorithm project aimed at efficiently sorting data on a stack using a limited set of instructions. The goal is to develop a C program, called push_swap, that calculates and displays the smallest set of instructions required to sort a stack of integers provided as arguments.

---

## Key Objectives

This project offers an opportunity to deepen understanding of sorting algorithms and algorithmic complexity while honing essential skills in C programming, problem-solving, and memory management.

## Algorithm Used

The Push_Swap algorithm is designed to efficiently sort data on a stack by minimizing the number of actions required. Here's an overview of the algorithm:

1. **Retrieving the Longest Increasing Subsequence (LIS)**: The algorithm begins by identifying the Longest Increasing Subsequence (LIS) from the input data. Any numbers that are not part of the LIS are pushed to a separate stack, STACK_B.

2. **Iteration through STACK_B**: The algorithm iterates through the numbers in STACK_B, calculating the number of moves it would take on each stack to have the numbers put in their correct place.

3. **Determining Move Types**:
   - If a number is between stack_A[size_of_stack_A - 1] and stack_A[0], only one check is needed.
   - For numbers between stack_A[i] and stack_A[i + 1], where i ranges from 0 to <size_of_stack_A / 2>.
   - For numbers between stack_A[j] and stack_A[j - 1], where j ranges from <size_of_stack_A - 1> to <size_of_stack_A / 2>.
   - For numbers that don't fit into the above categories, the algorithm finds the position of the maximum number in stack A and determines where the number needs to be placed.

4. **Minimizing Moves**: The algorithm evaluates which number has the smallest sum of the absolute value of moves needed in both stacks. It then moves that number to STACK_A. To optimize, rr and rrr moves are used whenever there's an equal number of similarly signed moves that should be made on both stacks.

5. **Repeating until STACK_B is Empty**: The algorithm repeats steps 2-4 until STACK_B is empty, effectively sorting the data on STACK_A.

---

## Conclusion

Push_swap challenges developers to optimize sorting algorithms while showcasing their skills in C programming, problem-solving, and efficient memory management. Completing this project enhances understanding of algorithmic complexity and lays a solid foundation for future software development endeavors.
