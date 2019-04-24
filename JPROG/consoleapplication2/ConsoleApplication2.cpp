
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
	char loc = NULL;																											//lokacja 
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

int *winAKT1 = NULL;
int *winAKT2 = NULL;
int *winAKT3 = NULL;

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
																																										//
void OgrodWajcha0()																																						//
{																																										//
	printf("Znasz juz to miejsce.");																																	//
	printf("Dalsza wedrowka nie ma sensu.");																															//
}																																										//

void KuzniaOFFOpis()																																					//
{																																										//
	printf("Wchodzac tutaj spodziewales sie zaru, ale niczym sie to pomieszcze nie rozni od wielu innych w tym zamku.\n");												//
	printf("Podchodzac do wielkiego wglebienia w podlodze dostrzegasz slady sadzy i odlamkow metalu\n");																//		Opisy do Kuzni
	printf("Prawdopodobnie bylo to palenisko sluzace do wytapiania czegokolwiek, co tubylcy akurat potrzebowali\n");													//
	printf("Zadziwiajace jest to, ze tak wielkie palenisko, ze tak wielki zar mogl zgasnac. Moze w jakis sposob da sie przywrocic mu dawny zar?\n");					//
}																																										//
																																										//
void ToporPowstanie()																																					//
{																																										//
	printf("Zbierasz wszystkie porozrzucane odlamki\n");																												//
	printf("Wrzucasz je do pieca i wciskasz przycisk z ksztalte topora.\n");																							//
	printf("Nagle zaczynaja cie otaczac plomienie\n");																													//
	printf("Chociaz tyle dobrego, ze cie nie zmieniaja w kupke popiolu\n");																								//
	printf("Znowu slyszysz ten krzyk.\n");																																//
	printf("Przed toba,a kamiennej podlodze, pojawia sie napis zapisany jakby ogniem.\n");																				//
	printf("\"POJAWIL SIE TEN, KTORY WLADA OGNIEM, CHOCIAZ SAM NIEROZPALONY JEST. ON oBALI TRZECH TYRANOW I UWOLNI NAS\"\n");											//
	printf("Wszystko znika rownie szybko jak sie zaczelo.");																											//
}																																										//

void KuzniaONOpis()
{
	printf("Nazwa nie zawodzi\n.");
	printf("Juz z dosyc sporej odleglosci bylo widac zolto-pomaranczowe swiatlo, ktore swoja natura zdradzalo wyglad pomieszczenia.\n");
	printf("We wnetrzu panuje przeogromna temperatura, a dookola porozrzucane sa kawalki metalu.\n");

}

void KorytarzOpis()																																						//
{																																										//
	printf("Widzisz jedynie praktycznie niekonczaca sie sciezke. Jedynie latarnie podwieszane na scianie daja jakies swiatlo\n");										//		Opisy do Korytarza
	printf("Czujesz przeciag, wiec prawdopodobnie gdzies jest przejscie, ale mimo dlugich poszukiwan nie mozesz go znalezc\n");											//
}																																										//

