#include <iostream>

class Karen
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void    (Karen::*f[4])(void);
    public:
        Karen();
        ~Karen();
        void complain(std::string level);
};