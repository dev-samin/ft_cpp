#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include<fstream>
#include "Bureaucrat.hpp"

/*
• ShrubberyCreationForm (Required grades: sign 145, exec 137). 
Action: Create a file called <target>_shrubbery, 
and write ASCII trees inside it, in the current directory.
*/

class ShrubberyCreationForm : public Form
{
private:
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &origin);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm &origin);
    ~ShrubberyCreationForm();

    void execute(Bureaucrat const &executor) const;
};

#endif