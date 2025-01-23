#include <iostream>
#include <string>
#include <stack>

using namespace std;

void stackWord(stack<char> &s)
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}

int main()
{
    string s;
    getline(cin, s);

    stack<char> stack;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<')
        {
            stackWord(stack);
            while (true)
            {
                cout << s[i];
                i++;
                if (s[i] == '>')
                {
                    cout << s[i];
                    break;
                }
            }
        }

        else if (s[i] == ' ')
        {
            stackWord(stack);
            cout << " ";
        }

        else
        {
            stack.push(s[i]);
        }
    }

    stackWord(stack);

    cout << endl;

    return 0;
}