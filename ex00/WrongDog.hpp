/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:35:35 by dmelo-ca          #+#    #+#             */
/*   Updated: 2025/03/03 18:37:32 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "Animal.hpp"

class WrongDog : public Animal
{
private:
public:
    WrongDog();
    ~WrongDog();

    void makeSound();
};
#endif //WRONGDOG_HPP
