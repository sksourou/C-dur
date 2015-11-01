NAME = phonebook

SRC = Contact.class.cpp main.cpp

OBJECTS = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	g++ $(CFLAGS) -o $(NAME) $(OBJECTS)

%.o: %.cpp
	g++ $(FLAGS) -c $^ -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
