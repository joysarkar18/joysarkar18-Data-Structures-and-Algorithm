#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   for (int i = 1; i < n; i++)
   {
      int count = arr[i];
      int j = i-1;
      while (arr[j]>count && j>=0)
      {
         arr[j+1]=arr[j];
         j--;
      }
      arr[j+1]=count;
      
   }
   
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "    ";
    }
    return 0;
}
