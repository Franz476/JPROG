
#include <stdio.h>
#include <cstring>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS



void kontynuowanie()
{
	printf("Wcisnij dowolny przycisk, aby kontynuowac.\n\n\n");
	getchar();
}


typedef struct Hero
{
	char *name;																											//miejsce na adres
	char klasa;
	char loc;																											//lokacja 
	int hp;
	int mp;
	int dmg;
} Hero;

typedef struct Szczur
{
	int hp = 100;
	int dmg = 20;
	int status = 1;
} Szczur;

struct WarunkiAktow
{
	int winAKT1 = 1;
	int winAKT2 = 1;
	int winAKT3 = 1;
};

struct WazneAkt1
{
	int wajcha_stat = 0;
	int topor_stat = 0;
	int drzewo_stat = 0;
};


void prolog1()
{
	printf("Kazdy swiat w czasie kryzysu potrzebuje bohatera.\n\n");
	kontynuowanie();
	printf("Dzis zmagamy sie z nowym typem zagrozenia.\n\n");
	kontynuowanie();
	printf("Naszym dzisiejszym przeciwnikiem nie jest zaden stwor ani maz.\n");
	printf("A przynajmniej nie bezposrednio");
	kontynuowanie();
	printf("");
	printf("Oto moj swiat.\n\n");
	printf("Z pewnych nieznanych przyczyn zostales wybrany do wypelnienia pewnej misji.\n\n");
	kontynuowanie();
	printf("Oczywiscie nie mozesz odmowic.\n\n");
	kontynuowanie();
	printf("Podaj swoje imie: ");
}

void prolog2(Hero* hero)																									//Funkcja prolog przyjmujaca za argument bohatera
{

	printf("Imie: %s, Klasa: %c, HP: %d MP: %d \n\n", hero->name, hero->klasa, hero->hp, hero->mp);																//Wyswietlenie statystyk
	printf("Skoro wstep mamy za soba mozemy przejsc dalej.\n\n");
	kontynuowanie();
}

void OgrodOpis()																																						//
{																																										//
	printf("Przechodzac tutaj czujesz nagly wzrost wilgotnosci, a temperatura spada.\n");																				//
	printf("Bywales juz w podobnych miejscach, ale wrazenia z tego ogrodu sa mocniejsze niz kiedykolwiek bylo ci dane doswiadczyc\n");									//
	printf("Po krotkim rozeznaniu dostrzegasz, ze kora drzew uklada sie w dziwne, regularne, a wrecz fraktalne ksztalty\n");											//
	printf("Szumia liscie, a slonce ledwo przeswituje przez liscie\n");																									//
}																																										//
																																										//
void OgrodGlebiaOpis()																																					//
{																																										//
	printf("Po chwili przechadzania sie po gluszy zauwazasz wielka dzwignie.\n");																						//
	printf("Nad nia widnieje napis \"Raz zgaszona niech taka juz pozostanie. Nie marnuj naszego poswiecenia.\"\n");														//		Opisy do Ogrodu
}																																										//
																																										//
void OgrodGlebiaWajchaOpis()																																			//
{																																										//
	printf("Wkladasz cala sile w poruszenie pradawnego mechanizmu. Ostatecznie udaje ci sie zmienic ustawienie przekladni.\n");											//
	printf("W chwili, w ktorej wajcha uderza o metalowa obrecz ograniczajaca jej ruch slyszysz krzyk jakby wewnatrz swojej glowy.\n");									//
	printf("Myslisz sobie \"Bywa xD\"");																																//
}																																										//

