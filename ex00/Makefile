NAME =		zombie

OBJ_DIR =	obj/

INC = \
			Zombie.hpp

SRC = \
			main.cpp \
			newZombie.cpp \
			randomChump.cpp \
			Zombie.cpp

OBJ =		$(patsubst %.cpp,$(OBJ_DIR)%.o,$(SRC))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

$(OBJ_DIR)%.o: %.cpp $(INC)
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

val:
	valgrind --leak-check=full --leak-check=full \
	--show-leak-kinds=definite,indirect,possible \
	--track-fds=yes ./$(NAME)

.PHONY: all clean fclean re val
