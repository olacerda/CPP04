# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/06 01:47:34 by olacerda          #+#    #+#              #
#    Updated: 2026/11/06 06:18:06 by olacerda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = abstract

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
       Animal.cpp \
       Dog.cpp \
       Cat.cpp \
       Brain.cpp \
       WrongAnimal.cpp \
       WrongCat.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re