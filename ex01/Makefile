NAME =		init
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
	rm -r $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: clean fclean re all