void chglocAKT1(Hero *hero)
{
	char x;
	while (WarunkiAktow->winAKT1)
	{
		scanf_s("%c", &x);
		getchar();
		switch (x)
		{
		case 'a':
			printf("Przechodzisz do Ogrodu.\n");
			hero->loc = 'a';
			OgrodOpis();
			char las_glebia;
			printf("Czy chcesz sie rozejrzec dokladniej? (T/N)\n");
			scanf_s("%c", &las_glebia);
			getchar();
			if (las_glebia == 'T')																					//goto ogdrod/default
			{
					OgrodGlebiaOpis();
					printf("Czy chcesz przesunac wielka dzwignie? (T/N)\n");
					char ogrod_glebia_dzwignia;
					scanf_s("%c", &ogrod_glebia_dzwignia);
					getchar;
					if (ogrod_glebia_dzwignia == 'T')
					{
						OgrodGlebiaWajchaOpis();
					}
					else
					{
						printf("Nie robisz niczego.\n");															//goto ogrod/default
					}
			}
			else
			{
				printf("Nie podejmujesz akcji. Lenistwo jest pewnego rodzaju loteria tak samo jak dzialanie.\n");
			}
			break;
		case 'b':
			printf("Przechodzisz do Kuzni.\n");
			hero->loc = 'b';
			printf("Wchodzac tutaj spodziewales sie zaru, ale niczym sie to pomieszcze nie rozni od wielu innych w tym zamku.\n");
			printf("Podchodzac do wielkiego wglebienia w podlodze dostrzegasz slady sadzy i odlamkow metalu\n");
			printf("Prawdopodobnie bylo to palenisko sluzace do wytapiania czegokolwiek, co tubylcy akurat potrzebowali\n");
			printf("Zadziwiajace jest to, ze tak wielkie palenisko, ze tak wielki zar mogl zgasnac. Moze w jakis sposob da sie przywrocic mu dawny zar?\n");
			break;
		case 'c':
			printf("Przechodzisz do Korytarza.\n");
			hero->loc = 'c';
			printf("Widzisz jedynie praktycznie niekonczaca sie sciezke. Jedynie latarnie podwieszane na scianie daja jakies swiatlo\n");
			printf("Czujesz przeciag, wiec prawdopodobnie gdzies jest przejscie, ale mimo dlugich poszukiwan nie mozesz go znalezc\n");
			break;
		default:
			printf("Pojawiasz sie w pomieszczeniu poczatkowym. Moze pora na podjecie dzialan?\n");
			printf("Gdzie chcesz sie udac?\n");
			printf("%c", &hero->loc);
			break;
		}

	}
}

Hero *create_hero()																										//Przydzielanie pamieci bohaterowi
{

	char *buffer;
	buffer = (char*)malloc(sizeof(char)*20);																			//przydzielanie pamieci buforowi
	scanf_s("%s", buffer, 20);
	getchar();

	Hero *hero = (Hero*)malloc(sizeof(Hero));																			//ilość pamięci przydzielonej wyznaczana na podstawie wielkosci typu Hero


	hero->name = (char*)malloc(sizeof(char)*strlen(buffer) + 1);														//przypisanie zmiennej name wskazywanej przez hero rozmiaru char * dlugosc imienia
	strcpy_s(hero->name, 20, buffer);																					//kopiowanie  name do hero->name ((zapisuje wartosc name do imienia bohatera))

    free(buffer);																							            //usuwanie pamieci buffera;
	hero->hp = 100;																										//zapisywanie hp																									
	hero->mp = 100;																										//zapisywanie mp
	hero->dmg = 50;
	char klasa;
	printf("Jaka klase wybierasz? (W)ojownik, (M)ag, czy moze (L)otrzyk? ");
	scanf_s("%c", &klasa, 1);
	getchar();
	hero->klasa = klasa;
	printf("A wiec wybrales profesje %c\n", hero->klasa);
	kontynuowanie();
	return hero;
}

typedef struct LocAkt
{
	char tag1;
	char tag2;
	char tag3;
	char tag4;
	char tag5;
	char tag6;
	char tag7;
	char tag8;
	char tag9;
		struct LocAkt()
		{
			tag1 = 'a';																									//a to pokoj 1
			tag2 = 'b';																									//b to pokoj 2		wszystkieg w akcie 1
			tag3 = 'c';																									//c to pokoj 3	^^
			tag4 = 'd';																									//d to pokoj 4
			tag5 = 'e';																									//e to pokoj 5		wszystkie w akcie 2
			tag6 = 'f';																									//f to pokoj 6	^^
			tag7 = 'g';																									//g to pokoj 7
			tag8 = 'h';																									//h to pokoj 8		wszystkie w akcie 3
			tag9 = 'i';																									//i to pokoj 9	^^
		};
}LocAkt;




    void akt1(Hero *hero)
{
	printf("AKT1\n\n");
	kontynuowanie();
	printf("a wiec nazywasz sie %s i postanowiles sprobowac swoich sil jako %c?\n\n", hero->name, hero->klasa);
	printf("Wiesz, ktos to musi zrobic, wiec czemu nie ty? Cos tam slawa, bogactwo itd itp\n\n");
	printf("Jestes teraz w pomieszczeniu poczatkowym.\n");
	printf("Mozesz sie udac do Ogrodu (a), Kuzni (b), lub do Wielkiego korytarza (c)\n");
	printf("Gdzie chcesz sie udac?\n");
	chglocAKT1(hero);
}


int main()
{
	Hero* hero = NULL;																									//tworzymy wskaznik, i nadajemy mu wartosc =NULL //wskazuje na NIC
	prolog1();
	hero=create_hero();
	prolog2(hero);																										//przekazujemy go prologowi
	akt1(hero);
	free(hero);
	return 0;
}
