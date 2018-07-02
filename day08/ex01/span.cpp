/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:48:51 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/29 13:48:53 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>

Span::Span() : _n(0), _size(0) {
	return ;
}

Span::Span(unsigned int n) : _n(n), _size(0) {
	return ;
}

Span::Span(Span const & copy) {
	*this = copy;
}

Span::~Span() {
	return ;
}

Span & Span::operator=(Span const & copy) {
	_list = copy._list;
	_size = copy._size;
	_n = copy._n;
	return (*this);
}

void	Span::addNumber(int number) {
	if (_size + 1 <= _n) {
		_list.push_back(number);
		_size++;
	}
	else
		throw std::range_error("List have not free space");
}

int		Span::shortestSpan() {
	std::list<int>		min_list;

	_list.sort();
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = _list.end();
	for (it = _list.begin(); it != ite; ++it) {
		std::list<int>::const_iterator	it1;
		std::list<int>::const_iterator	ite1 = _list.end();
		it++;
		for (it1 = it; it1 != ite1; ++it1) {
			it--;
			if (it1 != _list.begin()) {
				min_list.push_back(*it1 - *it);
			}
			it++;
		}
		it--;
	}
	return (*std::min_element(min_list.begin(), min_list.end()));
}

int		Span::longestSpan() {
	return (*(std::max_element(_list.begin(), _list.end())) - *(std::min_element(_list.begin(), _list.end())));
}
