struct node { int i; struct node *next; };
id print_list(struct node *);
struct node * insert_front(struct node *, int);
struct node * free_list(struct node *);
struct node * remove(struct node *front, int data);   
