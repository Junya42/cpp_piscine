/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:09:47 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/20 17:53:06 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	Weapon::&getType( void )
{
	return (*this);
}

void	Weapon::setType(std::string	newType)
{
	this->_type = newType;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Weapon::Weapon(std::string type)
{
	this->_type = type;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Weapon::~Weapon()
{
}
