// Problem :
#include <iostream>
#include <vector>
using namespace std;

/*
    binary search
    T.C = O(log(n))
    A.S = O(log n ) recursive call  
*/

int binary_Search_Recursive(vector<int> arr, int n, int k, int low, int high)
{
    // base case
    if (low > high)
        return -1;

    int mid = (low + high) / 2;
    if (arr[mid] == k)
        return mid;
    else if (arr[mid] > k)
        return binary_Search_Recursive(arr, n, k, low, mid - 1);
    else
        return binary_Search_Recursive(arr, n, k, mid + 1, high);
}

int main()
{

    // Time Complexity
    vector<int> arr;
    int n, k;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }

    cin >> k;
    int low = 0;
    int high = n - 1;

    int output = binary_Search_Recursive(arr, n, k, low, high);
    cout << output << endl;

    return 0;
}