#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main(){
  struct node *list = calloc(1, sizeof(struct node));

  printf("Print empty list:\n");
  print_list(list);

  printf("Adding #s 0-9 to list.\n");
  int i = 0;
  for (i = 0; i < 10; i++){
    list = insert_front(list, i);
  }

  printf("Print list:\n");
  print_list(list);


  return 0;

}
