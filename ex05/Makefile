# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 16:50:44 by meghribe          #+#    #+#              #
#    Updated: 2025/11/03 14:35:55 by meghribe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := harl
CXX := c++
CXXFLAGS := #-Wall -Wextra -Werror -g -fsanitize=address
SRCS := Harl.cpp main.cpp
OBJS := $(SRCS:.cpp=.o)
LDFLAGS := Harl.hpp

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
