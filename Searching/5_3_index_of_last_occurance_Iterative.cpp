// Problem :
#include <iostream>
#include <vector>
using namespace std;

/*

    T.C = O(log n)
    Aux space = O(1)
*/

int last_Occurance_Iterative(vector<int> arr, int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (k > arr[mid])
        {
            low = mid + 1;
        }
        else if (k < arr[mid])
        {
            high = mid - 1;
        }

        else
        {
            if (mid == n - 1 || arr[mid + 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
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

    cin >> k;
    int low = 0;
    int high = n - 1;
    int output = last_Occurance_Iterative(arr, n, k);
    cout << output << endl;

    return 0;
}