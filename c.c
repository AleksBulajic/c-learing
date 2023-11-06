#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    return 0;
}

// Variable Declaration:

// In C, you declare variables with a specific data type. The syntax for declaring a variable is as follows:
// c
// Copy code
// data_type variable_name;

// For example, to declare a variable called x that stores integers, you would write:
int x;

//* DATA types in C

// short: Used to store small integers.
short my_short;

// long: Used to store large integers.
long my_long;

// unsigned int: Used to store only non-negative integers.
unsigned int my_unsigned_int;

// signed int: Used to store both positive and negative integers.
signed int my_signed_int;

// long long: Used to store very large integers.
long long my_long_long;

// unsigned long: Used to store only non-negative large integers.
unsigned long my_unsigned_long;

// unsigned long long: Used to store very large non-negative integers.
unsigned long long my_unsigned_long_long;

// long double: Used to store extended-precision floating-point numbers.
long double my_long_double;

// Arrays: Used to store multiple values of the same type consecutively in memory.
int my_array[10]; // Array of 10 integers

// Pointers: Used to store memory addresses.
int *my_pointer; // Pointer to an integer

// Enumerations: Used to define a set of named constants.
enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

// Structs: Used to create user-defined data types that may contain various data types.
struct Person {
    char name[50];
    int age;
    float salary;
};
struct Person person1;

