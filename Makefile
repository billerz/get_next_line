NAME:= gnl.out
SRCS_DIR:= srcs/
BONUS_DIR:= bonus/
SRCS_NAME:= main.c \
	get_next_line.c \
	get_next_line_utils.c \

SRCS:= $(addprefix $(SRCS_DIR), $(SRCS_NAME))
INC:= includes
CC:= gcc
FLAGS:= -Wall -Werror -Wextra -D
BUFF:= BUFFER_SIZE=42

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) -I./$(INC) $(FLAGS) $(BUFF) $^ -o $@

bonus:
	$(CC) -I./bonus $(FLAGS) $(BUFF) bonus/*.c -o gnl.out
	
clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean re bonus
