// Problem :
#include <iostream>
#include <vector>
using namespace std;

/*
    T.C = O(log(n))
    AS = O(1)
    binary search Approach
    mid = (low + high)/2
    case 1 : arr[mid] == x ; return mid ;
    case 2 : arr[mid] > x ; change high = mid -1
    case 3 : arr[mid] < x ; low = mid +1
*/

int binary_Search_Iterative(vector<int> arr, int n, int k)
{
    // intitialize low and high
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        // compute mid
        int mid = (low + high) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
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

    int output = binary_Search_Iterative(arr, n, k);
    cout << output << endl;

    return 0;
}