#include <iostream>
#include <cmath>
#include <stack>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stack;

int main () {
    string input;
    std::getline(cin, input);

    stack<char> sc;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '(')
            sc.push('(');
        if (input[i] == '[')
            sc.push('[');
        if (input[i] == '{')
            sc.push('{');
        if (input[i] == '<')
            sc.push('<');
        if (input[i] == ')') {
            if (sc.top() == '(')
                sc.pop();
            else
                return 0;
        }
        if (input[i] == ']') {
            if (sc.top() == '[')
                sc.pop();
            else
                return 0;
        }
        if (input[i] == '}') {
            if (sc.top() == '{')
                sc.pop();
            else
                return 0;
        }
        if (input[i] == '>') {
            if (sc.top() == '<')
                sc.pop();
            else
                return 0;
        }

    }
    if (sc.empty()) //ещё надо exception бахнуть для вязкости, чтоб из пустого стека не доставать
        return 1;
    else
        return 0;

    return -1;
}


