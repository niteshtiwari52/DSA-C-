// Problem :
#include <iostream>
#include <vector>
using namespace std;

/*

    T.C = O(n)
    Aux space =
*/

int count_occurance_Naive(vector<int> arr, int n, int k)
{
    int count = 0;
    for (auto &&i : arr)
    {
        if (i == k)
        {
            count++;
        }
    }

    return count;
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

    int output = count_occurance_Naive(arr, n, k);
    cout << output << endl;

    return 0;
}