# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/27 15:31:43 by meghribe          #+#    #+#              #
#    Updated: 2025/10/27 15:46:49 by meghribe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# fix makefile
NAME := Zombie
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp 
OBJS = main.o newZombie.o randomChump.o Zombie.o
LDFLAGS = Zombie.hpp

all: $(NAME)

$(NAME): $(OBJS) Makefile
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJS) $(LDFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
