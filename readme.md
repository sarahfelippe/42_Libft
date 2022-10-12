# Deliverable

Create a library of functions in C

# Constrains of the project

PART 1
No standard function/library in C is allowed, unless it is explicitly permitted 

- Turn-in functions [mandatory]:
  * Makefile
  * libft.h
  
  * ft_isalpha (it must behave exactly like function 'isalpha' of library <ctype.h>)
  * ft_isdigit (it must behave exactly like function 'isdigit' of library <ctype.h>)
  * ft_isalnum (it must behave exactly like function 'isalnum' of library <ctype.h>)
  * ft_isascii (it must behave exactly like function 'isascii' of library <ctype.h>)
  * ft_toupper (it must behave exactly like function 'toupper' of library <ctype.h>)
  * ft_tolower (it must behave exactly like function 'tolower' of library <ctype.h>)
  * ft_memset (it must behave exactly like function 'memset' of library <string.h>)
  * ft_bzero (it must behave exactly like function 'bzero' of library <string.h>)
  * ft_memcpy (it must behave exactly like function 'memcpy' of library <string.h>)
  * ft_memmove (it must behave exactly like function 'memmove' of library <string.h>)
  * ft_memchr (it must behave exactly like function 'memchr' of library <string.h>)
  * ft_memcmp (it must behave exactly like function 'memcmp' of library <string.h>)
  * ft_strlen (it must behave exactly like function 'strlen' of library <string.h>)
  * ft_strlcpy (it must behave exactly like function 'strlcpy' of library <string.h>)
  * ft_strlcat (it must behave exactly like function 'strlcat' of library <string.h>)
  * ft_strchr (it must behave exactly like function 'strchr' of library <string.h>)
  * ft_strrchr (it must behave exactly like function 'strrchr' of library <string.h>)
  * ft_strncmp (it must behave exactly like function 'strncmp' of library <string.h>)
  * ft_strnstr (it must behave exactly like function 'strnstr' of library <string.h>)
  * ft_atoi (it must behave exactly like function 'atoi' of library <stdlib.h>)
  * ft_calloc (it must behave exactly like function 'calloc' of library <stdlib.h>)
      - allowed function: malloc of library <stdlib.h>
  * ft_strdup (it must behave exactly like function 'strdup' of library <string.h>)
      - allowed function: malloc of library <stdlib.h>

PART 2
- Turn-in functions [mandatory]:
	* char *ft_substr(char const *s, unsigned int start, size_t len)
		  - behaviour: function returns a subtring from the string 's', starting at index 'start' and until the max size 'len'
      - allowed function: malloc of library <stdlib.h>
      
	* char *ft_strjoin(char const *s1, char const *s2)
		  - behaviour: function returns a new string, which is the result of the concatenation of 's1' and 's2'
      - allowed function: malloc of library <stdlib.h>
      
	* char *ft_strtrim(char const *s1, char const *set)
		  - behaviour: function returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
      - allowed function: malloc of library <stdlib.h>
      
  * char **ft_split(char const *s, char c)
  	  - behaviour: function returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.
      - allowed function: malloc and free of library <stdlib.h>
      
  * char *ft_itoa(int n)
  	  - behaviour: function returns a string representing the integer received as an argument. Negative numbers must be handled.
      - allowed function: malloc of library <stdlib.h>
      
  * char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
  	  - behaviour: function applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string resulting from successive applications of ’f’.
      - allowed function: malloc of library <stdlib.h>
      
  * void ft_striteri(char *s, void (*f)(unsigned int, char*))
  	  - behaviour: function applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.
      - allowed function: none
      
  * void ft_putchar_fd(char c, int fd)
  	  - behaviour: function outputs the character ’c’ to the given file descriptor.
      - allowed function: write of library <unistd.h>
      
  * void ft_putstr_fd(char *s, int fd)
  	  - behaviour: function outputs the string ’s’ to the given file descriptor.
      - allowed function: write of library <unistd.h>
      
  * void ft_putendl_fd(char *s, int fd)
  	  - behaviour: function outputs the string ’s’ to the given file descriptor followed by a newline.
      - allowed function: write of library <unistd.h>
      
  * void ft_putnbr_fd(int n, int fd)
  	  - behaviour: function outputs the integer ’n’ to the given file descriptor.
      - allowed function: write of library <unistd.h>
  
- All files must follow 42 norm
