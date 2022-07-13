#include <bits/stdc++.h>
using namespace std;
int prefixEvalu(string s)
{
    stack<int> n;
    for (int i = s.length()-1; i >=0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            n.push(s[i] - '0');
        }
        else
        {
            int op1 = n.top();
            n.pop();
            int op2 = n.top();
            n.pop();

            switch (s[i])
            {
            case '+':
            {
                n.push(op1 + op2);
                break;
            }  
            case '-':
            {
                n.push(op1 - op2);
                break;
            }
            case '*':
            {
                n.push(op1 * op2);
                break;
            }
            case '/':
            {
                n.push(op1 / op2);
                break;
            }
            }
        }
    }

    return n.top();
  
}
int main(int argc, char const *argv[])
{
    string s;
    cout<<"Enter your string : ";
    cin >> s;
    cout<<"ans = "<<prefixEvalu(s);

    return 0;
}