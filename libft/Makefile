
# Name of the library
NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strnstr.c \
       ft_atoi.c \
       ft_calloc.c \
       ft_strdup.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strtrim.c \
       ft_split.c \
       ft_itoa.c \
       ft_strmapi.c \
       ft_striteri.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c

# Object files
OBJS = $(SRCS:.c=.o)

# Default rule
all: $(NAME)

# Create the library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compile source files into object files
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Remove object files
clean:
	rm -f $(OBJS)

# Remove object files and library
fclean: clean
	rm -f $(NAME)

# Recompile everything
re: fclean all

.PHONY: all clean fclean re

# NAME = libft.a

# CC = cc
# CFLAGS = -Wall -Wextra -Werror

# SRCS = ft_isalpha.c \
#        ft_isdigit.c \
#        ft_isalnum.c \
#        ft_isascii.c \
#        ft_isprint.c \
#        ft_strlen.c \
#        ft_memset.c \
#        ft_bzero.c \
#        ft_memcpy.c \
#        ft_memmove.c \
#        ft_strlcpy.c \
#        ft_strlcat.c \
#        ft_toupper.c \
#        ft_tolower.c \
#        ft_strchr.c \
#        ft_strrchr.c \
#        ft_strncmp.c \
#        ft_memchr.c \
#        ft_memcmp.c \
#        ft_strnstr.c \
#        ft_atoi.c \
#        ft_calloc.c \
#        ft_strdup.c \
#        ft_substr.c \
#        ft_strjoin.c \
#        ft_strtrim.c \
#        ft_split.c \
#        ft_itoa.c \
#        ft_strmapi.c \
#        ft_striteri.c \
#        ft_putchar_fd.c \
#        ft_putstr_fd.c \
#        ft_putendl_fd.c \
#        ft_putnbr_fd.c

# BONUS = ft_lstnew.c \
#         ft_lstadd_front.c \
#         ft_lstsize.c \
#         ft_lstlast.c \
#         ft_lstadd_back.c \
#         ft_lstdelone.c \
#         ft_lstclear.c \
#         ft_lstiter.c \
#         ft_lstmap.c

# OBJS = $(SRCS:.c=.o)
# BONUS_OBJS = $(BONUS:.c=.o)

# all: $(NAME)

# $(NAME): $(OBJS)
# 	ar rcs $(NAME) $(OBJS)

# bonus: $(OBJS) $(BONUS_OBJS)
# 	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# %.o: %.c libft.h
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	rm -f $(OBJS) $(BONUS_OBJS)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all clean fclean re bonus
