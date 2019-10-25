
//Should take a pointer to a node struct and print out all of the data in the list
id print_list(struct node *);



// Should take a pointer to the existing list and the data to be added, create a new node and put it at the beginning of the list.
// The second argument should match whatever data you contain in your nodes.
// Returns a pointer to the beginning of the list.
struct node * insert_front(struct node *, int);


//Should take a pointer to a list as a parameter and then go through the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).
struct node * free_list(struct node *);


// Remove the node containing data from the list pointed to by front.
// If data is not in the list, nothing is changed.
// Returns a pointer to the beginning of the list.
struct node * remove(struct node *front, int data);
