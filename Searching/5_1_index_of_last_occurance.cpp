// Problem :
#include <iostream>
#include <vector>
using namespace std;

/*
    Naive solution
    T.C = O(n)
    Aux space = O(1)
*/

int last_Occurance(vector<int> arr, int n, int k)
{
    for (int i = n-1; i>= 0 ; i--)
    {
        if(arr[i] < k){
            return -1;
        }
        if (arr[i] == k )
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

    int output = last_Occurance(arr, n, k);
    cout << output << endl;

    return 0;
}