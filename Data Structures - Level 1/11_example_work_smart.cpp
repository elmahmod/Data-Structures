// ProgrammingAdvices.com
// Mohammed Abu-Hadhoud

#include <iostream>
using namespace std;

short FindNumberAlgorithm1(short arr1[10], short Number)
{
    int n = 10;
    short pos = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == Number)
        {
            pos = i;

            // It will continue searching until the end.
        }
    }

    return pos;
}

short FindNumberAlgorithm2(short arr1[10], short Number)
{
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == Number)
        {
            return i;

            // It stops immediately when the number is found.
        }
    }

    return -1;
}

// Interview question:
// Do they have the same speed?
//
// The answer is neither yes nor no.
//
// They have the same speed if the number is in the last element of the array.
//
// However, Algorithm 2 is much faster if the number is at the beginning
// or in the middle of the array.
//
// Both algorithms have the same Big O notation: O(n).
// However, having the same Big O notation does not mean
// they always have exactly the same performance.
//
// Algorithm 2 can be much faster because it stops
// immediately when it finds the number.

int main()
{
    short arr1[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

    cout << FindNumberAlgorithm1(arr1, 100) << "\n";
    cout << FindNumberAlgorithm2(arr1, 100) << "\n";
    return 0;
}