/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyVklib.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:37:55 by eros-gir          #+#    #+#             */
/*   Updated: 2024/11/23 21:09:48 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyVklib.hpp"

HelloTriangleApplication::HelloTriangleApplication()
{}

HelloTriangleApplication::~HelloTriangleApplication()
{}

void	HelloTriangleApplication::run()
{
	initWindow();
	initVulkan();
	mainLoop();
	cleanup();
}

void	HelloTriangleApplication::initWindow()
{
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
}

void	HelloTriangleApplication::initVulkan()
{
	createInstance();
}

void	HelloTriangleApplication::mainLoop()
{
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}
}

void	HelloTriangleApplication::createInstance()
{
	VkApplicationInfo		appInfo{}; //Not necessary but helps the API
	VkInstanceCreateInfo	createInfo{}; //Mandatory struct
	VkResult				result;

	uint32_t	glfwExtensionCount = 0;
	const char	**glfwExtensions;

	glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);

	appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	appInfo.pApplicationName = "Hello Triangle";
	appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
	appInfo.pEngineName = "No Engine";
	appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
	appInfo.apiVersion = VK_API_VERSION_1_0;

	createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	createInfo.pApplicationInfo = &appInfo;
	createInfo.enabledExtensionCount = glfwExtensionCount;
	createInfo.ppEnabledExtensionNames = glfwExtensions;
	createInfo.enabledLayerCount = 0;

	result = vkCreateInstance(&createInfo, nullptr, &instance);
	if (result != VK_SUCCESS)
	{
		throw	std::runtime_error("failed to create instance!");
	}
}

void	HelloTriangleApplication::cleanup()
{
	vkDestroyInstance(instance, nullptr);
	glfwDestroyWindow(window);
	glfwTerminate();
}