void chglocAKT1(Hero *hero)
{
	int akt1 = 1;
	*winAKT1 = akt1;
	int *DrzewoStat = NULL;
	int *WajchaStat = NULL;
	int *ToporStat = NULL;

	WajchaStat = (int*)malloc(sizeof(int));
	ToporStat = (int*)malloc(sizeof(int));
	DrzewoStat = (int*)malloc(sizeof(int));
	char x;
	while (akt1)
	{
		scanf_s("%c", &x, 1);
		getchar();
		switch (x)
		{
		case 'a':
			if (*WajchaStat == 0)
			{
				OgrodWajcha0();
			}
			else
			{
				printf("Przechodzisz do Ogrodu.\n");
				hero->loc = 'a';
				OgrodOpis();
				char ogrod_glebia;
				printf("Czy chcesz sie rozejrzec dokladniej? (T/N)\n");
				scanf_s("%c", &ogrod_glebia, 1);
				getchar();
				if (ogrod_glebia == 'T' || ogrod_glebia == 't')																					
				{
					OgrodGlebiaOpis();
					printf("Czy chcesz przesunac wielka dzwignie? (T/N)\n");
					char ogrod_glebia_dzwignia;
					scanf_s("%c", &ogrod_glebia_dzwignia, 1);
					getchar();
					if (ogrod_glebia_dzwignia == 'T' || ogrod_glebia_dzwignia == 't')
					{
						OgrodGlebiaWajchaOpis();
						*WajchaStat = 1;
						//						printf("%d\n", *WajchaStat);
					}
					else
					{
						printf("Nie robisz niczego.\n");															
						printf("%d\n", *WajchaStat);
					}
				}
				else
				{
					printf("Nie podejmujesz akcji. Lenistwo jest pewnego rodzaju loteria tak samo jak dzialanie.\n");
				}
			}
			break;
		case 'b':
			printf("Przechodzisz do Kuzni.\n");
			hero->loc = 'b';
			if (*WajchaStat == 1)
			{
				KuzniaONOpis();
				printf("Moze warto przetopic");
				char kuznia_przetapianie;
				printf("Jaka jest twoja decyzja co do amatorskich prac kowalskich? (T/N)\n");
				scanf("%c", &kuznia_przetapianie, 1);
				getchar();
				if (kuznia_przetapianie == 'T' || kuznia_przetapianie == 't')
				{
					
				}
				
			}
			else
			{
				KuzniaOFFOpis();
			}
			break;
		case 'c':
			printf("Przechodzisz do Korytarza.\n");
			hero->loc = 'c';
			KorytarzOpis();
			break;
		default:
			printf("Pojawiasz sie w pomieszczeniu poczatkowym. Moze pora na podjecie dzialan?\n");
			printf("Gdzie chcesz sie udac?\n Ogrod (a), Kuznia (b), czy moze Korytarz (c)\n");
//			printf("%c", &hero->loc);																			//idk po co 
			break;
		}

	}
}

Hero *create_hero()																										//Przydzielanie pamieci bohaterowi
{

	char *buffer = NULL;
	buffer = (char*)malloc(sizeof(char)*50);																			//przydzielanie pamieci buforowi
	scanf_s("%s", buffer, 50);
	getchar();

	Hero *hero = (Hero*)malloc(sizeof(Hero));																			//ilość pamięci przydzielonej wyznaczana na podstawie wielkosci typu Hero


	hero->name = (char*)malloc(sizeof(char)*strlen(buffer) + 1);														//przypisanie zmiennej name wskazywanej przez hero rozmiaru char * dlugosc imienia
	strcpy_s(hero->name, 50, buffer);																					//kopiowanie  name do hero->name ((zapisuje wartosc name do imienia bohatera))
	
    free(buffer);																							            //usuwanie pamieci buffera;
	hero->hp = 100;																										//zapisywanie hp																									
	hero->mp = 100;																										//zapisywanie mp
	hero->dmg = 50;
	char klasa;																											//deklaracja klasy
	printf("Jaka klase wybierasz? (W)ojownik, (M)ag, czy moze (L)otrzyk? ");
	scanf_s("%c", &klasa, 1);
	getchar();
	hero->klasa = klasa;																								//przypisanie elementowi klasa ze struktury heto wartosci zmiennej lokalnej o nazwie klasa
	printf("A wiec wybrales profesje %c\n", hero->klasa);																//sprawdzenie
	kontynuowanie();
	return hero;
}

/*	typedef struct LocAkt
{
	char tag1;
	char tag2;
	char tag3;
	char tag4;																											//Moze
	char tag5;																											//Sie
	char tag6;																											//Przyda
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
}LocAkt;			*/




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
	winAKT1 = (int*)malloc(sizeof(int));
	winAKT2 = (int*)malloc(sizeof(int));
	winAKT3 = (int*)malloc(sizeof(int));
	Hero* hero = NULL;																									//tworzymy wskaznik, i nadajemy mu wartosc =NULL //wskazuje na NIC
	prolog1();
	hero=create_hero();
	prolog2(hero);																										//przekazujemy go prologowi
	akt1(hero);
	free(hero);																											//prawdziwa przygoda bohatera konczy sie dopiero tutaj
	return 0;
}
