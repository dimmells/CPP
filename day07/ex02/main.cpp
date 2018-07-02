/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:42:02 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/28 14:42:04 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main() {
	try
	 {
	  Array<int>  arr(10);
	  Array<int>  arr1(1);

	  for (unsigned int i = 0; i < arr.size(); i++)
	   arr[i] = i;

	  std::cout << "arr[i]" << std::endl;
	  for (unsigned int i = 0; i < arr.size(); i++)
	   std::cout << arr[i] << std::endl;

	  std::cout << std::endl << std::endl;

	  std::cout << "arr1[i]" << std::endl;
	  for (unsigned int i = 0; i < arr1.size(); i++)
	   std::cout << arr1[i] << std::endl;

	  std::cout << std::endl << std::endl;

	  arr1 = arr;

	  std::cout << "arr1[i]" << std::endl;
	  for (unsigned int i = 0; i < arr1.size(); i++)
	   std::cout << arr1[i] << std::endl;

	  arr[2] = 999;

	  std::cout << std::endl << std::endl;

	  std::cout << "arr[i]" << std::endl;
	  for (unsigned int i = 0; i < arr.size(); i++)
	   std::cout << arr[i] << std::endl;

	  std::cout << std::endl << std::endl;

	  std::cout << "arr1[i]" << std::endl;
	  for (unsigned int i = 0; i < arr1.size(); i++)
	   std::cout << arr1[i] << std::endl;
	 }
	 catch (std::exception & e)
	 {
	  std::cout << e.what() << std::endl;
	 }

	 std::cout << std::endl << std::endl;

	 try
	 {
	  Array<std::string>  arr(10);

	  for (unsigned int i = 0; i < arr.size(); i++)
	   arr[i] = "str";

	 for (unsigned int i = 0; i < arr.size(); i++)
	  std::cout << arr[i] << std::endl;
	}
	catch (std::exception & e)
	{
	 std::cout << e.what() << std::endl;
	}
	return (0);
}
