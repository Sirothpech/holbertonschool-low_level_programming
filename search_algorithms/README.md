# C - Search Algorithms

## Introduction
This repository is about our project solo after more three months learning C programming language at Holberton School.
The project aims to choose what is the best search algorithm to use depending on your needs.

## Instructions
***Choose the best search algorithm (linear search or binary search) to use depending on your needs***

## Requirements
### General
* Allowed editors:```vi```, ```vim```, ```emacs```
* All your files will be compiled on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
* All your files should end with a new line
* A ```README.md``` file, at the root of the folder of the project is mandatory
* Your code should use the ```Betty``` style. It will be checked using```betty-style.pl``` and ```betty-doc.pl```
* You are not allowed to use global variables
* No more than 5 functions per file
* You are only allowed to use the ```printf``` function of the standard library. Any call to another function like ```strdup```, ```malloc```, … is forbidden.
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called ```search_algos.h```
* Don’t forget to push your header file
* All your header files should be include guarded

## Tasks and Prototype
### Tasks 0 and 1

#### Linear search
Write a function that searches for a value in an array of integers using the Linear search algorithm

* Prototype : ```int linear_search(int *array, size_t size, int value);```
* Where ```array``` is a pointer to the first element of the array to search in
* ```size``` is the number of elements in ```array```
* And ```value``` is the value to search for
* Your function must return the first index where ```value``` is located
* If ```value``` is not present in```array``` or if ```array``` is NULL, your function must return ```-1```
* Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

#### Binary search

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

* Prototype : ```int binary_search(int *array, size_t size, int value);```
* Where ```array``` is a pointer to the first element of the array to search in
* ```size``` is the number of elements in ```array```
* And ```value``` is the value to search for
* Your function must return the first index where ```value``` is located
* You can assume that ```array``` will be sorted in ascending order
* You can assume that ```value``` won’t appear more than once in ```array```
* If ```value``` is not present in```array``` or if ```array``` is NULL, your function must return ```-1```
* You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

### Tasks 2 to 6
Write files containing big O notations.
* Time complexity and Space complexity

```
root@103eae5f6fe8:~/holbertonschool-low_level_programming/search_algorithms$ cat 0-main.c
$include <stdio.h>
$include <stdlib.h>
$include "search_algos.h"

/**
 * main - Entry point
  *
   * Return: Always EXIT_SUCCESS
    */
    int main(void)
    {
        int array[] = {
	        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
		    };
		        size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
        printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
	    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
	        return (EXIT_SUCCESS);
		}
		root@103eae5f6fe8:~/holbertonschool-low_level_programming/search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
		root@103eae5f6fe8:~/holbertonschool-low_level_programming/search_algorithms$ ./0-linear
		Value checked array[0] = [10]
		Value checked array[1] = [1]
		Value checked array[2] = [42]
		Value checked array[3] = [3]
		Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
```

#### All Prototypes:

* ```int linear_search(int *array, size_t size, int value);```
* ```int binary_search(int *array, size_t size, int value);```

## Authors
This project was realized by Christophe Ngan (@Sirothpech)