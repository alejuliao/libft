NAME = libft.a

FILES = ft_bzero.c\
 ft_isalnum.c\
 ft_isalpha.c\
 ft_isascii.c\
 ft_isdigit.c\
 ft_isprint.c\
 ft_memchr.c\
 ft_memcmp.c\
 ft_memcpy.c\
 ft_memmove.c\
 ft_memset.c\
 ft_strchr.c\
 ft_strlen.c\
 ft_strncmp.c\
 ft_strrchr.c\
 ft_tolower.c\
 ft_toupper.c\
 ft_strnstr.c\
 ft_atoi.c\
 ft_strdup.c\
 ft_calloc.c\
 ft_strlcpy.c\
 ft_strlcat.c\
 ft_substr.c\
 ft_strjoin.c\
 ft_strtrim.c\
 ft_split.c\
 ft_itoa.c\
 ft_strmapi.c\
 ft_striteri.c\
 ft_putchar_fd.c\
 ft_putstr_fd.c\
 ft_putendl_fd.c\
 ft_putnbr_fd.c

B_FILES = ft_lstnew.c\
 ft_lstadd_front.c\
 ft_lstsize.c\
 ft_lstlast.c\
 ft_lstadd_back.c\
 ft_lstdelone.c\
 ft_lstiter.c\

O_BONUS = $(B_FILES:.c=.o)

INCLUDES = libft.h

FLAGS = -Wall -Wextra -Werror

O_FLAGS = -c

O_FILES = $(FILES:.c=.o)

bonus: $(O_BONUS)

all: $(NAME)

$(NAME): $(O_FILES)

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf $(O_BONUS) $(O_FILES)

re: fclean all

%.o: %.c
	cc -I$(INCLUDES) $(O_FLAGS) $(FLAGS) $< -o $@
	ar -rc $(NAME) $@
