#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i > 2) //starting
        {
            cout << i - 1;
        }
        for (int k = 1; k <= i; k++)
        {
            if (i == 1 || i == 2)
            {
                cout << 1;
            }
        }

        for (int j = 2; j <= i - 1; j++)
        {

            if (i > 2)
            {
                cout << 0;
            }
        }
        if (i > 2) //ending
        {
            cout << i - 1;
        }
        cout << endl;
    }
}