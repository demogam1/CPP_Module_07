/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:50:24 by misaev            #+#    #+#             */
/*   Updated: 2022/05/18 16:00:00 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename I>

I max(I nbr_a, I nbr_b)
{
    if(nbr_a > nbr_b)
        return nbr_a;
    else
        return nbr_b;
};

template<typename I>

I min(I nbr_a, I nbr_b)
{
    if(nbr_a < nbr_b)
        return nbr_a;
    else
        return nbr_b;           
};

template<typename I>

void swap(I nbr_a, I nbr_b)
{
    I tmp = nbr_a;
    nbr_a = nbr_b;
    nbr_b = tmp;
};