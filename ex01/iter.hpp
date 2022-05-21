/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:11:44 by misaev            #+#    #+#             */
/*   Updated: 2022/05/18 19:04:08 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>

void print_tab(T const &element)
{   
    std::cout << element << std::endl;
}

template<typename T>

void iter(T *tab, int tab_len, void(*function)(T const &element))
{
    for (int i = 0; i < tab_len; i++)
    {
        function(tab[i]);
    }
}