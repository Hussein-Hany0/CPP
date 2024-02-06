#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

class Node {

    int data {};

    Node* left  {};
    Node* right {};

public : 
    Node(int data) : data(data){};

    void print_inorder(){

        if(left)
            left -> print_inorder();
        cout << data << " ";
        
        if(right)
            right -> print_inorder();
    }

    void add(vector<int> values, vector<char> direction) {

        assert(values.size() == direction.size());

        Node* current = this;

        for (int i = 0; i < (int) values.size(); ++i) {

            if (direction[i] == 'L') {

                if (!current->left)
                    current->left = new Node(values[i]);

                else
                    assert(current->left->data == values[i]);

                current = current->left;

            } else {

                if (!current->right)
                    current->right = new Node(values[i]);

                else
                    assert(current->right->data == values[i]);
                    
                current = current->right;
            }
        }
	}

    int max_value(){

        static int max_value = 0;

        Node* root = this;

        if(root -> data > max_value)
            max_value = root -> data;

        if(root -> left)
            left -> max_value();

        if(root -> right)
            right -> max_value();

        return max_value;
    }

    int count_all_nodes(){

        static int nodes = 0;

        nodes++;

        if(left)
            left -> count_all_nodes();

        if(right)   
            right -> count_all_nodes();

        return nodes - 1;
    }
};

int main(){

    // Node* root = new Node(1);
    // Node* node2 = new Node(2);
    // Node* node3 = new Node(3);
    // // Node* node4 = new Node(4);
    // // Node* node5 = new Node(5);
    // // Node* node6 = new Node(6);
    // // Node* node7 = new Node(7);
    // // Node* node8 = new Node(8);

    // root->left  = node2;
    // root->right = node3;

    // // node2->left  = node4;
    // // node2->right = node5;

    // // node5->right = node7;

    // // node3->right = node6;

    // // node6->left  = node8;

    // print_postorder(root);

    Node tree(1);

    tree.add({ 2, 4, 7} , { 'L', 'L', 'L'});  // 2 3 4 5 6 7 8 9 10 15  
    tree.add({ 2, 4, 8} , { 'L', 'L', 'R'});
    tree.add({ 2, 5, 9} , { 'L', 'R', 'R'});
    tree.add({ 3, 6, 10} , { 'R', 'R', 'L'});
    tree.add({ 3, 6, 10 , 15} , { 'R' , 'R' , 'L', 'L'});

    cout<<tree.count_all_nodes();

    return 0;
}