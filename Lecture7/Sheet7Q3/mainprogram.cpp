/* This program creates and prints out a linked list of strings. */ 

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string.h>
using namespace std;

const int MAX_WORD_LENGTH = 80;

/* definition of a node */
struct Node;
typedef Node *Node_ptr;

struct Node
{
	char word[MAX_WORD_LENGTH];
	Node_ptr ptr_to_next_node;
};

/* Function to assign a linked list to "a_node" */
void assign_list(Node_ptr &a_list);

/* Function to assign a new dynamic node variable to "a_node" */
void assign_new_node(Node_ptr &a_node);

/* Function to print the strings in the list "a_node" */
void print_list(Node_ptr a_node);

/*Function to insert a new string anywhere in the list */
void add_after(Node_ptr &a_list, char a_word[], char word_after[]);

/* Function to delete the first node in "a_list" which contains "a_word" */
void delete_node(Node_ptr &a_list, char a_word[]);

/* Functions to sort a list alphabetically */
void list_selection_sort(Node_ptr &a_list);

Node_ptr minimum_from(Node_ptr &a_list, int loop_counter);

void swap(Node_ptr a_node, Node_ptr smallest_node);


/* MAIN PROGRAM */
int main()
{
	Node_ptr my_list = NULL;
	char word_marker[MAX_WORD_LENGTH];
	char new_word[MAX_WORD_LENGTH];
	char delete_word[MAX_WORD_LENGTH];

	assign_list(my_list);

	cout << "\nTHE LIST IS NOW:\n";
	print_list(my_list);
	cin.ignore(1, '\n');

	cout << "\n\nAFTER WHICH WORD WOULD YOU LIKE TO ADD AN EXTRA WORD? ";
	cin.getline(word_marker, MAX_WORD_LENGTH);
	cout << endl;

	cout << "WHICH WORD WOULD YOU LIKE TO ADD? ";
	cin.getline(new_word, MAX_WORD_LENGTH);
	cout << endl;
	add_after(my_list, word_marker, new_word);
	
	cout << "THE LIST IS NOW:\n";
	print_list(my_list);
	cout << endl;

	cout << "\nWHICH WORD WOULD YOU LIKE TO DELETE? ";
	cin.getline(delete_word, MAX_WORD_LENGTH);
	delete_node(my_list, delete_word);

	cout << "\nTHE LIST IS NOW:\n";
	print_list(my_list);
	cout << endl;

	cout << "\nAFTER SORTING, THE LIST IS:\n";
	list_selection_sort(my_list);
	print_list(my_list);
	cout << endl;
		
	return 0;
}
/* END OF MAIN PROGRAM */
	
/* DEFINITION OF FUNCTION "assign_list" */
void assign_list(Node_ptr &a_list)
{
	Node_ptr current_node, last_node;
	
	assign_new_node(a_list);
	cout << "Enter first word (or '.' to end list): ";
	cin >> a_list->word;
	if (!strcmp(".",a_list->word))
	{
			delete a_list;
			a_list = NULL;
		}
	current_node = a_list;
	
	while (current_node != NULL)
	{
			assign_new_node(last_node);
			cout << "Enter next word (or '.' to end list): ";
			cin >> last_node->word;
			if (!strcmp(".",last_node->word))
			{
						delete last_node;
						last_node = NULL;
					}
			current_node->ptr_to_next_node = last_node;
			current_node = last_node;
		}
}	
/* END OF FUNCTION DEFINITION */

/* DEFINITION OF FUNCTION "assign_new_node" */
void assign_new_node(Node_ptr &a_node)
{
        a_node = new (nothrow) Node;
	if (a_node == NULL) 
	{
			cout << "sorry - no more memory\n"; 
			exit(1);
		}
}
/* END OF FUNCTION DEFINITION */

/* DEFINITION OF FUNCTION "print_list" */
void print_list(Node_ptr a_node)
{
	while (a_node != NULL)
	{
			cout << a_node->word << " ";
			a_node = a_node->ptr_to_next_node;
		}
}
/* END OF FUNCTION DEFINITION */

/* DEFINITION OF FUNCTION "add-after" */

void add_after(Node_ptr &a_list, char a_word[], char word_after[])
{
	Node_ptr find_word;
	Node_ptr add_word;

	find_word = a_list; /* Set find_word pointer to start of linked list */

	while (find_word != NULL && strcmp(find_word->word, a_word) != 0)
	{
		find_word = find_word->ptr_to_next_node;
	}

		if (find_word != NULL)
		{
			assign_new_node(add_word);
			strcpy(add_word->word, word_after);		
			add_word->ptr_to_next_node = find_word->ptr_to_next_node;
			find_word->ptr_to_next_node = add_word;

		}
		else
		{
			cout << "Sorry, the word you are searching for is not in the list.\n";					
		}
	

}

void delete_node(Node_ptr &a_list, char a_word[])
{
	Node_ptr find_delete = a_list; /* Set the pointer to find the word to be deleted to the start of list */
	Node_ptr pre_delete = a_list; // Set the pointer to find the word before the one to be deleted to the start of the list
	int counter = 0;

	while (find_delete != NULL && strcmp(find_delete->word, a_word) != 0)
	{
		find_delete = find_delete->ptr_to_next_node;
		counter++;
	}

	if (find_delete == NULL)
	{
		cout << "Sorry, the word you are looking to delete is not in the list\n";
	}

	else
	{
		for ( ; counter > 1 ; counter--)
		{
			pre_delete = pre_delete->ptr_to_next_node; //traverse linked list for pre_delete one time fewer than for delete_word
		}

		pre_delete->ptr_to_next_node = find_delete->ptr_to_next_node;

		delete find_delete;

	}

}
	
void list_selection_sort(Node_ptr &a_list)
{
	Node_ptr current_word = a_list;
	int loop_counter = 0;

	while (current_word != NULL) /* ensuring we don't reach end of linked list and dereference a nullptr */
	{
		swap(current_word, minimum_from(a_list, loop_counter));
		current_word = current_word->ptr_to_next_node;
		loop_counter++;
	}
}


Node_ptr minimum_from(Node_ptr &a_list, int start_from)
{
	int counter = 0;

	Node_ptr node_traverser = a_list;
	Node_ptr smallest_sofar = a_list;

	while (counter < start_from && node_traverser != NULL) /* So that the following loops don't compare words already sorted to the front */
	{
		node_traverser = node_traverser->ptr_to_next_node;
		smallest_sofar = smallest_sofar->ptr_to_next_node;
		counter++;
	}
	
	while (node_traverser != NULL)
	{
		if(strcmp(smallest_sofar->word, node_traverser->word) <= 0)
		{
			node_traverser = node_traverser->ptr_to_next_node;
		}
		else
		{
			smallest_sofar = node_traverser;
			node_traverser = node_traverser->ptr_to_next_node;
		}

	}

	cout << "Smallest remaining word is: " << smallest_sofar->word << endl;

	return smallest_sofar;

}

void swap(Node_ptr a_node, Node_ptr smallest_node)
{
	Node_ptr temp_node;
	assign_new_node(temp_node); /* Need to create a whole new node, as if you only have a node ptr and do strcpy, the value of the ptr is affected when you do the strcpy of the other equivalent ptr */
	strcpy(temp_node->word, a_node->word);
	strcpy(a_node->word, smallest_node->word);
	strcpy(smallest_node->word, temp_node->word);
	delete temp_node;
}
