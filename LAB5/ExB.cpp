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
    stack<int> a;
    int f = 1;
    while (f != 0) {
        cin >> f;
        if (f > 0)
            a.push(f);
        else if (a.empty())
            continue;
        else if (fabs(f) < a.top()) {
            int t = a.top();
            t += f;
            a.pop();
            a.push(t);
        }
        else if (fabs(f) >= a.top())
            a.pop();
    }
    if (a.empty())
        cout << 0 << " " << -1;
    else {
        int Top = a.top();
        int i = 0;
        for (; !(a.empty()); i++)
            a.pop();

        cout << i << " " << Top;
    }
}
