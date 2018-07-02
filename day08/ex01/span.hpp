/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:48:56 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/29 13:48:57 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <list>

class Span
{
public:
	Span();
	Span(unsigned int n);
	Span(Span const & copy);
	~Span();

	Span & operator=(Span const & copy);

	void	addNumber(int number);
	int		shortestSpan();
	int		longestSpan();

private:
	std::list<int>	_list;
	unsigned int	_n;
	unsigned int	_size;
};

#endif
