# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/05 17:26:02 by olacerda          #+#    #+#              #
#    Updated: 2026/11/06 01:12:32 by olacerda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorphism

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
       Animal.cpp \
       Dog.cpp \
       Cat.cpp \
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