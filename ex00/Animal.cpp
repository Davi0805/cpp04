/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:07:02 by dmelo-ca          #+#    #+#             */
/*   Updated: 2025/03/04 17:16:29 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
}

Animal::~Animal()
{
}

Animal::Animal(Animal& copy)
{
    *this = copy;
}

Animal& Animal::operator=(Animal& copy)
{
    this->type = copy.getType();
    return *this;
}

void Animal::makeSound()
{
    std::cout << type << ": " << std::endl;
}

//Getter
std::string Animal::getType() const
{
    return this->type;
}