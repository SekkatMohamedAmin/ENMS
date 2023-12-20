#ifndef BST_H
#define BST_H

#include "Node.h"
#include <iostream>

using namespace std;

// Creating a Binary search tree
template <class T>
class BST {
public:
    // Constructor
    BST() : root(nullptr) {}

    // Copy constructor
    BST(BST<T>& other) : root(nullptr) {
        root = copyNode(other.root);
    }

    // Destructor
    ~BST() {
        makeEmpty(root);
    }

    // Get the root
    Node<T>* getRoot() const {
        return root;
    }

    // Insert a new node
    Node<T>* insert(Node<T>* root, T value) {
        if (root == nullptr) {
            root = new Node<T>(value);
            return root;
        }
        if (value < root->data) {
            root->left = insert(root->left, value);
        }
        else if (value > root->data) {
            root->right = insert(root->right, value);
        }
        return root;
    }

    // Remove a node
    void remove(Node<T>* node, T value) {
        if (node == nullptr)
            return;
        if (value < node->data)
            remove(node->left, value);
        else if (value > node->data)
            remove(node->right, value);
        else if (node->left != nullptr && node->right != nullptr) {
            node->data = findMin(node->right)->data;
            remove(node->right, node->data);
        }
        else {
            Node<T>* temp = node;
            node = (node->left != nullptr) ? node->left : node->right;
            delete temp;
        }
    }

    // Search for a node 
    Node<T>* search(Node<T>* root, T value) {
        if (root == nullptr || root->data == value)
            return root;
        if (root->data < value)
            return search(root->right, value);
        return search(root->left, value);
    }

    // Inorder traversal
    void inorderTraversal(Node<T>* root) {
        if (root == nullptr)
            return;
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }

    // Make the tree empty 
    void makeEmpty(Node<T>* &root) {
        if (root == nullptr)
            return;
        makeEmpty(root->left);
        makeEmpty(root->right);
        delete root;
        root = nullptr;
    }

    // Utility function to find the minimum node
    Node<T>* findMin(Node<T>* root) {
        if (root == nullptr || root->left == nullptr)
            return root;
        return findMin(root->left);
    }

    // Utility function for deep copying nodes
    Node<T>* copyNode(Node<T>* originalNode) {
        if (originalNode == nullptr)
            return nullptr;

        Node<T>* newNode = new Node<T>(originalNode->data);
        newNode->left = copyNode(originalNode->left);
        newNode->right = copyNode(originalNode->right);
        return newNode;
    }

private:
    Node<T>* root;
};

#endif
