/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:06:33 by dmelo-ca          #+#    #+#             */
/*   Updated: 2025/03/04 17:02:53 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    ~Animal();

    Animal(Animal& copy);
    Animal& operator=(Animal& copy);
    

    virtual void makeSound();

    //Getter
    std::string getType() const;
};

#endif //ANIMAL_HPP
