#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    int n;
    cout << "Enter the size of array  : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for (auto &a : arr)
    {
        cin >> a;
    }

    int k;
    cout << "Enter the slide : ";
    cin >> k;
    deque<int>d;
    vector<int>ans;
    for(int i = 0 ; i< k ; i++){
        while(!d.empty() and arr[i]>arr[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
    }

    ans.push_back(d.front());

    for(int i = k ; i< n ; i++){
        if(d.front()==arr[i-k]){
            d.pop_front();
        }
          while(!d.empty() and arr[i]>arr[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
        ans.push_back(d.front());

    }

    for(auto itr : ans){
       cout<<arr[itr]<<" ";
    }
   

    return 0;
}