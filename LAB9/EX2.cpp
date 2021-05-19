#include <iostream>
using std::cin;
using std::cout;
using std::istream;

void reverse ();

int main () {
    reverse ();
}

void reverse () {
    int p;
    cin >> p;
    if (p != 0)
        reverse();
    cout << p;

}
