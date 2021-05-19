#include <iostream>
#include <vector>

template <typename num>
class Node {
public:
    Node* l;
    Node* r;
    Node* t;
    num   v;

    Node (Node* left, Node* right, Node* top, num value) {
        l = left; r = right; t = top; v = value;
    }
};

template <typename num>
class Tree {
public:
    std::vector<Node<num>> nodes;

    void append (num value) {
        if (nodes.empty) {
            Node<num> node(nullptr, nullptr, nullptr, value);
            nodes.push_back(node);
        }

    }
};

int main () {

    return 0;
}
