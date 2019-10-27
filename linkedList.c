#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

//Should take a pointer to a node struct and print out all of the data in the list
void print_list(struct node * n){
  printf("[ ");
  while(n->next != 0){
    printf("%d ", n->i);
    n = n->next;
  }
  printf("]\n");
}


// Should take a pointer to the existing list and the data to be added, create a new node and put it at the beginning of the list.
// The second argument should match whatever data you contain in your nodes.
// Returns a pointer to the beginning of the list.
struct node * insert_front(struct node * n, int data){
  struct node *first = malloc(sizeof(struct node));
  first->i = data;
  first->next = n;
  return first;
}


//Should take a pointer to a list as a parameter and then go through the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).
// struct node * free_list(struct node *);


// Remove the node containing data from the list pointed to by front.
// If data is not in the list, nothing is changed.
// Returns a pointer to the beginning of the list.
// struct node * remove(struct node *front, int data);
