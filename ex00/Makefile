# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/28 17:40:38 by davi              #+#    #+#              #
#    Updated: 2025/03/03 18:40:49 by dmelo-ca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler settings
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# File names
SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongCat.cpp WrongDog.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = Animal

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

# Clean and rebuild
re: clean all

.PHONY: all clean rebuild