NAME        = bureaucrat

CC          = c++
CFLAGS      = -Wall -Wextra -Werror -std=c++98 -MMD -MP

# Source files
SRCS        = main.cpp Bureaucrat.cpp

# Object directory
OBJ_DIR     = obj/

# Convert source files to object files in the obj directory
OBJS        = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

# Dependency files (generated automatically by -MMD)
DEPS        = $(OBJS:.o=.d)

RM          = rm -rf

# Colors (Optional, just makes it look nice)
GREEN       = \033[0;32m
RESET       = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)Linking $(NAME)...$(RESET)"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Compilation successful!$(RESET)"

# Pattern rule to compile .cpp to .o
# The | ensure directory exists but doesn't rebuild if dir timestamp changes
$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)
	@echo "Object files removed."

fclean: clean
	$(RM) $(NAME)
	@echo "Executable removed."

re: fclean all

# Include the dependency files so Make knows about header changes
-include $(DEPS)

.PHONY: all clean fclean re