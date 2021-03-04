#include <iostream>
#include <cmath>
#include <stack>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stack;

unsigned int stoi (std::string S);

int main () {
    stack<int> nums;
    string input;
    std::getline(cin, input);
    int size = input.length();
    for (int i = 0; i < size; i++) {
        if (input[i] == ' ') {
            continue;
        }
        else if ((input[i] >= '0' and input[i] <= '9') or (input[i] == '-')) {
            if (input[i] != '-') {
                string S = "";
                for (; input[i] != ' '; i++) {
                    S += string(1, input[i]);
                    //cout << S.length() << endl;
                }
                //cout << S << endl;
                //cout << "--------------" << endl;
                nums.push(int(stoi(S)));
                //cout << "meow " << stoi(S) << " pushed! meow" << endl;
                //cout << "--------------" << endl;
            }
            else {
                i++;
                if ((input[i] == ' ') or (i == input.length())) {
                    int B = nums.top();
                    nums.pop();
                    int A = nums.top();
                    nums.pop();
                    nums.push(A - B);
                }
                else {
                    string S = "";
                    for (; input[i] != ' '; i++) {
                        S += string(1, input[i]);
                        //cout << S.length() << endl;
                    }
                    nums.push(-1*int(stoi(S)));
                    //cout << S << endl;
                    //cout << "--------------" << endl;
                    //cout << "meow " << -1*int(stoi(S)) << " pushed! meow" << endl;
                    //cout << "--------------" << endl;
                }
            }
        }
        else {
            int B = nums.top();
            nums.pop();
            int A = nums.top();
            nums.pop();
            switch (input[i]) {
                case '+':
                    nums.push(A + B);
                    break;
                case '*':
                    nums.push(A * B);
                    break;
                case '/':
                    nums.push(A / B);
                    break;
                default:
                    break;
            }
        }
    }
    for (int i = 0; i < nums.size(); i++) {
        cout << nums.top();
        nums.pop();

    }
}

unsigned int stoi (const std::string S) {
    int size = S.length();
    int a = 0;
    for(int i = 0; S[i] != ' ' and i < size; i++) {
        a = a*10 + (S[i] - '0');
        if (S[i] == '-') return 0;
    }

    return a;
}

