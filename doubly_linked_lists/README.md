# C - Doubly linked lists

## Instructions
***Write your own ```printf``` function.***

### Requirements
#### General
* Allowed editors: ```vi```, ```vim```, ```emacs```
* All your files will be compiled on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c```
* A ```README.md``` file, at the root of the folder of the project is mandatory
* Your code should use the ```Betty``` style. It will be checked using ```betty-style.pl``` and ```betty-doc.pl```
* You are not allowed to use global variables
* No more than 5 functions per file
* The prototypes of all your functions should be included in your header file called ```lists.h```

#### Authorized functions and macros
* ```malloc``` (```man 3 malloc```)
* ```free``` (```man 3 free```)
* ```printf``` (```man 3 printf```)
* ```exit``` (```man 3 exit```)

### Tasks
#### 0. Write a function that prints all the elements of a ```dlistint_t``` list.

* Prototype: ```size_t print_dlistint(const dlistint_t *h)```;
* Return: the number of nodes
* Format: see example


#### 1. Write a function that returns the number of elements in a linked ```dlistint_t``` list.
* Prototype: ```size_t dlistint_len(const dlistint_t *h);```

#### 2. Write a function that adds a new node at the beginning of a ```dlistint_t``` list.
* Prototype: ```dlistint_t *add_dnodeint(dlistint_t **head, const int n);```
* Return: the address of the new element, or ```NULL``` if it failed

#### 3. Write a function that adds a new node at the end of a ```dlistint_t``` list.
* Prototype: ```dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);```
* Return: the address of the new element, or ```NULL``` if it failed

#### 4. Write a function that frees a ```dlistint_t``` list.
* Prototype: ```void free_dlistint(dlistint_t *head);```

#### 5. Write a function that returns the nth node of a ```dlistint_t``` linked list.
* Prototype: ```dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);```
* where ```index``` is the index of the node, starting from ```0```
* if the node does not exist, return ```NULL```

#### 6. Write a function that returns the sum of all the data (n) of a ```dlistint_t``` linked list.

* Prototype: ```int sum_dlistint(dlistint_t *head);```
* if the list is empty, return ```0```

#### 7. Write a function that inserts a new node at a given position.

* Prototype: ```dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);```
* where ```idx``` is the index of the list where the new node should be added. Index starts at ```0```
* Returns: the address of the new node, or ```NULL``` if it failed
* if it is not possible to add the new node at index ```idx```, do not add the new node and return ```NULL```

Your files ```2-add_dnodeint.c``` and ```3-add_dnodeint_end.c``` will be compiled during the correction

#### 8. Write a function that deletes the node at index ```index``` of a ```dlistint_t``` linked list.

* Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
* where ```index``` is the index of the node that should be deleted. Index starts at ```0```
* Returns: ```1``` if it succeeded, ```-1``` if it failed



## Exemples
Once the function done, we made some tests to prints all the elements of a dlistint_t list.
```
root@a7169696629a:~/holbertonschool-low_level_programming/doubly_linked_lists# cat 0-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
   int main(void)
   {
     dlistint_t *head;
     dlistint_t *new;
     dlistint_t hello = {8, NULL, NULL};
     size_t n;

     head = &hello;
     new = malloc(sizeof(dlistint_t));
	    if (new == NULL)
	        {
		        dprintf(2, "Error: Can't malloc\n");
		        return (EXIT_FAILURE);
                }
     new->n = 9;
     head->prev = new;
     new->next = head;
     new->prev = NULL;
     head = new;
     n = print_dlistint(head);
     printf("-> %lu elements\n", n);
     free(new);
     return (EXIT_SUCCESS);
    }
root@a7169696629a:~/holbertonschool-low_level_programming/doubly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
root@a7169696629a:~/holbertonschool-low_level_programming/doubly_linked_lists# ./a
9
8
-> 2 elements
root@a7169696629a:~/holbertonschool-low_level_programming/doubly_linked_lists#
```
## Authors
This project was realized by Christophe Ngan (@Sirothpech)