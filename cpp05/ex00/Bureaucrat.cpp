/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:54:39 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/25 18:02:54 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
	std::cout << "Default constructor called for " << this->_name << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Name constructor called for " << this->_name << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Destructor called for " << this->_name << std::endl;
}

std::string Bureaucrat::getName(void) {
	return this->_name;
}

int Bureaucrat::getGrade(void) {
	return this->_grade;
}