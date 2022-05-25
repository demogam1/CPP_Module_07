/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:12:10 by misaev            #+#    #+#             */
/*   Updated: 2022/05/25 18:04:55 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>

class Array
{
    public:
        /*Form Canonique*/ 
        Array()
        {
            this->tab = new T[0];
        };
        Array(const Array<T> &p)
        {
            if(!this->tab)
                delete [] this->tab;
            this->tab = new T[p.size];
            for (size_t i = 0; i < p.size; i++)
            {
                this->tab[i] = p.tab[i];
            }
            this->size = p.size;
        };
        Array &operator=(const Array<T> &p)
        {
            if(!this->tab)
                delete [] this->tab;
            this->tab = new T[p.size];
            for (size_t i = 0; i < p.size; i++)
            {
                this->tab[i] = p.tab[i];
            }
            this->size = p.size;
            return *this;
        };
        ~Array()
        {
        };
        /*END*/ 
        class exception : public std::exception
        {
          public:
                virtual const char* what() const throw()
                {
                    return("Cannot access not allocated space !");
                }
        };
        T &operator[] (size_t i)
        {
           if (i > this->size)
               throw exception();
           else
               return this->tab[i];
        }
        Array(size_t n)
        {
            this->tab = new T[n];
            this->size = n;
        }
        int ret_size() const
        {
            return this->size;
        }
    private:
        T *tab;
        size_t size;
};