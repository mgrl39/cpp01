# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 14:42:28 by meghribe          #+#    #+#              #
#    Updated: 2025/10/28 17:52:54 by meghribe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := weapon
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -g -fsanitize=address
SRCS := HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJS := $(SRCS:.cpp=.o)
LDFLAGS := HumanA.hpp HumanB.hpp Weapon.hpp

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
