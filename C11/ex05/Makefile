CC = gcc
CFLAGS = -Wall -Wextra -Wall
SRCS = main.c
OBJS = $(SRCS:.c=.o)
TARGET = do-op

all : $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all
