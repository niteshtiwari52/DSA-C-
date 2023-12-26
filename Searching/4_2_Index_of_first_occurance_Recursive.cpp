// Problem :
#include <iostream>
#include <vector>
using namespace std;

/*
    Naive solution
    T.C =
    Aux space =
*/

int first_Occurance_Recursive(vector<int> arr, int n, int k, int low, int high)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] > k)
    {
        return first_Occurance_Recursive(arr, n, k, low, mid - 1);
    }
    else if (arr[mid] < k)
        return first_Occurance_Recursive(arr, n, k, mid + 1, high);
    else
    {
        // checkig that the gound element is first occurance or not
        if (mid == 0 || arr[mid - 1] != arr[mid])
        {
            return mid;
        }
        else
        {
            return first_Occurance_Recursive(arr, n, k, low, mid - 1);
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
    int output = first_Occurance_Recursive(arr, n, k, low, high);
    cout << output << endl;

    return 0;
}