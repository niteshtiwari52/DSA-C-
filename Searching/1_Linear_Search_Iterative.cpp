// Problem :
#include <iostream>
#include <vector>
using namespace std;

/*
    Linear search
    T.C = theta(n)
*/

int linear_Search_Iterative(vector<int> arr, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
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

    int output = linear_Search_Iterative(arr, n, k);
    cout << output << endl;

    return 0;
}