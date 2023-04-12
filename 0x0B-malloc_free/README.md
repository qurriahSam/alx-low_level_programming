# C - Dynamic Memory Allocation

- Malloc - The malloc() function allocates size bytes and returns a pointer to the allocated
memory. The memory is not initialized.

- Free - When the allocated memory is not needed anymore, you must return it to the
operating system by calling the function free.

File | Description
-----------|-------------
`0-create_array.c`| Creates an array of chars, and initializes it with a specific char.
`1-strdup.c` | Returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
`2-str_concat.c` | Concatenates two strings.
`3-alloc_grid.c` | Returns a pointer to a 2 dimensional array of integers.
`4-free_grid.c` | Frees a 2 dimensional grid previously created by our alloc_grid function.
`main.h` | Header file contaning all the function prototypes.
