# C - Hash tables
## Requirements
### General
* Allowed editors:```vi```, ```vim```, ```emacs```
* All your files will be compiled on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
* All your files should end with a new line
* A ```README.md``` file, at the root of the folder of the project is mandatory
* Your code should use the ```Betty``` style. It will be checked using```betty-style.pl``` and ```betty-doc.pl```
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called ```hash_tables.h```
* Don’t forget to push your header file
* All your header files should be include guarded

### Tasks
#### 0. Prototype: ```hash_table_t *hash_table_create(unsigned long int size);```

#### 1. Prototype: ```unsigned long int hash_djb2(const unsigned char *str);```

#### 2. Prototype: ```unsigned long int key_index(const unsigned char *key, unsigned long int size);```

#### 3. Prototype: ```int hash_table_set(hash_table_t *ht, const char *key, const char *value);```

#### 4. Prototype: ```char *hash_table_get(const hash_table_t *ht, const char *key);```

#### 5. Prototype: ```void hash_table_print(const hash_table_t *ht);```

#### 6. Prototype: ```void hash_table_delete(hash_table_t *ht);```

## Authors
This project was realized by Christophe Ngan (@Sirothpech)