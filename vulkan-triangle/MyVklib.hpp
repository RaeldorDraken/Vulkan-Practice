/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyVklib.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:37:55 by eros-gir          #+#    #+#             */
/*   Updated: 2024/11/23 20:48:54 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYVKLIB_HPP
# define MYVKLIB_HPP

# define GLFW_INCLUDE_VULKAN
# include<GLFW/glfw3.h>
# include<iostream>
# include<stdexcept>
# include<cstdlib>

const uint32_t	WIDTH	= 800;
const uint32_t	HEIGHT	= 600;

class	HelloTriangleApplication
{
	public:
		HelloTriangleApplication();
		~HelloTriangleApplication();
		void	run();
	private:
		GLFWwindow*	window;
		VkInstance	instance;

		void	initWindow();
		void	initVulkan();
		void	mainLoop();
		void	createInstance();
		void	cleanup();
};

#endif