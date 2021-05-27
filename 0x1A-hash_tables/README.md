<img src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png" style="max-width:40%;width:40%;height:40%;">

# 0x1A. C - Hash tables

## Tasks

### 0. >>> ht = {}
Write a function that creates a hash table.
* Prototype: `hash_table_t *hash_table_create(unsigned long int size)`;
### 1. djb2
Write a hash function implementing the djb2 algorithm.
* Prototype: `unsigned long int hash_djb2(const unsigned char *str)`;

### 2. key -> index
Write a function that gives you the index of a key.
* Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size)`;

### 3. >>> ht['betty'] = 'holberton'
Write a function that adds an element to the hash table.
* Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value)`;

### 4. >>> ht['betty']
Write a function that retrieves a value associated with a key.
* Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key)`;

### 5. >>> print(ht)
Write a function that prints a hash table.
* Prototype: `void hash_table_print(const hash_table_t *ht)`;

### 6. >>> del ht
Write a function that deletes a hash table.
* Prototype: `void hash_table_delete(hash_table_t *ht)`;