/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:43:39 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/28 14:43:41 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>
# include <iostream>
# include <string>

template	<typename T>
class Array {
public:
	Array<T>() {
		_array = NULL;
		_size = 0;
	}

	Array<T>(unsigned int n) {
		_array = new T[n];
		_size = n;
	}

	Array<T>(Array<T> const & copy) {
		*this = copy;
	}

	~Array<T>() {
		return ;
	}

	unsigned int	size() const {
		return (_size);
	}

	Array<T> &	operator=(Array<T> const & copy) {
		if (this != &copy)
		{
			_size = copy._size;
			if (_array != NULL)
				delete [] _array;
			_array = new T(copy._size);
			for (int i = 0; i < _size; ++i)
				_array[i] = copy._array[i];
		}
		return (*this);
	}

	T &		operator[](unsigned int n) {
		if (n < _size)
			return (_array[n]);
		else
			throw std::range_error("range error");
	}

private:
	T *				_array;
	unsigned int	_size;
};

#endif
