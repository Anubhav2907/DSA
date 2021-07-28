#include <bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
void infixToPostfix(string s)
{
    stack<char> st;
    string postfix;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            postfix += c;
        else if (c == '(')
            st.push(c);
        else if (c == ')')
        {
            while (st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(st.top()) >= prec(c))
            {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }
    cout << postfix << endl;
}