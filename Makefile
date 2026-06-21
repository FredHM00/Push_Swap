NAME=push_swap

INC_PATH=include

LIB_PATH=libft
_LIB=libft.a
LIB=libft/libft.a

CC=cc
CFLAGS=-Wall -Wextra -Werror -I$(INC_PATH)


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

PRS_PATH=parsing
_PRS=	is_valid_number.c \
		parse_args.c \
		strategy_flags.c \
		validate.c

PRS=$(patsubst %,$(PRS_PATH)/%,$(_PRS))

STK_PATH=stack
_STK=	stack_free.c \
		stack_init.c \
		stack_utils.c

STK=$(patsubst %,$(STK_PATH)/%,$(_STK))

SRC_PATH=src
_SRC=	$(ALG) $(METRIC) $(OPS) $(PRS) $(STK) 

SRC=$(patsubst %,$(SRC_PATH)/%,$(_SRC))

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIB) main.c
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) main.c -L$(LIB_PATH) -l:$(_LIB) 

$(LIB):
	make -C $(LIB_PATH)

clean:
	rm -f $(OBJ)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

re: fclean
	make all
	make re -C libft

.PHONY: all clean fclean re