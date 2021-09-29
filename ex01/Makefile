# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgalian- <jgalian-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 08:58:17 by jgalian-          #+#    #+#              #
#    Updated: 2021/09/29 09:26:20 by jgalian-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		awesome_phonebook
CC =		clang++
CPPFLAGS =	-Wall -Wextra -Werror -c
SRCS =		main.cpp Phonebook.cpp Contact.cpp
OBJS =		$(SRCS:.cpp=.o)
OBJ_PATH = 	./obj

all: $(NAME)

$(NAME): $(SRCS)
	mkdir -p $(OBJ_PATH)
	$(CC) $(CPPFLAGS) $^
	mv $(OBJS) $(OBJ_PATH)
	$(CC) $(OBJ_PATH)/* -o $@

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
