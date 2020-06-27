# LIBFT

First project of 42 which consists in the creation of functions present in the standard C library.

## Part 1
* ft_memset
* ft_bzero
* ft_memcpy
* ft_memccpy
* ft_memmove
* ft_memchr
* ft_memcmp
* ft_strlen
* ft_strdup
* ft_strcpy
* ft_strncpy
* ft_strcat
* ft_strncat
* ft_strlcat
* ft_strchr
* ft_strrchr
* ft_strstr
* ft_strnstr
* ft_strcmp
* ft_strncmp
* ft_atoi
* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint
* ft_toupper
* ft_tolower

## Part 2

FUNCTION NAME | DESCRIPTION |
:-----------: | :-----------:
ft_substr         |Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’lenght’.
ft_strjoin        |Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
ft_strtrim        |Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
ft_split          |Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.
ft_itoa           |Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
ft_strmapi        |Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.
ft_putchar_fd     |Outputs the character ’c’ to the given file descriptor.
ft_putstr_fd      |Outputs the string ’s’ to the given file descriptor.
ft_putendl_fd     |Outputs the string ’s’ to the given file descriptor, followed by a newline.
ft_putnbr_fd      |Outputs the integer ’n’ to the given file descriptor.

## Bonus part

FUNCTION NAME | DESCRIPTION |
:-----------: | :-----------:
ft_lstnew       |Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
ft_lstadd_front |Adds the element ’new’ at the beginning of the list.
ft_lstsize      |Counts the number of elements in a list.
ft_lstlast      |Returns the last element of the list.
ft_lstadd_back  |Adds the element ’new’ at the end of the list.
ft_lstdelone    |Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed.
ft_lstclear     |Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.
ft_lstiter      |Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
ft_lstmap       |Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.

# Personal functions

## Conversion

FUNCTION NAME | DESCRIPTION |
:-----------: | :-----------:
ft_atoul        |Convert a string to an unsigned long
ft_int_to_char  |Convert values of type integer to values of type character
ft_ltoa_base    |Convert a long to a string in the database
ft_ultoa_base   |Convert an unsigned long to a string in the database

## Initialisation

FUNCTION NAME | DESCRIPTION |
:-----------: | :-----------:
ft_calloc |Allocates a memory block by setting all these bytes to 0

## Is something

FUNCTION NAME | DESCRIPTION |
:-----------: | :-----------:
ft_is_len_zero        |Return FALSE if the length of the string is 0, return the length of the string if the length of the string is different of zero
ft_iscomma            |Return TRUE if the character is a comma
ft_iswhitespace       |Return TRUE if the character is a space or a tabulation
ft_iswhitespacecomma  |Return TRUE if the character is a space or a tabulation or a comma
ft_iswhitespacedigit  |Return TRUE if the character is a space or a tabulation or a number

## Maths

FUNCTION NAME | DESCRIPTION |
:-----------: | :-----------:
ft_abs                  |Return the absolute value of a number
ft_bubblesort_minindex  |Return the index of the smallest number present in an array of numbers
ft_get_size_of_nb       |Return the length of a number
ft_lfpow                |Return the high value (double) at a given power

## Mem

FUNCTION NAME | DESCRIPTION |
:-----------: | :-----------:
ft_memdel       |Takes as parameter the address of a pointer whose pointed area must be freed with free(3), then the pointer is set to NULL.
ft_memdup       |Similar to strdup, it creates a copy of an arbitrary memory area by allocating memory for the copy with malloc.
ft_memjoin_free |Similar to strjoin, it creates a string wich contains the assembly of dest and src of the chosen size of len_dest and len_src then duplicate it in the pointer dest

## Output

FUNCTION NAME | DESCRIPTION |
:-----------: | :-----------:
