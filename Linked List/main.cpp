#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int l, r;
        cin >> l >> r;
        int count = 0;
        for (int i = l; i <= r; i++)
        {

            if (i > 10)
            {
              int dig=i%10;
              if(dig==2 || dig==3 || dig==9){
                  count++;
              }
            }

            else
            {
                if (i == 2 || i == 3 || i == 9)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}