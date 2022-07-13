#include <bits/stdc++.h>
using namespace std;
list<int> Reverse_k_nodes(list<int> n, int k)
{
    list<int> ans;

    while (!n.empty())
    {

        list<int> temp;
        for (int i = 0; i < k; i++)
        {
            temp.push_front(n.front());
            n.pop_front();
        }

        for (int i = 0; i < k; i++)
        {
            ans.push_back(temp.front());
            temp.pop_front();
        }

        temp.clear();
    }

    return ans;
}

void display(list<int> n)
{
    while (!n.empty())
    {
        cout << n.front() << " ";
        n.pop_front();
    }
}
int main(int argc, char const *argv[])
{
    list<int> n = {1, 2, 3, 4, 5, 6};
    display(Reverse_k_nodes(n, 2));

    return 0;
}