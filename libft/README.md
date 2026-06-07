*This project has been created as part of the 42 curriculum by <fpinheir>.*

Description: Here in this project, i've written and collected a
series of functions, structures, etc, that will be quite useful
during my time here at 42 and beyond. Having all this code collected
here makes it way easier to include it and use in other projects.
	It includes a series of implementations of functions regarding:
string and character manipulation and comparison, memory management,
string creation, input and output of strings, etc. It also contains
code and functions for linked lists.

Instructions: To compile the code into the library 'libft.a', all
you need is to run the command 'make'. It'll compile all the .c
files into objects and archive them all into libft.a. 
Run 'make clean' to delete the object files and 'make fclean'
 to do that and also delete libft.a. 'make re' does the same as
 'make fclean followed by 'make'.

 Resources: I'd like to thank GNU for their amazing make tutorial at
 https://www.gnu.org/software/make/manual/make.html . Khem Raj, for
 the amazing open source repository made on implemetations of libc functions, which helped me a lot with seeing what was going wrong with my code https://github.com/kraj/musl .

An extensive description of most functions can be found in the man
page of their respective non-42 function. The exceptions are:

Function Name ft_substr
Prototype char *ft_substr(char const *s, unsigned int start,
size_t len);
Files to Submit -
Parameters s: The original string from which to create the
substring.
start: The starting index of the substring within
’s’.
len: The maximum length of the substring.
Return Value The substring.
NULL if the allocation fails.
External Function malloc
Description Allocates memory (using malloc(3)) and returns a
substring from the string ’s’.
The substring starts at index ’start’ and has a
maximum length of ’len’.

Function Name ft_strjoin
Prototype char *ft_strjoin(char const *s1, char const *s2);
Files to Submit -
Parameters s1: The prefix string.
s2: The suffix string.
Return Value The new string.
NULL if the allocation fails.
External Function malloc
Description Allocates memory (using malloc(3)) and returns a
new string, which is the result of concatenating
’s1’ and ’s2’.

Function Name ft_strtrim
Prototype char *ft_strtrim(char const *s1, char const *set);
Files to Submit -
Parameters s1: The string to be trimmed.
set: The string containing the set of characters
to be removed.
Return Value The trimmed string.
NULL if the allocation fails.
External Function malloc
Description Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.

Function Name ft_split
Prototype char **ft_split(char const *s, char c);
Files to Submit -
Parameters s: The string to be split.
c: The delimiter character.
Return Value The array of new strings resulting from the split.
NULL if any allocation fails.
The returned structure will be released using: 1)
free() on each string in the array; 2) free() the
array itself.
External Function malloc, free
Description Allocates memory (using malloc(3)) and returns an
array of strings obtained by splitting ’s’ using
the character ’c’ as a delimiter.
Each string in the returned array is allocated
independently.
The array of pointers itself is also allocated
dynamically.
The returned array must be NULL terminated.

Function Name ft_itoa
Prototype char *ft_itoa(int n);
Files to Submit -
Parameters n: The integer to convert.
Return Value The string representing the integer.
NULL if the allocation fails.
External Function malloc
Description Allocates memory (using malloc(3)) and returns
a string representing the integer received as an
argument. Negative numbers must be handled.

Function Name ft_strmapi
Prototype char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));
Files to Submit -
Parameters s: The string to iterate over.
f: The function to apply to each character.
Return Value The string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.
External Function malloc
Description Applies the function f to each character of the
string s, passing its index as the first argument
and the character itself as the second. A new
string is created (using malloc(3)) to store the
results from the successive applications of f.

Function Name ft_striteri
Prototype void ft_striteri(char *s, void (*f)(unsigned int,
char*));
Files to Submit -
Parameters s: The string to iterate over.
f: The function to apply to each character.
Return Value None
External Function None
Description Applies the function ’f’ to each character of the
string passed as argument, passing its index as
the first argument. Each character is passed by
address to ’f’ so it can be modified if necessary.

