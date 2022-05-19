#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

/*
RobotomyRequestForm (Required grades: sign 72, exec 45). 
Action: Makes some drilling noises, 
and tell us that <target> has been robotomized successfully 50% of the time. 
Otherwise, tell us it’s a failure.
*/

class RobotomyRequestForm : public Form
{
private:
    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm &origin);
    RobotomyRequestForm &operator=(RobotomyRequestForm &origin);
    ~RobotomyRequestForm();

    void execute(Bureaucrat const &executor) const;
};

#endif