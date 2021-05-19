#include <iostream>
#include <cmath>
#include <stack>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stack;

stack<int> get_sc (string input);
bool check_sc (stack<int> input);

int main () {
    string input;
    std::getline(cin, input);

    stack<int> sc = get_sc (input);
    stack<int> sc1 = sc;

    cout << "----------------------" << endl;
    while (not sc1.empty()) {
        cout << sc1.top() << endl;
        sc1.pop();
    }
    cout << "----------------------" << endl;

    cout << check_sc (sc);

    return 0;
}

stack<int> get_sc (string input) {
    stack<int> output;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '(')
            output.push(-1);
        if (input[i] == ')')
            output.push(1);
    }
    return output;
}

bool check_sc (stack<int> input) {
    int S = 0;
    while (not input.empty()) {
        S += input.top();
        input.pop();
        if (S < 0)
            return 0;
    }
    if (S == 0)
        return 1;
    else
        return 0;
}
