/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:34:00 by dsydelny          #+#    #+#             */
/*   Updated: 2024/06/03 19:49:07 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <list>
#include <exception>
#include <algorithm>  // For std::max_element and std::min_element
#include <cmath>      // For std::abs
#include <vector>     // Assuming you're using std::vector for _list
#include <cstdlib> 

class Span
{
private:
    std::list<int>  _list;
    unsigned int    _n;

    Span();

public:
    Span(unsigned int);
    Span(const Span&);
    ~Span();

    Span&               operator=(const Span&);
    void                addNumber(int);
    void                addNumber(std::list<int>::const_iterator, std::list<int>::const_iterator);
    unsigned int        longestSpan() const;
    unsigned int        shortestSpan() const;

    const std::list< int >*   getList() const;
};

std::ostream& operator<<(std::ostream&, const Span&);

#endif
