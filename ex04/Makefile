# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 18:37:45 by meghribe          #+#    #+#              #
#    Updated: 2025/11/07 23:07:34 by meghribe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := replace
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -g #-fsanitize=address
SRCS := main.cpp
OBJS := $(SRCS:.cpp=.o)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o:%.cpp Makefile
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
