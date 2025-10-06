/*
Painter's Partition Problem

You are given a list of N boards, where the i-th board has length boards[i].
There are K painters available. Each painter paints contiguous boards (i.e., a painter can only paint a block of consecutive boards).
All painters start at the same time and each painter paints at the same rate: 1 unit of board length takes 1 unit of time.
A painter cannot paint more than one board at the same time, and a board cannot be painted by more than one painter.

Task:
Partition the array of boards into at most K contiguous partitions (one partition per painter) so that the time to paint all boards (the maximum total length assigned to any painter) is minimized. Return that minimum possible time.

Input:
- N: number of boards (integer)
- K: number of painters (integer)
- boards: array of N positive integers representing board lengths

Output:
- A single integer: the minimum time required to paint all boards using at most K painters.

Constraints (typical):
- 1 ≤ N ≤ 10^5
- 1 ≤ K ≤ N
- 1 ≤ boards[i] ≤ 10^9

Example:
N = 4, K = 2, boards = [10, 20, 30, 40]
One optimal partition is: painter1 -> [10,20,30] (total 60), painter2 -> [40] (total 40)
Minimum possible time = 60
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(vector<int> &arr, int maxAllowedTime, int n, int m)
{
    int painter = 1;
    int time = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedTime)
        {
            return false;
        }
        if (time + arr[i] <= maxAllowedTime)
        {
            time += arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }
    return painter > m ? false : true;
}

int findMinTime(vector<int> &arr, int n, int m)
{
    // EdgeCase if painters > Boards that is invalid cosidering everyone must paint atleast one
    if (m > n)
    {
        return -1;
    }
    int sum = 0;
    for (int item : arr)
    {
        sum += item;
    }

    int st = *max_element(arr.begin(), arr.end());
    int end = sum;
    int ans = -1;

    while (st <= end)
    {
        int maxAllowedTime = st + (end - st) / 2; //MID value
        if (isValid(arr, maxAllowedTime, n, m))
        {
            ans = maxAllowedTime;
            end = maxAllowedTime - 1;
        }
        else
        {
            st = maxAllowedTime + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << findMinTime(arr, n, m) << endl;
}