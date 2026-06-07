NAME=push_swap

INC_PATH=include

LIB_PATH=libft
_LIB=libft.a
LIB=libft/libft.a

CC=cc
CFLAGS=-Wall -Wextra -Werror -L$(LIB_PATH) -l:$(_LIB) -I$(INC_PATH)


ALG_PATH=algorithms
_ALG=	adaptive.c \
		complex.c \
		medium.c \
		simple.c

ALG=$(patsubst %,$(ALG_PATH)/%,$(_ALG))


METRIC_PATH=metrics
_METRIC=	benchmark.c \
			disorder.c \
			op_counter.c

METRIC=$(patsubst %,$(METRIC_PATH)/%,$(_METRIC))


OPS_PATH=operations
_OPS=	push.c \
		reverse_rotate.c \
		rotate.c \
		swap.c

OPS=$(patsubst %,$(OPS_PATH)/%,$(_OPS))


SRC_PATH=src
_SRC=	$(OPS)

SRC=$(patsubst %,$(SRC_PATH)/%,$(_SRC))

OBJ=$(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ) $(LIB) main.o
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(LIB):
	make -C $(LIB_PATH)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re