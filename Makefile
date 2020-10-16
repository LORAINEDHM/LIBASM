#################
##  VARIABLES  ##
#################

#	Sources

SRCS =	$(SRCSDIR)/ft_strlen.s $(SRCSDIR)/ft_strcpy.s $(SRCSDIR)/ft_strcpy.s \
$(SRCSDIR)/ft_strcmp.s $(SRCSDIR)/ft_write.s $(SRCSDIR)/ft_strdup.s \
$(SRCSDIR)/ft_read.s

SRCSDIR = ./srcs

#	Objects

OBJS = $(SRCS:.s=.o)


#	Headers

HEADER =	libasm.h
HEADERDIR = .

#	Name

NAME =	libasm.a


#	Compiler

CC = gcc
AS = nasm

#	Flags

ASFLAGS = -f macho64
CFLAGS =


###############
##  TARGETS  ##
###############

all:	$(NAME) Art

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "libasm compiled succesfully"

$(SRCSDIR)/%.o: %.a $(HEADERDIR)/$(HEADER)
	@$(AS) $(ASFLAGS) -s -o $@ $<

test: fclean all
	${CC} ${CFLAGS} main.c ${NAME} -o test

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f test

re: fclean all

.PHONY: all clean fclean re

Art:
	@echo ""
	@echo " _       _________ ______   _______  _______  _______ "
	@echo "( \      \__   __/(  ___ \ (  ___  )(  ____ \(       )"
	@echo "| (         ) (   | (   ) )| (   ) || (    \/| () () |"
	@echo "| |         | |   | (__/ / | (___) || (_____ | || || |"
	@echo "| |         | |   |  __ (  |  ___  |(_____  )| |(_)| |"
	@echo "| |         | |   | (  \ \ | (   ) |      ) || |   | |"
	@echo "| (____/\___) (___| )___) )| )   ( |/\____) || )   ( |"
	@echo "(_______/\_______/|/ \___/ |/     \|\_______)|/     \|"
	@echo ""
	@echo "This assembly library is ready to survive your tester"