/* 18.11.25 */
#include <iostream>
using namespace std;
int main()
{
    int a[1000];
    int endl{};
    int t = 1000;

    for (int b = 0; b < 200; b++)
    {
        cout << b << endl;
    }

    for (int b = 0; b < 1000; b++) 
    {
        a[b] = 0;
    }

    for (int w = 0; w < 1000; w++) 
    {
        cout << w << ") " << a[w] << endl;
    }

    for (int w = 1000; w>-1; w--) 
    {
        if (w < 1000) {
            a[w] = 999 - w;
        }
    }

    for (int i = 0; i < 1000; i++) 
    {
        cout << a[i] << endl;
    }

    cout << "+++" << endl;
    for (int w = 0; w < 10; w++)
    {
        cout << w << endl;
    }

    for (int b = 0; b > 1000; b++) 
    {
        a[b] = 0;
    }

    return 0;
}
