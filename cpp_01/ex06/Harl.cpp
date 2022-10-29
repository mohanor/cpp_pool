
#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl; 
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl; 
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl; 
}

void Harl::complain( std::string level )
{
    std::string massages[4] = {"debug", "info", "warning", "error"};

    typedef void (Harl::*funcs)();
    funcs fun[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (massages[i] == level)
        {
            switch (i)
            {
                case 0:
                    (this->*fun[0])();
                case 1:
                    (this->*fun[1])();
                case 2:
                    (this->*fun[2])();
                case 3:
                    (this->*fun[3])();
                    break;
                default:
                    std::cout << "not found\n"
            }
        }
    }
}
