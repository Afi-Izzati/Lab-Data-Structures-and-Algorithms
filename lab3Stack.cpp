#include <iostream> 
#include <stack>
using namespace std;

void sequence_parentheses();

int main()
{
    int t;
   

    for (int i = 0; i < t; i++) {
        
        sequence_parentheses();
    }

    return 0;
}

void sequence_parentheses()
{
    stack<char> a;
    string in;
    cout << "Input:";
    cin >> in;

    int flag = 0;

    for (int i = 0; i < in.length(); i++)
    
    {
        if (in[i] == '{' || in[i] == '[' || in[i] == '(') {
            
            a.push(in[i]);
            flag = 1;
        }
        if (!a.empty()) {
            if (in[i] == '}') {
                if (a.top() == '{')
                
                {
                    a.pop();
                    
                    continue;
                }
                else
                    break;
            }
            if (in[i] == ']') {
                if (a.top() == '[') {
                    a.pop();
                    continue;
                }
                else
                    break;
            }
            if (in[i] == ')') {
                if (a.top() == '(') {
                    a.pop();
                    continue;
                }
                else
                    break;
            }
        }
        else {
            break;
        }
    }

    if ((a.empty()) && (flag == 1))
        cout << "True" << endl;
    else
        cout << "False" << endl;
}
