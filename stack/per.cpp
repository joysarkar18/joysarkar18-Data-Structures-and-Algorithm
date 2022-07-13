#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int v1[n];
        int v2[n];

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }

        sort(v1, v1 + n);
        sort(v2, v2 + n);

       int v3[n];
          for (int i = 0; i < n; i++)
        {
            v3[i]=(v2[i]-v1[i]);
        }

         for (int i = 0; i < n; i++)
        {
            for(int j=i ; j< n ; j++){
                if(v3[i]!=v3[j]){
                    int c = -1;
                    cout<<c<<endl;
                    goto end;
                }

            }
        }

        cout<<v3[1]<<endl;
       end: ; 

    }

    return 0;
}