#include <iostream>

using std::cout;
using std::cin;
using std::endl;
/*
int do_some_awesome_work(int* a, int* b);
*/
int main() {
    int A, B;
    cin >> A >> B;
    cout << do_some_awesome_work (&A, &B);

    return 0;
}
/*
int do_some_awesome_work(int* a, int* b) {
    return *a + *b;
}
*/
