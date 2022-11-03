#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		// Constructors

		ClapTrap(const ClapTrap &copy);
		ClapTrap(std::string name);
		
		// Destructor
		virtual ~ClapTrap();
		
		// Operators
		ClapTrap & operator=(const ClapTrap &assign);
		
		// Getters / Setters
		std::string getName() const;
		void setName(std::string name);
		unsigned int getHp() const;
		void setHp(unsigned int hp);
		unsigned int getEnergy() const;
		void setEnergy(unsigned int energy);
		unsigned int getAttackDamage() const;
		void setAttackDamage(unsigned int attackDamage);

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
	protected:
		std::string _name;
		unsigned int _hp;
		unsigned int _energy;
		unsigned int _attackDamage;

	private:
		ClapTrap();		
};

#endif