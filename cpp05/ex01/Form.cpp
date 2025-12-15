/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:59:41 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/12/15 21:14:56 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default Form"), _signed(false), _grade_sign(150), _grade_exec(150) {}

Form::Form(std::string name) : _name(name) {
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
}

Form &Form::operator=(const Form &rhs) {
	if (this != &rhs)
		this->_signed = rhs._signed;

	return *this;
}

Form::~Form(void) {}

std::string Form::getName(void) const {return this->_name;}

// Overload operator
std::ostream &operator<<(std::ostream &o, const Form &rhs) {
	o << "Bureaucrat " << rhs.getName() << std::endl;
	return o;
}