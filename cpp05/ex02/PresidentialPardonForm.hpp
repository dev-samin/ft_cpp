#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

/*
PresidentialPardonForm (Required grades: sign 25, exec 5). 
Action: Tells us <target> has been pardoned by Zafod Beeblebrox.
*/

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm &origin);
    PresidentialPardonForm &operator=(PresidentialPardonForm &origin);
    ~PresidentialPardonForm();

    void execute(Bureaucrat const &executor) const;
};

#endif