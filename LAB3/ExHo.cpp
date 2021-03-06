#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct Cat {
    char *name;
    unsigned int id;
    double weight, length;
    unsigned int mice_caught;
};

Cat* get_home_for_a_cats_pride(unsigned int n);
void clear_home_of_a_cats_pride(Cat *cats, unsigned int n);

int main() {
    unsigned int n;
    cin >> n;
    Cat *a = get_home_for_a_cats_pride(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].weight >> a[i].length >> a[i].mice_caught;
        a[i].id = i;
    }
    for (int i = 0; i < n; i++)
        cout << a[i].name << " ";
    cout << endl;
    clear_home_of_a_cats_pride(a, n);
    return 0;
}

Cat* get_home_for_a_cats_pride(unsigned int n) {
    char** names = new char*[n];
    for (unsigned int i = 0; i < n; i++) {
        names[i] = new char[10];
    }

    Cat* data = new Cat[n];
    for (unsigned int i = 0; i < n; i++) {
        data[i].name = names[i];
    }
    return data;
}

void clear_home_of_a_cats_pride(Cat *cats, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        delete []cats[i].name;
    }
    delete []cats;
}

