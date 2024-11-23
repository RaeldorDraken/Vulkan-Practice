# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/17 17:14:06 by eros-gir          #+#    #+#              #
#    Updated: 2024/11/23 21:08:21 by eros-gir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SECFLAGS = -Wall -Wextra -Werror

CFLAGS = -std=c++17 -O2
LDFlags = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -LXi

FILES = main.cpp MyVklib.cpp MyVklib.hpp

all: vk-triangle

vk-triangle: $(FILES)
	g++ $(CFLAGS) -o vk-triangle $(FILES) $(LDFlags)

clean:
	rm vk-triangle

fclean: clean

.PHONY: all vk-triangle clean fclean