Function Name ft_putchar_fd
Prototype void ft_putchar_fd(char c, int fd);
Files to Submit -
Parameters c: The character to output.
fd: The file descriptor on which to write.
Return Value None
External Function write
Description Outputs the character ’c’ to the specified file
descriptor.

Function Name ft_putstr_fd
Prototype void ft_putstr_fd(char *s, int fd);
Files to Submit -
Parameters s: The string to output.
fd: The file descriptor on which to write.
Return Value None
External Function write
Description Outputs the string ’s’ to the specified file
descriptor.

Function Name ft_putendl_fd
Prototype void ft_putendl_fd(char *s, int fd);
Files to Submit -
Parameters s: The string to output.
fd: The file descriptor on which to write.
Return Value None
External Function write
Description Outputs the string ’s’ to the specified file
descriptor followed by a newline.

Function Name ft_putnbr_fd
Prototype void ft_putnbr_fd(int n, int fd);
Files to Submit -
Parameters n: The integer to output.
fd: The file descriptor on which to write.
Return Value None
External Function write
Description Outputs the integer ’n’ to the specified file
descriptor.

Function Name ft_lstnew
Prototype t_list *ft_lstnew(void *content);
Files to Submit -
Parameters content: The content to store in the new node.
Return Value A pointer to the new node
External Function malloc
Description Allocates memory (using malloc(3)) and returns
a new node. The ’content’ member variable is
initialized with the given parameter ’content’.
The variable ’next’ is initialized to NULL.

Function Name ft_lstadd_front
Prototype void ft_lstadd_front(t_list **lst, t_list *new);
Files to Submit -
Parameters lst: The address of a pointer to the first node of
a list.
new: The address of a pointer to the node to be
added.
Return Value None
External Function None
Description Adds the node ’new’ at the beginning of the list.

Function Name ft_lstsize
Prototype int ft_lstsize(t_list *lst);
Files to Submit -
Parameters lst: The beginning of the list.
Return Value The length of the list
External Function None
Description Counts the number of nodes in the list.

Function Name ft_lstlast
Prototype t_list *ft_lstlast(t_list *lst);
Files to Submit -
Parameters lst: The beginning of the list.
Return Value Last node of the list
External Function None
Description Returns the last node of the list.

Function Name ft_lstadd_back
Prototype void ft_lstadd_back(t_list **lst, t_list *new);
Files to Submit -
Parameters lst: The address of a pointer to the first node of
a list.
new: The address of a pointer to the node to be
added.
Return Value None
External Function None
Description Adds the node ’new’ at the end of the list.

Function Name ft_lstdelone
Prototype void ft_lstdelone(t_list *lst, void (*del)(void
*));
Files to Submit -
Parameters lst: The node to free.
del: The address of the function used to delete
the content.
Return Value None
External Function free
Description Takes a node as parameter and frees its content
using the function ’del’. Free the node itself but
does NOT free the next node.

Function Name ft_lstclear
Prototype void ft_lstclear(t_list **lst, void (*del)(void
*));
Files to Submit -
Parameters lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
Return Value None
External Function free
Description Deletes and frees the given node and all its
successors, using the function ’del’ and free(3).
Finally, set the pointer to the list to NULL.

Function Name ft_lstiter
Prototype void ft_lstiter(t_list *lst, void (*f)(void *));
Files to Submit -
Parameters lst: The address of a pointer to a node.
f: The address of the function to apply to each
node’s content.
Return Value None
External Function None
Description Iterates through the list ’lst’ and applies the
function ’f’ to the content of each node.

Function Name ft_lstmap
Prototype t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));
Files to Submit -
Parameters lst: The address of a pointer to a node.
f: The address of the function applied to each
node’s content.
del: The address of the function used to delete a
node’s content if needed.
Return Value The new list.
NULL if the allocation fails.
External Function malloc, free
Description Iterates through the list ’lst’, applies the
function ’f’ to each node’s content, and creates
a new list resulting of the successive applications
of the function ’f’. The ’del’ function is used to
delete the content of a node if needed.