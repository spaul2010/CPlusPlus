// sum of array elements - Adding all elements of an array

#include <iostream>

int Sum_Of_Array(int A[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }

    return sum;
}


int main()
{
    int arr[] = {7, 9, 11, 13, 15, 17, 19, 21}, n=8, sum = 0;

    sum = Sum_Of_Array(arr, n);
    
    std::cout << "Sum of array elements = " << sum;

    return 0;
}

