#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
   public:
      RobotomyRequestForm(std::string name);
      virtual ~RobotomyRequestForm();
      std::string const &getName( void ) const;

      void  execute(void) const;
   private:
      std::string const _target;
   protected:
};

#endif
