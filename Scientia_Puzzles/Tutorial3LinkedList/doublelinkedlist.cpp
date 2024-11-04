#include <iostream>
#include <cstring>
#include <cassert>

using namespace std;

// Tutorial Exercise 3
// Routines for Manipulating a Singly Linked List 
//
// Also available from
//   http://www.doc.ic.ac.uk/~wjk/C++Intro/tut3.cpp
//
// Try to understand what the routines do using just pen and paper. 
// Then experiment with the routines on a computer and see if you
// can adapt them to construct and manipulate doubly linked lists
// (i.e. where each node has a next and a prev pointer).

// one node in the linked list looks like this
struct Node {
  char word[80];  // a string
  Node *next;     // a pointer to the next node
	Node *prev;			// a pointer to the previous node
};

// this function returns a pointer to a newly created node
// note that we set the pointer to the next & prev node to NULL

Node *create_new_node(const char *contents) {
  Node *new_node = new (nothrow) Node;
  assert(new_node != NULL);
  strcpy(new_node->word, contents);
  new_node->next = NULL;
	new_node->prev = NULL;
  return new_node;
}

// set up an empty list
void initialise_list(Node *&front, Node *&rear) {
  front = rear = NULL;
}

// add a node to the front of the list
void add_to_front(Node *&front, Node *&rear, const char *word) {
  Node *item = create_new_node(word);
  
  // empty list case
  if (!front) {
    front = rear = item;
    return;
  }

  // default case (keep previous node pointer as null)
  front->prev = item;
	item->next = front;
	item->prev = NULL;
	front = item;
}

// add a node to the rear of the list
void add_to_rear(Node *&front, Node *&rear, const char *word) {
  Node *item = create_new_node(word);
  
  // empty list case
  if (!front) {
    front = rear = item;
    return;
  }

  // default case
  rear->next = item;
	item->prev = rear;
  rear = item;
}

// output the list to the screen
void print_list(Node *front) {
  for (Node *current = front; current; current=current->next)
    cout << "[" << current->word << "] ";
  cout << endl;
}

// print list backwards using previous pointer
void print_list_backwards(Node *rear) {
	for (Node *current = rear; current; current=current->prev)
		cout << "[" << current->word << "]";
	cout << endl; 
}

// delete the node containing the target string
void delete_node(Node *&front, Node *&rear, const char *target) {
  Node *p = front, *q = NULL, *r = NULL;

  // find the node we want to delete
  for (p=front; p && strcmp(p->word, target); p=p->next, p->prev = q) 
		q = p;

  if (p == NULL) {
    cout << "could not find the word " << target << " in the list." << endl;
    return;
  }

  // p now points to the node we want to delete
  // q now points to the node before the one we want to delete
	// set r to equal the node after the one we want to delete;
	
	r = p;
	r = r->next;
  
  // store the targets next pointer and delete the target
  Node *forward_link = p->next;
	Node *backward_link = p->prev;
  delete p;

  // handle the case that the target is the front (or equivalently q == NULL)
  if (p==front) {
    front = forward_link;
		r->prev = NULL; //set backward pointer for node after p to be null
    if (front == NULL)
      rear = NULL;
    return;
  }

  // update the next pointer of the node before the one being deleted
  q->next = forward_link;
	r->prev = backward_link; //update the prev. pointer of node after one deleted

  // handle the case that the target is the rear
  if (p == rear) 
		rear = q;
	delete r; //r is NULL 

}

// insert a word into a sorted list
void add_sorted(Node *&front, Node *&rear, const char *new_word) {
  Node *p = front, *q = NULL;

  // find the node we want to insert after
  for (p=front; p && (strcmp(p->word, new_word) < 0); p=p->next, p->prev = q) 
    q = p;

  // p points to the node we want to insert before
  // q points to the node we want to insert after

  if (q==NULL) {
    add_to_front(front, rear, new_word);
    return;
  }

  if (p==NULL) {
    add_to_rear(front, rear, new_word);
    return;
  }

  // otherwise create the new node 
  Node *new_node = create_new_node(new_word);

  // and insert it after q and before p
  new_node->next = p;
	new_node->prev = q;
  q->next = new_node;
	p->prev = new_node;
}

// delete all items in the list
void delete_list(Node *&front, Node *&rear) {
  // keep deleting items from the front of the list until there is nothing left
  while (front != NULL) {
    Node *link = front->next;
    delete front;
    front = link;
  }
  rear = NULL;
}

int main() {
  // front and rear point to the first and last nodes in the linked
  // list respectively
  Node *front, *rear;

  // initialise the list
  initialise_list(front, rear);

  // add some nodes
  add_to_front(front, rear, "sat");
  add_to_rear(front, rear, "cat");
  add_to_front(front, rear, "mat");
  add_to_rear(front, rear, "hat");

	cout << "Now printing list forwards" << endl;
  print_list(front);
	cout << "Now printing list backwards" << endl;
	print_list_backwards(rear);

  cout << endl;

  // delete a node
  delete_node(front, rear, "mat");
	cout << "Deleted [mat]" << endl;

  cout << "Printing edited list forwards" << endl;
	print_list(front);
	cout << "Printing edited list backwards" << endl;
	print_list_backwards(rear);
  cout << endl;

  // delete the list
  delete_list(front, rear);
	cout << "deleted entire list; adding new list of 6 words sorted"; 
	cout << " in ascending order";

  // add some elements in ascending order
  add_sorted(front, rear, "sat");
  add_sorted(front, rear, "cat");
  add_sorted(front, rear, "hat");
  add_sorted(front, rear, "mat");
  add_sorted(front, rear, "bat");
  add_sorted(front, rear, "rat");

	cout << "Now printing list forwards" << endl;
  print_list(front);
	cout << "Now printing list backwards" << endl;
	print_list_backwards(rear);
  cout << endl;

  delete_list(front, rear);

  return 0;
}


