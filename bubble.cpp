#include <iostream>
using namespace std;
void bubble_sort(int a[], int n)
{
    for (int count = 1; count <= n - 1; count++)
    {
        for (int j = 0; j <= n - count - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main()
{
    int n;
    int a[n];
    cout << "please enter the size of array :- " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubble_sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    return 0;
}