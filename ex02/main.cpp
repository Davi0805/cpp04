/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:06:12 by dmelo-ca          #+#    #+#             */
/*   Updated: 2025/03/03 19:24:03 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


// TODO: MORE TESTS AND MAYBE ADD THE MAIN FROM SUBJECT
// TODO: CANONICAL ORTODOX
int main(void)
{
    Animal *abstract = new Animal;

    abstract->makeSound();
    
    std::cout << std::endl;

    abstract = new Dog;

    abstract->makeSound();

    delete abstract;
    
    std::cout << std::endl;
    
    abstract = new Cat;

    abstract->makeSound();

    delete abstract;

    std::cout << std::endl;

    // TODO: CANONICAL ORTODOX FORM

    // DESCOMENTAR APOS CANONICAL FORM
    /* Animal array[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            array[i] = new Dog;
        else
            array[i] = new Cat;
    } */

    std::cout << std::endl;

    /* delete[] array; */

}
