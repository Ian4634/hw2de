#include <iostream>

using namespace std;

class Node {
    public:
	    Node(int data, Node *left, Node *right);
	    void set_data(int Data);
	    void set_left(Node *Left);
	    void set_right(Node *Right);
	    int get_data();
	    Node *get_left();
	    Node *get_right();
    private:
	    int data;
        Node *left;
        Node *right;
    friend bool same_tree(Node* a, Node* b);
};

bool same_tree(Node* a, Node* b);
