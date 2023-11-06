#include <stdio.h>
#include <string.h> // Include the string.h header for the strcpy function

int main() {
    printf("Hello, world!\n");
    
    // Variable Declaration
    int x;

    // DATA types in C
    short my_short;
    long my_long;
    unsigned int my_unsigned_int;
    signed int my_signed_int;
    long long my_long_long;
    unsigned long my_unsigned_long;
    unsigned long long my_unsigned_long_long;
    long double my_long_double;

    // Arrays
    int my_array[10]; // Array of 10 integers

    // Pointers
    int *my_pointer; // Pointer to an integer

    // Enumerations
    enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
    enum week today = Wednesday;

    // Structs
    struct Person {
        char name[50];
        int age;
        float salary;
    };
    struct Person person1;
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    person1.salary = 50000.0;

    // Printing the values
    printf("x: %d\n", x);
    printf("my_short: %hd\n", my_short);
    printf("my_long: %ld\n", my_long);
    printf("my_unsigned_int: %u\n", my_unsigned_int);
    printf("my_signed_int: %d\n", my_signed_int);
    printf("my_long_long: %lld\n", my_long_long);
    printf("my_unsigned_long: %lu\n", my_unsigned_long);
    printf("my_unsigned_long_long: %llu\n", my_unsigned_long_long);
    printf("my_long_double: %Lf\n", my_long_double);

    printf("Array elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("my_array[%d] = %d\n", i, my_array[i]);
    }

    printf("Pointer value: %p\n", (void *)my_pointer);

    printf("Today is: %d\n", today);

    printf("Person 1's name: %s\n", person1.name);
    printf("Person 1's age: %d\n", person1.age);
    printf("Person 1's salary: %f\n", person1.salary);

    return 0;
}
