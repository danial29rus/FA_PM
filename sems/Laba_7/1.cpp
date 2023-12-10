#include <iostream>

class TreeNode {
public:
    int value;
    TreeNode *left, *right;

    TreeNode(int value) : value(value), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    TreeNode *root;

    void insertNode(TreeNode*& node, int value) {
        if (node == nullptr) {
            node = new TreeNode(value);
        } else if (value < node->value) {
            insertNode(node->left, value);
        } else if (value > node->value) {
            insertNode(node->right, value);
        }
    }

    bool searchNode(TreeNode* node, int value) const {
        if (node == nullptr) {
            return false;
        }
        if (value == node->value) {
            return true;
        }
        return value < node->value ? searchNode(node->left, value) : searchNode(node->right, value);
    }

public:
    BinarySearchTree() : root(nullptr) {}

    void insert(int value) {
        insertNode(root, value);
    }

    bool search(int value) const {
        return searchNode(root, value);
    }

    ~BinarySearchTree() {
    }
};

int main() {
    BinarySearchTree bst;
    bst.insert(5);
    bst.insert(3);
    bst.insert(7);
    bst.insert(1);

    std::cout << "Search 3: " << (bst.search(3) ? "Found" : "Not Found") << std::endl;
    std::cout << "Search 8: " << (bst.search(8) ? "Found" : "Not Found") << std::endl;

    return 0;
}
