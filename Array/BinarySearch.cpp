// BinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

int Binary_Search(int A[], int n, int key)
{
    int low, high, mid;
    
    low = 0;
    high = n - 1;
    
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (key == A[mid])
            return mid;
        else if (key < A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}


int main()
{
    int Arr[] = {2, 4, 6, 8, 10, 12}, n = 6, key, key_index;

    std::cout << "\nEnter the key to search: " << std::endl;
    std::cin >> key;

    key_index = Binary_Search(Arr, n, key);

    (key_index > 0) ? std::cout << "\nFound key at "<<key_index: std::cout << "NOT FOUND !";

    return 0;

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
