// Problem :
#include <iostream>
using namespace std;
/*
    T C = theta(sqroot of x)
*/
int square_root_naive(int n)
{
    int i = 0;
    while (i * i <= n)
    {
        if (i * i == n)
        {
            return i;
        }
        i++;
    }
    return i - 1;
}

/*
    TC = O (log n)
*/
int square_root_binarySearch(int n)
{
    int low = 1, high = n, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int midSQ = mid * mid;
        if (midSQ == n)
        {
            return mid;
        }
        else if (midSQ > n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int x = square_root_naive(n);
    cout << x << endl;
    int y = square_root_binarySearch(n);
    cout << y << endl;

    return 0;
}