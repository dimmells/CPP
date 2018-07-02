/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 12:16:32 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/29 12:16:34 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>

template <typename T>
bool	easyfind(T & a, int	b) {
	if (std::find(a.begin(), a.end(), b) != a.end())
		return (true);
	return (false);
}

#endif
