# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 17:34:46 by meghribe          #+#    #+#              #
#    Updated: 2025/10/28 17:40:51 by meghribe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := zombie_horde
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -g -fsanitize=address
SRCS :=  main.cpp Zombie.cpp zombieHorde.cpp
OBJS := $(SRCS:.cpp=.o)
LDFLAGS := Zombie.hpp

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o:%.cpp Makefile $(LDFLAGS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
