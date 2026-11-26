#include <iostream>

using std::cout;
using std::endl;



template <typename T>
struct BinaryNode {
  BinaryNode<T>* left;
  BinaryNode<T>* right;

  T data;

  // Constructors
  BinaryNode(T value) : data(value), left(nullptr), right(nullptr) {}
};


template <typename T>
class BinaryTree {
private:
  struct BinaryNode<T> *root;

  void PreOrder(BinaryNode<T> *node) {
    if (node == nullptr) return;
    cout << node->data << " ";
    PreOrder(node->left);
    PreOrder(node->right);
  }
  void InOrder(BinaryNode<T> *node) {
    if (node == nullptr) return;
    InOrder(node->left);
    cout << node->data << " ";
    InOrder(node->right);
  }
  void PostOrder(BinaryNode<T> *node) {
    if (node == nullptr) return;
    PostOrder(node->left);
    PostOrder(node->right);
    cout << node->data << " ";
  }

  int heightOfTree(BinaryNode<T> *node) {
    return -1;
  }

public:
  // Constructors
  BinaryTree(BinaryNode<T> *root) : root(root) {}
  BinaryTree() : root(nullptr) {}

  // Traversal methods
  void PreOrder() {
    PreOrder(root);
    cout << endl;
  }

  void InOrder() {
    InOrder(root);
    cout << endl;
  }

  void PostOrder() {
    PostOrder(root);
    cout << endl;
  }

  // Find height of tree method
  int heightOfTree() {
    return heightOfTree(root);
  }

  // Delete node method
  void destroy(BinaryNode<T> *node) {
    if (node == nullptr) return;
    destroy(node->left);
    destroy(node->right);

    delete node;
  }

  static BinaryNode<T>* LowestCommonAncestor(BinaryNode<T>* root, BinaryNode<T>* p, BinaryNode<T>* q) {
    return root;
  }

  ~BinaryTree() {
    // Destructor goes here
    destroy(root);
    cout << "Destructor ran" << endl;
  }
};


int main() {
  BinaryNode<int>* A = new BinaryNode<int>(50);
  BinaryNode<int>* B = new BinaryNode<int>(25);
  BinaryNode<int>* C = new BinaryNode<int>(75);
  BinaryNode<int>* D = new BinaryNode<int>(15);
  BinaryNode<int>* E = new BinaryNode<int>(35);
  BinaryNode<int>* F = new BinaryNode<int>(60);
  BinaryNode<int>* G = new BinaryNode<int>(90);
  BinaryNode<int>* H = new BinaryNode<int>(5);
  BinaryNode<int>* I = new BinaryNode<int>(20);
  BinaryNode<int>* J = new BinaryNode<int>(27);
  BinaryNode<int>* K = new BinaryNode<int>(42);
  BinaryNode<int>* L = new BinaryNode<int>(55);
  BinaryNode<int>* M = new BinaryNode<int>(70);
  BinaryNode<int>* N = new BinaryNode<int>(80);
  BinaryNode<int>* O = new BinaryNode<int>(95);

  // Sort Nodes
  A->left = B;
  A->right = C;

  B->left = D;
  B->right = E;

  C->left = F;
  C->right = G;

  D->left = H;
  D->right = I;

  E->left = J;
  E->right = K;

  F->left = L;
  F->right = M;

  G->left = N;
  G->right = O;
  
  
  BinaryTree<int> T(A);
  cout << "PreOrder: "; T.PreOrder(); cout << endl;
  cout << "InOrder: "; T.InOrder(); cout << endl;
  cout << "PostOrder: "; T.PostOrder(); cout << endl;
}
// g++ program12_bst.cpp -o ans && ./ans && rm -rf ./ans 
