/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:52:49 by dsydelny          #+#    #+#             */
/*   Updated: 2024/06/03 19:44:23 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>

int main( int ac, char ** av )
{
    if ( ac != 2 )
        return EXIT_FAILURE;

    int                 arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int>    vect( arr, arr + sizeof( arr ) / sizeof( int ) );
    std::list<int>      list( arr, arr + sizeof( arr ) / sizeof( int ) );

    easyfind(vect, std::atoi(av[1]));
    easyfind(list, std::atoi(av[1]));

    return EXIT_SUCCESS;
}
