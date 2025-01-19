# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/17 17:14:06 by eros-gir          #+#    #+#              #
#    Updated: 2025/01/19 17:47:38 by eros-gir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SECFLAGS = -Wall -Wextra -Werror

CFLAGS = -std=c++17 -O2
LDFlags = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -LXi

FILES = main.cpp MyVklib.cpp MyVklib.hpp

all: vk-triangle-release

vk-triangle-release: $(FILES)
	g++ $(CFLAGS) -DNDEBUG -o vk-triangle $(FILES) $(LDFlags)

vk-triangle-debug: $(FILES)
	g++ $(CFLAGS) -o vk-triangle $(FILES) $(LDFlags)

clean:
	rm vk-triangle

fclean: clean

debug: vk-triangle-debug

.PHONY: all vk-triangle-release vk-triangle-debug clean fclean debug