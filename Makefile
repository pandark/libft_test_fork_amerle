# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amerle <amerle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 14:29:45 by amerle            #+#    #+#              #
#    Updated: 2013/12/02 05:22:57 by aviala           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -g -Wall -Wextra -Werror -O3 -Wstack-protector -Wwrite-strings\
         -fstack-protector-all -Wshadow -Wfatal-errors  -pedantic-errors \
		 -Wstrict-prototypes -Wmissing-prototypes -Wunreachable-code \
		 -Wunreachable-code -pedantic -Winline \
		 -Wunknown-pragmas -Wdeclaration-after-statement \
		 -Wold-style-definition -Wmissing-field-initializers \
         -I$(LIBDIR) -I.
GCCVERSION = $(shell $(CC) --version | grep ^$(CC) | sed 's/^.* //g')
ifeq "$(GCCVERSION)" "4.8.1"
    CFLAGS += -Wno-unused-result
endif
LD = $(CC)
LIBDIR = ../libft/
SRCDIR = ./srcs
OBJDIR = ./objs
INCDIR = ./include
LDFLAGS = -L$(LIBDIR) -lft
SRCS = 	main.c \
	   	test.c \
	   	string_bsd.c \
	   	ft_test_memset.c \
	   	ft_test_strcmp.c \
	   	ft_test_bzero.c \
	   	ft_test_memcpy.c \
	   	ft_test_memccpy.c \
	   	ft_test_memmove.c \
	   	ft_test_memchr.c \
	   	ft_test_memcmp.c \
	   	ft_test_strlen.c \
	   	ft_test_strdup.c \
	   	ft_test_strcpy.c \
	   	ft_test_strncpy.c \
	   	ft_test_strchr.c \
	   	ft_test_strrchr.c \
	   	ft_test_strcat.c \
	   	ft_test_strncat.c \
	   	ft_test_strstr.c \
	   	ft_test_strncmp.c \
	  	ft_test_strnstr.c \
	   	ft_test_atoi.c \
	   	ft_test_isalpha.c \
	   	ft_test_isdigit.c \
	   	ft_test_isalnum.c \
	   	ft_test_isascii.c \
	   	ft_test_isprint.c \
	   	ft_test_toupper.c \
	   	ft_test_tolower.c \
	   	ft_test_strnew.c \
	   	ft_test_strclr.c \
	   	ft_test_strequ.c \
	  	ft_test_putchar.c \
	   	ft_test_putstr.c \
	   	ft_test_putendl.c \
	  	ft_test_putnbr.c \
	   	ft_test_putchar_fd.c \
	   	ft_test_putstr_fd.c \
	   	ft_test_putendl_fd.c \
	   	ft_test_putnbr_fd.c \
	  	ft_test_striter.c \
	   	ft_test_strmap.c \
	   	ft_test_strlcat.c \
	   	ft_test_strsub.c \
	   	ft_test_strjoin.c \
	   	ft_test_memallocdel.c \
	   	ft_test_strsplit.c \
	  	ft_test_strtrim.c \
	   	ft_test_itoa.c \
	   	ft_test_lstnew.c \
	   	ft_test_lstdelone.c \
	   	ft_test_lstadd.c \
	   	ft_test_lstdel.c \
		ft_test_lstiter.c
#	   	ft_test_lstmap.c
OBJS = $(SRCS:.c=.o)
OBJS_PREF = $(addprefix $(OBJDIR)/, $(OBJS))
NAME = unit_test
all: $(NAME)

$(NAME): $(OBJS_PREF)
	(cd $(LIBDIR) && $(MAKE) re)
	$(LD) -o $@ $^ $(LDFLAGS) -I$(INCDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) -o $@ -c $< $(CFLAGS) -I$(INCDIR)

clean:
	@rm -f $(OBJS_PREF)

fclean: clean
	@rm -f $(NAME)

re: fclean all


.PHONY: clean fclean re all
