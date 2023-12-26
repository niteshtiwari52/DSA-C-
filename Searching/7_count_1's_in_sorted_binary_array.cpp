// Problem :
#include <iostream>
#include <vector>
using namespace std;

/*
    TC = O(n)
    AS = O(1)
*/
int count_ones_Naive(vector<int> arr, int n)
{
    int count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            return (n - i);
        }
    }

    return 0;
}

/*
    Tc = O(log n)
    AS = O(1)

*/
int count_ones_efficient(vector<int> arr, int n)
{
    int low = 0;
    int high = n - 1;

    int mid = (low + high) / 2;
    if (arr[mid] == 0)
    {
        low = mid + 1;
    }
    else
    {
        if (mid == 0 || arr[mid - 1] == 0)
        {
            return n - mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{

    vector<int> arr;
    int n, k;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }

    int output = count_ones_Naive(arr, n);
    cout << output << endl;

    return 0;
}