
struct Node{
    int value;
    struct Node*  left;
    struct Node* right;
};

void printNode(struct Node* node);

void printTree(struct Node* root);