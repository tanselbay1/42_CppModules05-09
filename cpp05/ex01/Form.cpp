/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:59:41 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/12/16 21:01:53 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Default Constructor
Form::Form(void) : _name("Default Form"), _signed(false), _grade_sign(150), _grade_exec(150) {}

// Constructor With Params
Form::Form(std::string name, int grade_sign, int grade_exec) 
	: _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec) {
		
	// Check Grades for Validity
	if (grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
	if (grade_sign > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();
}

// Copy Constructor
Form::Form(const Form &src)
	: _name(src._name), _signed(src._signed), _grade_sign(src._grade_sign), _grade_exec(src._grade_exec){}

// Assignment Operator
Form &Form::operator=(const Form &rhs) {
	if (this != &rhs)
		this->_signed = rhs._signed;

	return *this;
}

Form::~Form(void) {}

// Getters
std::string Form::getName(void) const { return this->_name; }
bool		Form::getSigned(void) const { return this->_signed; }
int			Form::getGradeSign(void) const { return this->_grade_sign; }
int			Form::getGradeExec(void) const { return this->_grade_exec; }

// Overload operator
std::ostream &operator<<(std::ostream &o, const Form &rhs) {
	o << "Bureaucrat " << rhs.getName() << std::endl;
	return o;
}