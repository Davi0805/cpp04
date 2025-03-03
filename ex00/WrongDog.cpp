/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:36:00 by dmelo-ca          #+#    #+#             */
/*   Updated: 2025/03/03 18:38:29 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
    this->type = "WrongDog";
}

WrongDog::~WrongDog()
{
}

void WrongDog::makeSound()
{
    std::cout << type << ": Meow, purr, hiss" << std::endl;
}