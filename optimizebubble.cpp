#include <iostream>
using namespace std;
void optimizebubble(int a[], int n)
{

    for (int count = 1; count <= n - 1; count++)
    {
        int flag = 0;
        for (int j = 0; j <= n - 2; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cout << "enter the size of array :- " << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    optimizebubble(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<"  ";
    }
    return 0;
}