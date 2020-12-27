# LIBFT

First 42 project consists in creating functions being part of standard C library, and other personal functions/lib (vector).

# Building

``$> git clone https://github.com/lilafallet/LIBFT_42.git ``

``$> cd LIBFT_42``

  
   ``$> make``

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

FUNCTION NAMES | DESCRIPTION |
:-----------: | :-----------:
ft_substr         |Allocate (with malloc(3)) and return a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’length’.
ft_strjoin        |Allocate (with malloc(3)) and return a new string, which is the result of the concatenation of ’s1’ and ’s2’.
ft_strtrim        |Allocate (with malloc(3)) and return a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
ft_split          |Allocate (with malloc(3)) and return an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.
ft_itoa           |Allocate (with malloc(3)) and return a string representing the integer received as an argument. Negative numbers must be handled.
ft_strmapi        |Applie the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.
ft_putchar_fd     |Output the character ’c’ to the given file descriptor.
ft_putstr_fd      |Output the string ’s’ to the given file descriptor.
ft_putendl_fd     |Output the string ’s’ to the given file descriptor, followed by a newline.
ft_putnbr_fd      |Output the integer ’n’ to the given file descriptor.

## Bonus part

FUNCTION NAMES | DESCRIPTION |
:-----------: | :-----------:
ft_lstnew       |Allocate (with malloc(3)) and return a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
ft_lstadd_front |Add the element ’new’ at the beginning of the list.
ft_lstsize      |Count the number of elements in a list.
ft_lstlast      |Return the last element of the list.
ft_lstadd_back  |Add the element ’new’ at the end of the list.
ft_lstdelone    |Take as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed.
ft_lstclear     |Delete and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.
ft_lstiter      |Iterate the list ’lst’ and applie the function ’f’ to the content of each element.
ft_lstmapi      |Iterate the list ’lst’ and applie the function ’f’ to the content of each element. Create a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.

# Get_next_line

