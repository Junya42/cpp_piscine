#include "Bureaucrat.hpp"

void  Bureaucrat::upgrade( void )
{
   _grade--;
   if (_grade < 1)
      throw GradeTooHighException();
}

void  Bureaucrat::downgrade( void )
{
   _grade++;
   if (_grade > 150)
      throw GradeTooLowException();
}

std::string Bureaucrat::getName( void ) const
{
   return (_name);
}

int   Bureaucrat::getGrade( void ) const
{
   return (_grade);
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
   std::cout << "Bureaucrat constructor called" << std::endl;
   if (grade < 1)
      throw GradeTooHighException();
   if (grade > 150)
      throw GradeTooLowException();
   _grade = grade;
   std::cout << "Bureaucrat constructor complete" << std::endl << std::endl;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Bureaucrat::~Bureaucrat()
{
   std::cout << "Bureaucrat destructor called" << std::endl << std::endl;
}

/*************************************************************/
/*                         OPERATOR                          */
/*************************************************************/

std::ostream &operator<<(std::ostream &nstream, Bureaucrat &bureau)
{
   nstream << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << ".";
   return (nstream);
}
