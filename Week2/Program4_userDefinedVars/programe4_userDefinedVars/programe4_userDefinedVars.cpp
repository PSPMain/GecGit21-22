#include <iostream>


int main()
{
	typedef int health;
	enum weapons
	{
		SWORD=1,
		DAGGER,
		MACE,
		TWIN_SWORDS,
		SAMURAI,
		WIZARD_STAFF,
		FIRE_POTION,
		ICE_BLADE,
		SMALL_KNIFE
	};
	health currentHealth=13000;
	weapons weaponID=SAMURAI;

	std::cout << "My current health is: " << currentHealth << std::endl;
	std::cout << "and the ID of my weapon choice is: " << weaponID << std::endl;

}
