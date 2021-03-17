#include <stack>

int solution(string& S)
{

    stack<char> stack;

    if (S.empty())return 1;
    if (S.size() % 2 != 0)return 0;

    for (size_t i = 0; i < S.size(); i++)
    {
        if (S[i] == '(' || S[i] == '{' || S[i] == '[')
        {
            stack.push(S[i]);
        }
        else
        {
            if (stack.empty())return 0;
            if (S[i] == ')' && stack.top() != '(')return 0;
            if (S[i] == ']' && stack.top() != '[')return 0;
            if (S[i] == '}' && stack.top() != '{')return 0;
            stack.pop();
        }
    }
    if (stack.empty())return 1;
    else return 0;

}