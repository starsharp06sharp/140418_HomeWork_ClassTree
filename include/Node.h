#ifndef NODE_H
#define NODE_H

#define MAX_CHILDEN_NUMBER 10

class Node {
public:
    Node(int);
    void append(Node*);
    int count();
    int getvalue();
    Node* getparent();
protected:
private:
    int value;
    Node* children[MAX_CHILDEN_NUMBER];
    Node* parent;
    int children_number;
};

#endif // NODE_H
