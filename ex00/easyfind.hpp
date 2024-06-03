/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:32:31 by dsydelny          #+#    #+#             */
/*   Updated: 2024/06/03 19:42:12 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
void    easyfind(T& container, int value)
{
    if (std::find(container.begin(), container.end(), value) != container.end())
        std::cout << "occurance is found." << std::endl;
    else
        std::cout << "occurance not found." << std::endl;
}

#endif
