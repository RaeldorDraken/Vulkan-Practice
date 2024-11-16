/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:14:21 by eros-gir          #+#    #+#             */
/*   Updated: 2024/11/16 19:14:40 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define GLFW_INCLUDE_VULKAN
#include<GLFW/glfw3.h>

#include<iostream>
#include<stdexcept>
#include<cstdlib>

const uint32_t	WIDTH	= 800;
const uint32_t	HEIGHT	= 600;

class	HelloTriangleApplication
{
	public:
		void	run()
		{
			initWindow();
			initVulkan();
			mainLoop();
			cleanup();
		}
	private:
		GLFWwindow*	window;

		void	initWindow()
		{
			glfwInit();

			glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
			glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

			window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
		}
		void	initVulkan()
		{}
		void	mainLoop()
		{
			while (!glfwWindowShouldClose(window))
			{
				glfwPollEvents();
			}
		}
		void	cleanup()
		{
			glfwDestroyWindow(window);
			glfwTerminate();
		}
};

int	main()
{
	HelloTriangleApplication	app;

	try
	{
		app.run();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return	EXIT_FAILURE;
	}

	return	EXIT_SUCCESS;	
}