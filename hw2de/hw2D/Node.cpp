#include <Node.h>

Node::Node(int data, Node *right, Node *left){
    set_data(data);
    set_right(right);
    set_left(left);
}

void Node::set_data(int Data){
    data = Data;
}

void Node::set_right(Node *Right){
    right = Right;
}

void Node::set_left(Node *Left){
    left = Left;
}

int Node::get_data(){
    return data;
}

Node *Node::get_right(){
    return right;
}

Node *Node::get_left(){
    return left;
}

bool same_tree(Node* a, Node* b){
    if(a == nullptr && b == nullptr){
        return true;
    }

    if(a == nullptr && b != nullptr){
        return false;
    }

    if(a != nullptr && b == nullptr){
        return false;
    }
    
    if (a->data != b->data){
	    return false;
    }
    
    bool same;
    same = same_tree(a->left, b->left);

    if(same == false){
        return false;
    }
    same = same_tree(a->right, b->right);
    return same;
}
