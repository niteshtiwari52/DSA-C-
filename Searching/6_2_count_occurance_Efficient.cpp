// Problem :
#include <iostream>
#include <vector>
using namespace std;

/*

    T.C = O(log n)
    Aux space = (1)
*/
int find_first_occurance(vector<int> arr, int n, int k)
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
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int find_last_occurance(vector<int> arr, int n, int k)
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

int count_occurance_Efficient(vector<int> arr, int n, int k)
{
    int count = 0;
    int first_occurance;
    int last_occurance;

    // calculate 1st occurance
    first_occurance = find_first_occurance(arr, n, k);

    if (first_occurance == -1)
    {
        return 0;
    }
    else
    {

        // calculate last occurance
        last_occurance = find_last_occurance(arr, n, k);
    }

    count = last_occurance - first_occurance + 1;

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

    int output = count_occurance_Efficient(arr, n, k);
    cout << output << endl;

    return 0;
}