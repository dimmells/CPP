/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:03:13 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 15:03:17 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	memoryLeak() {
	std::string*        panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}