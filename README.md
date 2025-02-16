# libft

**libft** is a custom C library developed as part of the curriculum at **Ecole 42**. This library implements a set of essential functions that enhance the standard C library and will be used as a foundation for upcoming projects at 42.

## Table of Contents

- [libft](#libft)
	- [Table of Contents](#table-of-contents)
	- [Installation](#installation)
	- [Usage](#usage)
	- [Functions](#functions)
	- [Contributing](#contributing)

## Installation

To compile the library, run:

```bash
make
```

This will generate the libft.a file, which you can link to your future projects.

## Usage

To use libft in your project, include the header file:

```bash
#include "libft.h"
```

When compiling, make sure to link the library:

```bash
gcc your_file.c libft.a -I. -o your_program
```


## Functions
This library includes implementations of fundamental functions, such as:

String manipulation: ft_strlen, ft_strcpy, ft_strdup, etc.

Memory management: ft_memset, ft_memcpy, ft_memmove, etc.

Character checks: ft_isalpha, ft_isdigit, ft_isalnum, etc.

Conversion functions: ft_atoi, ft_itoa, etc.

Linked list utilities: ft_lstnew, ft_lstadd_front, ft_lstclear, etc.


## Contributing
Contributions are welcome! If you would like to improve or expand this library, feel free to open an issue or submit a pull request.



This library is a key part of the 42 curriculum and will serve as a base for many upcoming projects. Make sure to fully understand its functionality, as it will be essential for your journey at Ecole 42!! 🚀
