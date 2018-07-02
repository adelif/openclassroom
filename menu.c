#include <stdio.h>

int		main()
{
	int choixMenu;

	choixMenu = 0;
	printf("=== Menu ===\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big \
	Mac\nVotre choix ?\n");
	scanf("%d", &choixMenu);
	switch (choixMenu)
	{
		case 1:
			printf("Vous avez choisi le menu Royal Cheese");
			break;
		case 2:
			printf("Vous avez choisi le menu Mc Deluxe");
			break;
		case 3:
			printf("Vous avez choisi le menu Mc Bacon");
			break;
		case 4:
			printf("Vous avez choisi le menu Big Mac");
			break;
	}
	return (0);
}
