# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 09:34:47 by zramahaz          #+#    #+#              #
#    Updated: 2025/02/10 09:34:48 by zramahaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = brain

all : $(NAME)

$(NAME) : main.o
	$(CXX) $(CXXFLAGS) -o $(NAME) main.o

main.o : main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean :
	rm -f main.o

fclean : clean
	rm -f $(NAME)

re : fclean all
