/* LinearSearch.cpp : 
                        Linear search in C to find whether a number is present in an array. 
                        If it's present, then at what location it occurs. It is also known 
                        as a sequential search.

                        Time complexity = O(n)
*/

#include <iostream>

int Linear_Search(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
            return i;
    }

    return -1;
}

int main()
{
    int Arr[] = {6, 11, 25, 8, 15, 7, 12, 20, 9, 14}, n = 10, key, key_index;

    key = 20;
    std::cout << "\nSearching the array for :  " << key << std::endl;
    key_index = Linear_Search(Arr, n, key);
    std::cout <<"Found at Index =  "<<key_index<<std::endl;


    key = 555;
    std::cout << "\nSearching the array for :  " << key<<std::endl;
    key_index = Linear_Search(Arr, n, key);
    if(key_index == -1)
        std::cout <<"Not Found !" << std::endl;

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
