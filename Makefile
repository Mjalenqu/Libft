# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mjalenqu <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/02 11:39:17 by mjalenqu     #+#   ##    ##    #+#        #
#    Updated: 2018/10/03 08:44:29 by mjalenqu    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
HEADERS = *.h
FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRC) -I $(HEADERS)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all
