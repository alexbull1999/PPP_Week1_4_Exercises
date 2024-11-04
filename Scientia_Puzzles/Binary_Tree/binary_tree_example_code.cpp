#include <iostream>
#include <cassert>

using namespace std;

// Some routines for inserting elements into a binary tree and for 
// outputting the elements stored in the tree in ascending order.
//
//insert() is a recursive function using pass-by-value to insert values into binary tree
//alternative_insert is same function using pass-by-reference (reference to a pointer)
//
//
// Also available from 
//   http://www.doc.ic.ac.uk/~wjk/C++Intro/binary.cpp

struct Node {
  int number;
  Node *left, *right;
};

Node *create_new_node(int value, Node *l, Node *r) {
  Node *item = new Node;
  assert(item);
  item->number = value;
  item->left = l;
  item->right = r;
  return item;
}

/* insert that uses pass-by-value for tree root */
Node *insert(Node *root, int value) {
  if (!root) {
    root = create_new_node(value, NULL, NULL);
    return root;
  }
  if (root->number == value)
    return root;
  if (value < root->number)
    root->left = insert(root->left, value);
  else
    root->right = insert(root->right, value);
  return root;
}

/* insert that uses pass-by-reference for tree root */
void alternative_insert(Node * &root, int value) {
  if (!root) {
    root = create_new_node(value, NULL, NULL);
    return;
  }
  if (root->number == value)
    return;
  if (value < root->number)
    alternative_insert(root->left, value);
  else
    alternative_insert(root->right, value);
}

void output(Node *current) {

  if (!current)
    return;

  output(current->left);
  cout << current->number << " ";
  output(current->right);
}

int main() {
  Node *root = NULL;

  root = insert(root, 20); // or just alternative_insert(root, 20)
  root = insert(root, 5);
  root = insert(root, 30);
  root = insert(root, 8);
  root = insert(root, 3);
  root = insert(root, 35);

  output(root);

  cout << endl;

  return 0;
}
