/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:33:51 by dsydelny          #+#    #+#             */
/*   Updated: 2024/06/03 19:49:37 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n): _n(n) {
}

Span::Span(const Span& src) {
    *this = src;
}

Span& Span::operator=(Span const &rhs) {
    if ( this != &rhs ) {
        this->_n = rhs._n;
        this->_list = rhs._list;
    }
    return *this;
}

Span::~Span() {}


void Span::addNumber(int n) {
    if (_list.size() > _n)
        throw std::out_of_range("Span::addNumber: list is full");
    _list.push_back(n);
}

void Span::addNumber(std::list<int>::const_iterator itBegin, std::list<int>::const_iterator itEnd) {
    if ( _list.size() > _n )
        throw std::out_of_range("Span::addNumber: list is full");
    _list.insert(_list.end(), itBegin, itEnd);
}

const std::list< int >* Span::getList() const {
    return &_list;
}

unsigned int    Span::longestSpan() const {
    if (_list.size() < 2)
        throw std::out_of_range("Span::longestSpan: list is empty");
    return (*std::max_element(_list.begin(), _list.end()) - *std::min_element(_list.begin(), _list.end()));
}

unsigned int Span::shortestSpan() const {
    if (_list.size() < 2)
        throw std::out_of_range("Span::shortestSpan: list is empty");
    unsigned int  min = Span::longestSpan();
    for (std::list<int>::const_iterator it = _list.begin(); it != _list.end(); ++it) {
        for (std::list<int>::const_iterator it2 = _list.begin(); it2 != _list.end(); ++it2) {
            if (it == it2) continue;
            if (std::abs(*it2 - *it) <  static_cast<int>(min))
                min = std::abs(*it2 - *it);
        }
    }
    return min;
}

std::ostream& operator<<(std::ostream& os, const Span& span) {
    for (std::list<int>::const_iterator it = span.getList()->begin(); it != span.getList()->end(); ++it)
        os << *it << " ";
    return os;
}
