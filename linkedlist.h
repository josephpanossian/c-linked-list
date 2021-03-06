#ifndef GENERIC_LINKED_LIST_HEADER
#define GENERIC_LINKED_LIST_HEADER

struct list_t;
struct node;

/* Function: list_create
 * ------
 * creates an empty linked list
 * 
 * @returns: 
 *      struct list: pointer to head of empty linked list
 */
struct list_t *list_create();

/* Function: node_create
 * ------
 *  creates a new node
 *  
 *  @params: 
 *      data: data to insert into the node
 *  @returns: 
 *      struct list: pointer to the newly created node 
 */
struct node *node_create();

/* Function: list_prepend
 * ------
 *  adds a new node to the beginning of the list
 *
 *  @params: 
 *      data: data to insert
 *  @returns: 
 *      0 if insert is succesful, 1 otherwise
 *
 */
int list_prepend(struct list_t* list, void *data);

/* Function: list_append
 * ------
 *  adds a new node to the end of the list
 *
 *  @params: 
 *      data: data to insert
 *  @returns: 
 *      0 if insert is succesful, 1 otherwise
 */
int list_append(struct list_t* list, void *data);

/* Function: list_insert
 * ------
 *  adds a node to a given index in the list (0 based indexing)
 *
 *  @params:
 *      data: data to insert
 *      index: index to insert at
 *  @returns:
 *      int: 0 if insert is successful, 1 otherwise
 */
int list_insert(struct list_t* list, void *data, int index);

/* Function: node_print
 * ------
 *  prints the data of a given node
 *
 *  @params: node: node of data to print
 *  @returns: NULL
 */
void list_print (struct list_t* list);

/* Function: list_print
 * ------
 * returns the length of a given list
 *
 * @params:
 *      struct list*: list to compute length of
 * @returns: 
 *      int: length of list
 */
int list_length (struct list_t *list);

int list_find (struct list_t *list, void *data);
#endif
