/*
-----------------------------------------------
    📘 Book Allocation Problem
-----------------------------------------------

You are given an array `arr[]` where each element represents 
the number of pages in a book. There are `n` books and `m` students.

Each student must be assigned a **contiguous sequence** of books.
Your task is to allocate the books in such a way that the
**maximum number of pages assigned to a student is minimized**.

-----------------------------------------------
Example:
-----------------------------------------------
Input:
    arr = [12, 34, 67, 90]
    m = 2

Output:
    113

Explanation:
    Allocation 1 → [12, 34, 67] and [90]
    Maximum pages = 113
    This is the minimum possible maximum.

-----------------------------------------------
Constraints:
-----------------------------------------------
1 <= n <= 10^5
1 <= arr[i] <= 10^9
1 <= m <= n
-----------------------------------------------
*/
