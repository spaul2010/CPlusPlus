// FindMax.cpp : Find max of an array.
//

#include <iostream>

int Find_Max(int A[], int n)
{
    int max = A[0];

    for (int i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

int main()
{
    int Arr[] = {4, 8, 6, 9, 5, 2, 7}, n = 7, max;

    max = Find_Max(Arr, n);

    std::cout << "Max of the array is = " << max;

    return 0;
}
