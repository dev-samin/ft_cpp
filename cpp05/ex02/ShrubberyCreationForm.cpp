#include "ShrubberyCreationForm.hpp"
#include "fstream"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
	std::cout << "Constructors "
			  << "ShrubberyCreationForm " << this->getName() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &origin)
	: Form(origin.getName(), origin.getSignGrade(), origin.getExecuteGrade())
{
	this->setCheckSign(origin.getCheckSign());

	std::cout << "copy_Constructors "
			  << "ShrubberyCreationForm " << this->getName() << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &origin)
{
	this->setCheckSign(origin.getCheckSign());

	std::cout << "oreride= "
			  << "ShrubberyCreationForm " << this->getName() << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor "
			  << "ShrubberyCreationForm " << this->getName() << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::cout << "ShrubberyCreationForm::execute " << executor.getName() << std::endl;
	std::ifstream readFile;
	std::ofstream writeFile; //쓸 목적의 파일 선언
	std::string tmp;
	std::string tree;

	readFile.open("tree");
	writeFile.open(this->getName() + "_shrubbery"); //파일 열기
	if (readFile.is_open())
	{
		readFile >> tree;
		while (getline(readFile, tmp))
		{	
			tree += tmp;
			tree += '\n';
		}
		readFile.close();
	}
	else
	{
		std::cout << "파일을 찾을 수 없습니다!" << std::endl;
	}

	if (writeFile.is_open()) //파일이 열렸는지 확인
	{
		writeFile << tree;
		writeFile.close(); //파일 닫기
	}
	else
	{
		std::cout << "파일을 찾을 수 없습니다!" << std::endl;
	}

}
