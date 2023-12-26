// Problem :
#include <iostream>
#include <vector>
using namespace std;

/*

    T.C = O(log n)
    Aux space = O(log n)
*/

int last_Occurance_Recursive(vector<int> arr, int n, int k, int low, int high)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] > k)
    {
        return last_Occurance_Recursive(arr, n, k, low, mid - 1);
    }
    else if (arr[mid] < k)
        return last_Occurance_Recursive(arr, n, k, mid + 1, high);
    // checking that the element is last occurance or not
    else
    {
        // checkig that the  element is last occurance or not
        if (mid == n - 1 || arr[mid + 1] != arr[mid])
        {
            return mid;
        }
        else
        {
            return last_Occurance_Recursive(arr, n, k, mid + 1, high);
        }
    }
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
    int output = last_Occurance_Recursive(arr, n, k, low, high);
    cout << output << endl;

    return 0;
}