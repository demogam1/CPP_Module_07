/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:06:45 by misaev            #+#    #+#             */
/*   Updated: 2022/05/21 18:24:18 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<char> tata(10);
    Array<int> titi(6);
    Array<int> toto(4);
    toto = titi;
    std::cout << tata.ret_size() << std::endl;
    std::cout << titi.ret_size() << std::endl;
    std::cout << toto.ret_size() << std::endl;
    std::cout << &tata << std::endl;
    std::cout << &titi << std::endl;
    std::cout << &toto << std::endl;
    std::cout << tata[1] << std::endl;
    std::cout << titi[2] << std::endl;
    std::cout << toto[3] << std::endl;
    tata[11];
}