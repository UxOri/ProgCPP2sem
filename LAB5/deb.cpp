#include <iostream>
#include <cmath>
#include <stack>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stack;

int stoi (std::string S);

int main()
{
    cout << stoi("567");
}

int stoi (std::string S) {
    int size = S.length();
    int a = 0;
    for(int i = 0; S[i] != ' ' and i < size; i++) {
        a = a*10 + (S[i] - '0');
    }

    return a;
}
