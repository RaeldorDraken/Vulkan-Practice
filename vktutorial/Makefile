# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/17 17:14:06 by eros-gir          #+#    #+#              #
#    Updated: 2024/08/17 17:20:09 by eros-gir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SECFLAGS = -Wall -Wextra -Werror

CFLAGS = -std=c++17 -O2
LDFlags = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -LXi

FILES = main.cpp

VulkanTest: $(FILES)
	g++ $(CFLAGS) -o VulkanTest $(FILES) $(LDFlags)