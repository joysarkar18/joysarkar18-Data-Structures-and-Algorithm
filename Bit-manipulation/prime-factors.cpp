#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter your number : ";
    cin >> n;

    cout << "The prime factors are : ";

    bool test ;
    for (int i = 2; i <=n; i++)
    {
        if (n % i == 0)
        {
            test = true;

            for (int j = 2; j <= i/2; j++)
            {
                if (i % j == 0)
                {
                    test =false;
                    break;
                }
            }
            if (test == true)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}
