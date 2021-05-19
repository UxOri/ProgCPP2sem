#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

struct Omega {
    char sym;
    int num;
};

bool operator < (const Omega &omega1, const Omega &omega2) {
    return (omega1.num < omega2.num);
}

bool operator == (const Omega &omega1, const Omega &omega2) {
    return (omega1.num == omega2.num);
}

int main () {
    vector<Omega> data;
    string text;
    std::getline(cin, text);
    int text_size = text.length();
    cout << "DEB:: " << text << endl;
    bool flag = 0;
    int j0 = 0;
    for (int i = 0; i < text_size; i++) {
        flag = 0;
        j0 = 0;
        if (not data.empty()) {
            for (int j = 0; j < data.size(); j++) {
                if (data[j].sym == text[i])
                    cout << "DEB:: Detected! " << text[i] << endl;
                    flag = 1;
                    j0 = j;
                    break;
            }
        }
        if (flag == 1) {
            data[j0].num += 1;
        }
        else {
            Omega p = {text[i], 1};
            data.push_back(p);
        }
    }
    //int size = data.size();
    //std::sort(data.begin(), data.end());

    for (int i = 0; i < data.size(); i++) {
        cout << "\"" << data[i].sym << "\"::" << double(data[i].num) / text_size << endl;
    }
}
