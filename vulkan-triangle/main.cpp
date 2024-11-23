/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:14:21 by eros-gir          #+#    #+#             */
/*   Updated: 2024/11/23 21:07:36 by eros-gir         ###   ########.fr       */
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