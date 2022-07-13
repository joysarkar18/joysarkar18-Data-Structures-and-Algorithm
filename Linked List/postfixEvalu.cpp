#include <bits/stdc++.h>
using namespace std;
int postfixEvalu(string s)
{
    stack<int> n;
    for (int i =0; i <s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            n.push(s[i] - '0');
        }
        else
        {
            int op2 = n.top();
            n.pop();
            int op1 = n.top();
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
    cout<<"ans = "<<postfixEvalu(s);

    return 0;
}