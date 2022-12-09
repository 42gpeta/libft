## 
##	** SYNTAX **
##
## <cible> : <dependances>
##	<commande>

##	** Vairables **
##
##	// declaration
## <variable_name> = <name_de_ce_qu_on_veut>
##
##	// utilisation
## $(variable_name)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_bzero.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ = $(SRC:.c=.o)
#SRC_BONUS =
#OBJ_BONUS =
AR = ar -rcs
NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJ)
#placement des objets dans la librairie
	$(AR) $(NAME) $<
	$(CC) $(OBJ) -o $(NAME)

%.o : %.c
# creation de tous les .o a partir des .c w/ flags
	$(CC) $(CFLAGS) -c $<

clean : $(OBJ)
	rm *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all







