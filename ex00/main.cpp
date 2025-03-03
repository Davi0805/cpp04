/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:06:12 by dmelo-ca          #+#    #+#             */
/*   Updated: 2025/03/03 19:06:43 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"


// TODO: MORE TESTS AND MAYBE ADD THE MAIN FROM SUBJECT
// TODO: CANONICAL ORTODOX
int main(void)
{
    Animal *abstract = new Animal;

    abstract->makeSound();
    
    abstract = new Dog;

    abstract->makeSound();
    
    abstract = new Cat;

    abstract->makeSound();
    

    abstract = new WrongCat;

    abstract->makeSound();

    abstract = new WrongDog;

    abstract->makeSound();
}