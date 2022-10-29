
#include "ScavTrap.hpp"

int main()
{

    ScavTrap st("123");

    std::cout << "start" << std::endl;
    st.attack("fjnj");
    st.guardGate();

    return 0;
}