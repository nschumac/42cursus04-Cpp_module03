#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void 	guardGate();
		void	attack(string const &target);
		ScavTrap(string name);
		~ScavTrap();
};

#endif