Returns a line ending with a '\n' read from a file descriptor without knowing its size beforehand: [repository of get_next_line](https://github.com/lilafallet/GNL_42)

# Ft_printf

Reproduction of the printf's function : [repository of ft_printf](https://github.com/lilafallet/PRINTF_42)

# Personal functions

## Conversion

FUNCTION NAMES | DESCRIPTION |
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

FUNCTION NAMES | DESCRIPTION |
:-----------: | :-----------:
ft_is_len_zero        |Return FALSE if the length of the string is 0, return the length of the string if the length of the string is different of zero
ft_iscomma            |Return TRUE if the character is a comma
ft_iswhitespace       |Return TRUE if the character is a space or a tabulation
ft_iswhitespacecomma  |Return TRUE if the character is a space or a tabulation or a comma
ft_iswhitespacedigit  |Return TRUE if the character is a space or a tabulation or a number

## Maths

FUNCTION NAMES | DESCRIPTION |
:-----------: | :-----------:
ft_abs                  |Return the absolute value of a number
ft_bubblesort_minindex  |Return the index of the smallest number present in an array of numbers
ft_get_size_of_nb       |Return the length of a number
ft_lfpow                |Return the high value (double) at a given power

## Mem

FUNCTION NAMES | DESCRIPTION |
:-----------: | :-----------:
ft_memdel       |Take as parameter the address of a pointer whose pointed area must be freed with free(3), then the pointer is set to NULL.
ft_memdup       |Similar to strdup, it create a copy of an arbitrary memory area by allocating memory for the copy with malloc.
ft_memjoin_free |Similar to strjoin, it create a string wich contains the assembly of dest and src of the chosen size of len_dest and len_src then duplicate it in the pointer dest

## Output

FUNCTION NAMSE | DESCRIPTION |
:-----------: | :-----------:
ft_putchar_fd     |Output the character ’c’
ft_putstr_fd      |Output the string ’s’
ft_putendl_fd     |Output the string ’s’, followed by a newline
ft_putnbr_fd      |Output the integer ’n’

## String

FUNCTION NAMES | DESCRIPTION |
:-----------: | :-----------:
ft_free_tab       |Free(3) all the string presents in a character string array
ft_strcdup        |Duplicate a string to a given character
ft_strcheck       |Applie a character test function to a string
ft_strclen        |Return the size of a string to a given character.
ft_strdel         |Take as parameter the address of a string that must be free with free(3) and its pointer set to NULL
ft_strequ         |Lexicographically compare str1 and str2. If the two strings are equal, the function return TRUE, or FALSE otherwise
ft_striter        |Applie the function f to each character in the string passed as a parameter. Each character is passed by address to the function f in order to be modified if necessary
ft_strlcpy        |Copies the string src in the string dest up to size - 1 and return the total length of the string they tried to create
ft_strndup        |Returns a pointer to a new string which is a duplicate of the string s. Memory for the new string is obtained with malloc(3), and can be freed with free(3)
ft_strnequ        |Compares lexicographically str1 and str2 up to n characters maximum or a ’0’ has been encountered. If both strings are equal, the function return TRUE, or FALSE otherwise

## Vector

A vector means a container of elements ordered and accessible by indices, the size of which is dynamic: it is updated automatically when elements are added or deleted. The functions that will follow are functions that we can just as well use with strings, but the fact of using vectors will make it easier and more efficient to change thanks to the t_vector structure:
- the character chain: str
- vector size: size
- the size of the character chain: len
- resize vector: resize

``````````````````````````````````````````C
typedef struct	s_vector
{
	char		*str;
	size_t		size;
	size_t		len;
	size_t		resize;
}				t_vector;
```````````````````````````````````````````

FUNCTION NAMES | DESCRIPTION |
:-----------: | :-----------:
vct_add			|Add a character at the end of the vector
vct_addcharat		|Replace a character to the given index
vct_addmem		|Copie len bytes from the memory zone src to the memory zone dest
vct_addstr		|Add a string at the end of the vector
vct_addstrat		|Add a string to the given index
vct_apply		|Applie a testing/modification function to a vector
vct_cat			|Concatenate two vectors
vct_cdup		|Duplicate a vector up to a given character
vct_chr			|Return the index of the first occurence of the desired character or FAILURE if the character has not been found
vct_chrstr		|Return TRUE if the desired string 'search' has be found on the vector's string, FALSE is the string 'search' has not be found
vct_clen		|Return the length of the vector's string up to a given character
vct_cpy			|Copie a vector's content in an other one
vct_cut			|Delete the last character of a vector
vct_cutfrom		|Delete the last nb_of_char of a vector
vct_del			|Delete a vector
vct_dup			|Duplicate a vector
vct_equ			|Return SUCCESS if the strings contained in the two vectors are identicals, otherwise FALSE
vct_getcharat		|Return the nth character of a vector
vct_getfirstchar	|Return the first character of a vector
vct_getlen		|Return the length of the vector's string
vct_getstr		|Return a pointer to the string contained in a vector
vct_join		|Joined the vectors's strings in a new vector
vct_joinfree		|Joined the vectors's strings in a new vector and releases one vector, the other vector or the two vector
vct_new			|Initialize a new vector of the size passed as parameter. If the size is 0, the size will be reset to the value set by DEFAULT_VECTOR_SIZE
vct_nlen		|Return the size of the vector's string on a maximum n bytes
vct_pop			|Detele the first character of a vector
vct_popcut		|Delete the first nth 'start' character and the last nth 'end' character
vct_popfrom		|Delete the first nth characteres of a vector
vct_print		|Display a vector on 'len' byte
vct_print_fd		|Display a vector on 'len' byte on a given file descriptor.
vct_printendl		|Display a vector one 'len' byte and add a '\n'
vct_printendl_fd	|Display a vector one 'len' byte and add a '\n' on a given file descriptor
vct_push		|Add a character at the begining of a vector
vct_pushstr		|Add a string at the begining of a vector
vct_readline		|Read a line on a file descriptor et return the latter into the vector's string given in the function's parameter
vct_resize		|Resize the vector in function of the given 'len_to_resize' parameter
vct_split		|Divide the character string contained in the vector via the characters present in 'str' and return to each call of 'split' the next part divided in a new vector as long as it is recalled with the same vector or NULL. If the initial vector changes, the division will be done on this new vector. The NO_SEP provides all the word but not the separator in a separate vector, the flag EACH_SEP flag provides each separator in a separate vector, the flag ALL_SEP provides all the separators that follow in the same vector, the flag WORD provides all the word that follow in the same vector.
vct_splitchr		|Divide the initial vector on the first occurrence of the character c (this one not included). The first part is returned in a new vector while the second is copied into the initial vector by overwriting the data initially present.
vct_strdup		|Return a copy of the vector's string
