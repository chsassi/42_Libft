NAME = libft.a
HNAME = libft.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
COMPILE = $(CC) $(CFLAGS) -c
ARCHIVE = ar rc $(NAME)
PRINTF_DIR = ./ft_printf
GET_NEXT_LINE_DIR = ./get_next_line

SRC =	./ft_isalpha.c \
		./ft_isdigit.c \
		./ft_isalnum.c \
		./ft_isascii.c \
		./ft_isprint.c \
		./ft_strlen.c \
		./ft_memset.c \
		./ft_bzero.c \
		./ft_memcpy.c \
		./ft_memmove.c \
		./ft_strlcpy.c \
		./ft_strlcat.c \
		./ft_toupper.c \
		./ft_tolower.c \
		./ft_strchr.c \
		./ft_strrchr.c \
		./ft_memchr.c \
		./ft_strncmp.c \
		./ft_memcmp.c \
		./ft_strnstr.c \
		./ft_atoi.c \
		./ft_calloc.c \
		./ft_strdup.c \
		./ft_substr.c \
		./ft_strjoin.c \
		./ft_strtrim.c \
		./ft_split.c \
		./ft_itoa.c \
		./ft_strmapi.c \
		./ft_striteri.c \
		./ft_putchar_fd.c \
		./ft_putstr_fd.c \
		./ft_putendl_fd.c \
		./ft_putnbr_fd.c \
		./ft_lstnew.c \
		./ft_lstadd_front.c \
		./ft_lstsize.c \
		./ft_lstlast.c \
		./ft_lstadd_back.c \
		./ft_lstdelone.c \
		./ft_lstclear.c \
		./ft_lstiter.c \
		./ft_lstmap.c \

OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): PRINTF_COMP GNL_COMP $(OBJ) $(HNAME)
	@$(COMPILE) $(SRC)
	@$(ARCHIVE) $(NAME) $(OBJ)
	@echo "Libft Compiled!📖✅\033[0;37m"

PRINTF_COMP:
	$(MAKE) -C $(PRINTF_DIR)
	mv ./ft_printf/libftprintf.a ./$(NAME)

GNL_COMP:
	$(MAKE) -C $(GET_NEXT_LINE_DIR)
	mv ./get_next_line/libgnl.a ./$(NAME)

RM = rm -f

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(PRINTF_DIR)/*.o
	@$(RM) $(GET_NEXT_LINE_DIR)/*.o

re: fclean all printf get_next_line

.PHONY: all clean fclean re