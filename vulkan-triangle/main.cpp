/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:14:21 by eros-gir          #+#    #+#             */
/*   Updated: 2025/01/19 17:06:03 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyVklib.hpp"

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