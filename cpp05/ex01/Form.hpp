/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbay1 <tanselbay1@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:46:32 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/12/16 16:55:37 by tanselbay1       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat; // It is not necessary but good practice

class Form {
	
private:
	const std::string	_name;
	bool				_signed;
	const int			_grade_sign;
	const int			_grade_exec;

public:
	// Constructors & Destructor
	Form();
	Form(std::string name, int grade_sign, int grade_exec);
	Form(const Form &src);
	Form &operator=(const Form &rhs);
	~Form();

	// Getters
	std::string getName() const;
	bool		getSigned() const;
	int			getGradeSign() const;
	int			getGradeExec() const;

	// Core Method
	void		beSigned(const Bureaucrat &b);

	// Exceptions
	class GradeTooHighException : public std::exception {	
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {	
	public:
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, const Form &rhs);

#endif