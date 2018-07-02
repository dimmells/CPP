/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 18:13:45 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/29 18:13:46 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

int		main() {
	MutantStack<int> mstack; mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
	        std::cout << *it << std::endl;
	++it; }
	std::stack<int> s(mstack);
	
	return 0;
}
