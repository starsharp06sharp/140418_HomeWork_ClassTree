#include <cstddef>
#include "Node.h"

Node::Node(int value) :
    value(value)
    ,children_number(0)
    ,parent(NULL) {}

void Node::append(Node* new_children) {
    children[children_number++] = new_children;
    new_children -> parent = this;
}

int Node::count() {
    int num = 1;
    for (int i = 0 ; i < children_number ; i++)
        num += children[i] -> count();
    return num;
}

int Node::getvalue() {
    return value;
}

Node* Node::getparent() {
    return parent;
}
