# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/27 15:31:43 by meghribe          #+#    #+#              #
#    Updated: 2025/10/28 14:33:52 by meghribe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# fix makefile
NAME := Zombie
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g
SRCS := main.cpp newZombie.cpp randomChump.cpp Zombie.cpp 
OBJS := main.o newZombie.o randomChump.o Zombie.o
LDFLAGS := Zombie.hpp

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS) Makefile
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJS) $(LDFLAGS)

%.o:%.c
	$(CXX) $(CXXFLAGS) $< $- $@

.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)
	
.PHONY: re
re:
	fclean all
