/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:34:01 by dmelo-ca          #+#    #+#             */
/*   Updated: 2025/03/03 18:41:20 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
}

void WrongCat::makeSound()
{
    std::cout << type <<  ": Woof, bark, growl" << std::endl;
}
