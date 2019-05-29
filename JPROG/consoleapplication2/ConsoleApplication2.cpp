
#include <stdio.h>
#include <cstring>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

#define kontynuowanie()	\
			printf("Wcisnij dowolny przycisk, aby kontynuowac.\n\n");	\
			getchar();	\

/*
void kontynuowanie()
	{
	printf("Wcisnij dowolny przycisk, aby kontynuowac.\n\n");
	getchar();
	}
*/


typedef struct Hero
{
	char *name;																											//miejsce na adres
	char klasa;
	char loc = NULL;																											//lokacja 
	int hp;
	int mp;
	int MaxDmg;
	int MinDmg;
} Hero;

typedef struct Szczur
{
	int hp = 100;
	int MinDmg = 15;
	int MaxDmg = 25;
	int status = 1;
} Szczur;


void Walka1(Hero *hero)
{
	Szczur szczur;
	while (hero->hp > 0 && szczur.hp > 0)
	{
		int ObrSz = (rand() % (szczur.MaxDmg – szczur.MinDmg + 1)) + szczur.MinDmg;												//Losowanie obrazen szczura
		int ObrHe = (rand() % (hero->MaxDmg – hero->MinDmg + 1)) + hero->MinDmg;													//Losowanie obrazen bohatera
		char Akcja;
		printf("Wolisz (A)takowac, czy sie (B)ronic?");
		scanf_s("%c", &Akcja, 1);
		getchar();
		if (Akcja == 'A' || Akcja == 'a')
		{
			if (hero->klasa == 'W' || hero->klasa == 'w')
			{
				printf("Wykonujesz zamach i zadajesz %d obrazen.\n", ObrHe);
				szczur.hp = szczur.hp - ObrHe;
				printf("Po uderzeniu szczur spojrzal wsciekle i rzucil sie zadajac %d obrazen.\n", ObrSz);
				hero->hp = hero->hp - ObrSz;
			}
			if (hero->klasa == 'M' || hero->klasa == 'm')
			{
				printf("Rzucasz magiczny atak na szczura, ktory otrzymuje %d obrazen.\n", ObrHe);
				szczur.hp = szczur.hp - ObrHe;
				printf("Przeciwnik wydaje sie byc oszolomiony, ale szybko dochodzi do siebie i kontratakuje, czym zadaje %d obrazen.\n", ObrSz);
				hero->hp = hero->hp - ObrSz;
			}
			else
			{
				printf("Za pomoca swoich nozy przecinasz skore szczura. Przerosniety gryzon niezwykle glosno syczy i otrzymuje %d obrazen\n", ObrHe;
				szczur.hp = szczur.hp - ObrHe;
				printf("Mimo obfitego krwawienia przeciwnik postanawia kotratakowac i zadaje %d obrazen.\n", ObrSz);
				hero->hp = hero->hp - ObrSz;
/*=======
				printf("Wykonujesz zamach i zadajesz %d obrazen.\n", ObrHe);
				szczur->hp = szczur->hp - ObrHe;
				printf("Po uderzeniu szczur spojrzal wsciekle i rzucil sie zadajac %d obrazen.\n", ObrSz);
				hero->hp = hero->hp - ObrSz;
			}
			if (hero->klasa == 'M' || hero->klasa == 'm')
			{
				printf("Rzucasz magiczny atak na szczura, ktory otrzymuje %d obrazen.\n", ObrHe);
				szczur->hp = szczur->hp - ObrHe;
				printf("Przeciwnik wydaje sie byc oszolomiony, ale szybko dochodzi do siebie i kontratakuje, czym zadaje %d obrazen.\n", ObrSz);
				hero->hp = hero->hp - ObrSz;
			}
			else
			{
=======*/
/*
				printf("Wykonujesz zamach i zadajesz %d obrazen.\n", ObrHe);
				szczur->hp = szczur->hp - ObrHe;
				printf("Po uderzeniu szczur spojrzal wsciekle i rzucil sie zadajac %d obrazen.\n", ObrSz);
				hero->hp = hero->hp - ObrSz;
			}
			if (hero->klasa == 'M' || hero->klasa == 'm')
			{
				printf("Rzucasz magiczny atak na szczura, ktory otrzymuje %d obrazen.\n", ObrHe);
				szczur->hp = szczur->hp - ObrHe;
				printf("Przeciwnik wydaje sie byc oszolomiony, ale szybko dochodzi do siebie i kontratakuje, czym zadaje %d obrazen.\n", ObrSz);
				hero->hp = hero->hp - ObrSz;
			}
			else
			{
>>>>>>> master
				printf("Za pomoca swoich nozy przecinasz skore szczura. Przerosniety gryzon niezwykle glosno syczy i otrzymuje %d obrazen\n", ObrHe);
				szczur->hp = szczur->hp - ObrHe;
				printf("Mimo obfitego krwawienia przeciwnik postanawia kotratakowac i zadaje %d obrazen.\n", ObrSz);
				hero->hp = hero->hp - ObrSz;
<<<<<<< HEAD
>>>>>>> Dodane losowanie obrażeń.
=======
>>>>>>> master
*/
			}
		}
		else
		{
			if (hero->klasa == 'W' || hero->klasa == 'w')
			{
				printf("Wykorzystujesz swoja wielka sile i topor do zablokowania ataku szczura.\n");
			}
			if (hero->klasa == 'M' || hero->klasa == 'm')
			{
				printf("Tworzysz przed soba magiczna tarcze, ktora zatrzymuje atak gryzonia.\n");
			}
			else
			{
				printf("Dzieki swojej zwinnosci unikasz zebow szczura w ostatnim momencie.\n");
			}
		}
	}
}

typedef struct Ryba
{
	int hp = 100;
	int MinDmg = 10;
	int MaxDmg = 30;
	int status = 1;
} Ryba;

void Walka2(Hero *hero)
{
	Ryba ryba;
	while (hero->hp > 0 && ryba.hp > 0)
	{
		int Obrry = (rand() % (ryba.MaxDmg – ryba.MinDmg + 1)) + ryba.MinDmg;														//Losowanie obrazen ryby
		int ObrHe = (rand() % (hero->MaxDmg – hero->MinDmg + 1)) + hero->MinDmg;													//Losowanie obrazen bohatera
		char Akcja;
		printf("Wolisz (A)takowac, czy sie (B)ronic?");
		scanf_s("%c", &Akcja, 1);
		getchar();
		if (Akcja == 'A' || Akcja == 'a')
		{
			if (hero->klasa == 'W' || hero->klasa == 'w')
			{
				printf("Wykonujesz zamach i zadajesz %d obrazen.\n", ObrHe);
				ryba.hp = ryba.hp - ObrHe;
				printf("Po uderzeniu ryba wykrzywila pysk i zaatakowala zadajac %d obrazen.\n", Obrry);
				hero->hp = hero->hp - Obrry;
			}
			if (hero->klasa == 'M' || hero->klasa == 'm')
			{
				printf("Rzucasz magiczny atak na wodnego stwora, ktory otrzymuje %d obrazen.\n", ObrHe);
				ryba.hp = ryba.hp - ObrHe;
				printf("Przeciwnik wydaje sie byc oszolomiony, ale szybko dochodzi do siebie i kontratakuje, czym zadaje %d obrazen.\n", Obrry);
				hero->hp = hero->hp - Obrey;
			}
			else
			{
				printf("Za pomoca swoich nozy przecinasz powierzchnie ryby. Stwor wydaje glosne charczenie i otrzymuje %d obrazen\n", ObrHe;
				ryba.hp = ryba.hp - ObrHe;
				printf("Mimo obfitego krwawienia przeciwnik postanawia kotratakowac i zadaje %d obrazen.\n", ObrSz);
				hero->hp = hero->hp - Obrry;
			}
		}
		else
		{
			if (hero->klasa == 'W' || hero->klasa == 'w')
			{
				printf("Wykorzystujesz swoja wielka sile i topor do zablokowania ataku ryby.\n");
			}
			if (hero->klasa == 'M' || hero->klasa == 'm')
			{
				printf("Tworzysz przed soba magiczna tarcze, ktora zatrzymuje atak potwora.\n");
			}
			else
			{
				printf("Dzieki swojej zwinnosci unikasz ataku w ostatnim momencie.\n");
			}
		}
	}
}


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
void OgrodToDrzewo()
{
	printf("Wchodzac tutaj zauwazasz, ze wszystkie drzewa rozsunely sie tworzac cos na ksztalt sciezki.\n");
	printf("Idac ta droga docierasz do prawdopodbnie najwiekszego drzewa w calym ogrodzie.\n");
	printf("Jego kora oprocz spodziewanych fraktalych ksztaltow pokryta jest rowniez sladami po uderzeniach z uzyciem ognia.\n");
	printf("Przypominasz sobie proroctwo.\n");
}

void DrzewoPyt()
{
	printf("Twoja niewielka sila nie pozwala ci na biegle operowanie toporem.\n");
	printf("Na moment przed uderzeniem wokol drzewa pojawia sie sila, ktora uniemozliwia ci jego zniszczenie.\n");
	printf("Drzewo zaczyna sie chaotycznie poruszac.\n");
	printf("Po chwili szamotania sie uspokaja sie i przemawia.\n");
	printf("\"A WIEC CHCESZ DOKONCZYC TO, CO ZAPOCZATKOWALI TWOI POPRZEDNICY?\"");
	printf("\"HMMM, NIE WYGLADASZ JAK ONI, ANI NIE MASZ ICH AURY\"");
	printf("\"POWIEDZ MI WIEC, ILE WYNOSI 2+2*2?\"");
}

void OgrodWajcha1()																																						//
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
	printf("Wszystko znika rownie szybko jak sie zaczelo.\n");																											//
}																																										//
																																										//
void KuzniaUzyta()																																						//
{																																										//
	printf("Nie ma tutaj juz nic ciekawego.\n");																														//
}																																										//

void ToporNiePowstanie()
{
	printf("Patrzysz jedynie na lezace w tym pomieszczeniu odlamki metalu.\n");
	printf("Wiesz jednak, ze predzej czy pozniej bedzie trzeba cos z tym zrobic, bo magiczna ruda zawsze ma wplyw na los bohatera.\n");
}

void KuzniaONOpis()
{
	printf("Nazwa nie zawodzi\n.");
	printf("Juz z dosyc sporej odleglosci bylo widac zolto-pomaranczowe swiatlo, ktore swoja natura zdradzalo wyglad pomieszczenia.\n");
	printf("We wnetrzu panuje przeogromna temperatura, a dookola porozrzucane sa kawalki metalu.\n");

}

void KorytarzOpis0()																																					//
{																																										//
	printf("Widzisz jedynie praktycznie niekonczaca sie sciezke. Jedynie latarnie podwieszane na scianie daja jakies swiatlo\n");										//		Opisy do Korytarza
	printf("Czujesz przeciag, wiec prawdopodobnie gdzies jest przejscie, ale mimo dlugich poszukiwan nie mozesz go znalezc\n");											//
}																																										//
																																										//
void KorytarzOpis1()																																					//
{																																										//
	printf("Widzisz, jak wraz z zamykajacymi sie za toba drzwiami otwiera sie kawalek sciany przed toba.\n");															//
	printf("Czujesz powiem wiatru z tego przejscia, wiec pewnie jest to wyjscie.\n");
}

void Akt2odpoczynek()
{
	printf("Natychmiast po zakonczeniu walki przechodzisz do kolejnego pomieszczenia, z ktorego prowadza trzy sciezki.\n");
	printf("Padasz na ziemie i odpoczywasz do pelnego wyzdrowienia.\n");
}

void KuchniaOpis()
{
	printf("W srodku panuje balagan. Wyglad jest dosyc paradoksalny, bo z jednej strony widoczne sa slady niedawnego uzywania,/n);
		printf("ale z drugiej uwidaczniaja sie cechy wskazujace na dlugi brak obecnosci kogokolwiek.\n");
	printf("Mniejsza z tym.\n");
	printf("Wazniejsze sa praktyczne zastosowania plynace z istnienia takiego miejsca.\n");
}

void DziedziniecOpis();
{
	printf("Pierwsze przyjemne miejsce jak dotychczas.\n");
	printf("Wybrukowane sciezki pozawijane w najrozniejsze ksztalty tylko dodaja uroku temu miejscu.\n");
	printf("Na srodku dziedzinca znajduje sie niewielka fontanna, ale oprocz estetyki nie dodaje ona niczego i nie jest warta uwagi.\n");
}

void StawOpis()
{
	printf("jest to niewielka polna otocznona drzewami.\n");
	printf("Na srodku znajduje sie oczko wodne, w ktorym plywa kilka ryb.\n");
}

void StawOpisPrzemiana();
{
	printf("Juz nie jest tak milo jak wczesniej.\n");
	printf("Wokol miejsca, gdzie wczesniej byl staw a teraz jest zwykle wglebienie w ziemi pojawily sie dzwiczki w podlozu.\n Wzdluz starego brzegu pojawily sie zapalone swieczki. Caly teren pokryty zostal dziwnymi bialymi malunkami.\n");
}

void StawOpisDok()
{
	printf("Sa to kregi uzywane do przyzywania demonow.\n");
}

void StawOpisWsp()
{
	printf("Nie wiem skad, ale przypomina sie cos podobnego i nie jest to nic dobrego.\n");
}

void Akt3monolog()
{
	printf("Badz pozdrowiony CZEMPIONIE, wiedz, ze przed Toba pozostal ostatni przeciwnik.\n Twoje zwyciestwo nad nim bedzie oznaczac przywrocenie starego ladu,\n lecz badz ostrozny, gdyz jest to inteligentna i przebiegla istota.\n");
	printf("bedzie chciala omamic twoj umysl, aby wykorzystac Cie do swoich wlasnych celow,\n jednak gdy juz osiagnie swoj cel, to zostawi Cie. Idz wyprostowany tam, gdzie gasna swiatla o swicie.\n");
	printf("Badz odwazny, gdy przestaje dzialac rozum. Niech Twoj gniew, swiety gniew,\n wypelni cale twoje cialo i pchnie Cie do czynow wielkich. Celem krotkiego zywota nie jest przezycie,\n");
	printf("daj swiadectwo zwego bytu. Wyryj je gleboko w skale, w wodzie, powietrzu i ogniu,\n a wtedy bedziesz mogl rzecz - \"Umarlem, wiec zyc bede wiecznie\".\n");
	printf("Idz, bo tylko w ten sposob zasiadziesz na tronie z polamanych kregoslupow\n i dolaczysz do cyklu bohaterow, ktorych puste serca napelniaja\n prochy naszych nastepcow");
}

void chglocAKT1(Hero *hero)
{
	int akt1 = 1;
	*winAKT1 = akt1;
	int *DrzewoStat;
	int *WajchaStat;
	int *ToporStat;

	WajchaStat = (int*)malloc(sizeof(int));
	ToporStat = (int*)malloc(sizeof(int));
	DrzewoStat = (int*)malloc(sizeof(int));

	*DrzewoStat = 0;
	*WajchaStat = 0;
	*ToporStat = 0;

	char x;
	while (akt1)
	{
		scanf_s("%c", &x, 1);
		getchar();
		switch (x)
		{
		case 'a':
			if (*ToporStat == 0)
			{
				if (*WajchaStat == 1)
				{
					OgrodWajcha1();
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
			}
			else
			{
				OgrodToDrzewo();
				char DrzewoSciecie;
				printf("Czy chcesz sciac? (T/N)\n");
				scanf_s("%c", &DrzewoSciecie, 1);
				getchar();
				if (DrzewoSciecie == 'T' || DrzewoSciecie == 't')
				{
					if (hero->klasa == 'M' || hero->klasa == 'm')
					{
						int MatOdp = 5;
						DrzewoPyt();
						while (MatOdp != 6)
						{
							printf("Twoja odpowiedz: ");
							scanf_s("%d", &MatOdp, 1);
							getchar();
						}
						printf("\"WIDZE, ZE PODSTAWY SA CI ZNANE\".\n");
						printf("\"WIESZ, NUDNE JEST TAKIE STANIE. POSTANAWIAM DO CIEBIE DOLACZYC PRZYNAJMNIEJ NA RAZIE\".\n");
						printf("Drzewo zmienia sie w kostur i pojawia sie w twojej rece.\n");
						*DrzewoStat = 1; 
					}
					if (hero->klasa == 'L' || hero->klasa == 'l')
					{
						printf("Kilka silnych uderzen pozwala na zrownanie drzewa z okolicznym podlozem.\n");
						printf("Zagladajac do wnetrza stworzenia zauwazasz, ze wrosly tam sztylety.\n");
						printf("Martwe drzewo raczej ich nie potrzebuje, wiec zabierasz je ze soba.\n");
						*DrzewoStat = 1;
					}
					if (hero->klasa == 'W' || hero->klasa == 'w')
					{
						printf("Scinasz drzewo jednym, poteznym ciosem.\n");
						printf("Niestety, nie zauwazasz, aby mial cos w sobie, wiec jego smierc nie ma wymiaru materialnego.\n");
						*DrzewoStat = 1;
					}
				}
			}
			break;
		case 'b':
			printf("Przechodzisz do Kuzni.\n");
			hero->loc = 'b';
			if (*ToporStat == 1)
			{
				KuzniaUzyta();
			}
			else
			{
				if (*WajchaStat == 1)
				{
					KuzniaONOpis();
					printf("Moze warto przetopic");
					char kuznia_przetapianie;
					printf("Jaka jest twoja decyzja co do amatorskich prac kowalskich? (T/N)\n");
					scanf_s("%c", &kuznia_przetapianie, 1);
					getchar();
					if (kuznia_przetapianie == 'T' || kuznia_przetapianie == 't')
					{
						ToporPowstanie();
						*ToporStat = 1;
					}
					else
					{
						ToporNiePowstanie();
					}
				}
				else
				{
					KuzniaOFFOpis();
				}
			}
			break;
		case 'c':
			printf("Przechodzisz do Korytarza.\n");
			hero->loc = 'c';
			if (*DrzewoStat == 0)
			{
				KorytarzOpis0();
			}
			else
			{
				KorytarzOpis1();
				printf("Czy chcesz pojsc tym przejsciem? (T/N)");
				char WyjKor;
				scanf_s("%c", &WyjKor, 1);
				getchar();
				if (WyjKor == 'T' || WyjKor == 't')
				{
					printf("Czujesz,ze pewien etap dobiega konca.");
					printf("Swiatlo sloneczne po raz pierwszy ogrzewa twoja twarz.\n");
					printf("Dosyc przyjemne uczucie po tak dlugim czasie spedzonym w zamknieciu.\n");
					printf("Niestety nic nie trwa wiecznie. Zauwazasz wielkiego szczura, ktory nie wyglada zbyt przyjaznie.\n");
					akt1 = 0;
				}
			}
			break;
		default:
			printf("Pojawiasz sie w pomieszczeniu poczatkowym. Moze pora na podjecie dzialan?\n");
			printf("Gdzie chcesz sie udac?\n Ogrod (a), Kuznia (b), czy moze Korytarz (c)\n");
//			printf("%c", &hero->loc);																			//idk po co 
			break;
		}

	}
}

void chglocAKT2(Hero *hero)
{
	int akt2 = 1;
	*winAKT2 = akt2;
	Akt2odpoczynek();
	hero->hp = 100;
	char y;
	while (akt2)
	{
		int *RybaStat;
		int *FiletStat;
		int *CosStat;

		RybaStat = (int*)malloc(sizeof(int));
		FiletStat = (int*)malloc(sizeof(int));
		CosStat = (int*)malloc(sizeof(int));  

		*RybaStat = 0;
		*FiletStat = 0;
		*CosStat = 0;

		printf("Gdzie chcesz sie udac? Kuchnia(d), Dziedziniec(e), czy Staw(f)\n");
		scanf_s("%c", &y, 1);
		getchar();
		switch (y)
			case 'd':
				printf("Przechodzisz do kuchni.\n");
				KuchniaOpis();
				if (*RybaStat == 1)
				{
					printf("Moze warto przygotowac cos do jedzenia z tej ryby?\n");
					printf("Chcesz to zrobic? (T/N)\n");
						char RybSma;
					scanf_s("%c", &RybSma, 1);
					getchar();
					if (RybSma == 'T' || RybSma == 't')
					{
						printf("Rozpalasz ogien w palenisku znajdujacym sie w dolku na srodku kuchni. Nadziewasz rybe na patyk i pieczesz ja az nie uzyska ladnego ");
						*FiletStat = 1;
					}
					else
					{
						printf("Pomieszczenie nie zawiera juz niczego ciekawego. Wychodzisz z niego.\n");
					}
				}
				else
				{
					printf("Nic nie przyciaga juz wzroku. Trzeba szukac w innym miejscu.\n");
				}
				break;
			case 'e':
				printf("Przechodzisz na dziedziniec.\n");
				DziedziniecOpis();
				if (*FiletStat == 1)
				{
					printf("Chcesz polozyc upieczona rybe w to puste miejsce? (T/N)");
					char RybKlucz;
					scanf_s("%c", &RybKlucz, 1);
					getchar();
					if (RybKlucz == 'T' || RybKlucz == 't')
					{
						printf("Znowu to samo - pojawia sie wiatr, ktory prawie lamie drzewka rosnace wokolo. W powietrzu pojawia kula plomieni i mowi \"TO ZNOWU TY? TYM RAZEM NIE BEDZIE TAK LATWO\".\n");
						printf("myslisz sobie: \"Przeciez i tak duzego wyboru nie mam\".\n");
						*CosStat = 1;
					}
					else
					{
						printf("Patrzysz chwile na wyzlobienie w kamieniu i po chwili namyslu idziesz skad.\n");
					}
				}
				else
				{
					printf("Poza ladnymi widokami nie ma tutaj niczego interesujacego.\n");
					printf("Ostatecznie nie warto nawet zbytnio odpoczywac, bo mozliwosc szybszego powrotu do domu jest lepsza wizja.\n");
				}
				break;
			case 'f':
				printf("Przechodzisz do stawu.\n");
				if (*CosStat == 0)
				{
					StawOpis();
					printf("Chcesz sprobowac zlapac jedna z nich? (T/N)");
					char Ryb;
					scanf_s("%c", &Ryb, 1);
					getchar();
					if (Ryb == 'T' || Ryb == 't')
					{
						printf("Udaje sie ci zlapac rybe.\n");
						printf("Mozna z nia cos teraz zrobic.\n");
						*RybaStat = 1;
					}
					else
					{
						printf("Pozostawiasz te niewinne stworzenia przy zyciu - przynajmniej na razie");
					}
				}
				else
				{
					StawOpisPrzemiana();
					if (hero->klasa == 'M' || hero->klasa == 'm')
					{
						StawOpisDok();
					}
					if (hero->klasa == 'L' || hero->klasa == 'l')
					{
						StawOpisWsp();
					}
					akt2 = 0;
				}
				break;
			default:
				printf("Znowu jestes w pomieszczeniu z trzema sciezkami. Gdzie postanawiasz pojsc? Kuchania(d), Dziedziniec(e), czy Staw(f)?\n");
	}
}

void chglocAKT3(Hero *hero)
{
	int akt3 = 1;
	*winAKT3 = akt3;
	Akt3monolog();
	printf("Myslisz \"no dobra\"");
	hero->hp = 100;
	char z;
	while (akt3)
	{
		int *ZagiewStat;
		int *ZapalenieStat;
		int *LustroStat;
		int *PiwnicaStat;

		ZagiewStat = (int*)malloc(sizeof(int));
		ZapalenieStat = (int*)malloc(sizeof(int));
		LustroStat = (int*)malloc(sizeof(int));
		PiwnicaStat = (int*)malloc(sizeof(int));

		*ZagiewStat = 0;
		*ZapalenieStat = 0;
		*LustroStat = 0;
		*PiwnicaStat = 0;

		printf("Co jest celem twojej wedrowki? Sala Tronowa(g), Piwnica(h), czy Tajemniczy pokoj(i)\n");
		scanf_s("%c", &y, 1);
		getchar();
		switch (z)
			case 'g':
				printf("Przechodzisz do Sali Tronowej.\n");
				SalaTronowaOpis();
				printf("Chcesz sie dokladniej rozejrzec? (T/N)\n");
				char Tron;
				scanf_s("%c", &Tron, 1);
				getchar();
				if (Tron == 'T' || Tron == 't')
					{
					SalaTronowaOpisDok();
					printf("Zauwazasz tlacy sie zagiew. Chcesz go wziac ze soba? (T/N)?");
					char Zagiew;
					scanf_s("%c", &Zagiew, 1);
					getchar();
					if(Zagiew == 'T' || Zagiew == 't')
						{
						printf("Podnosisz jedno z niewielu obecnych tu zrodel swiatla.\n);
						printf("Niech ci dobrze sluzy i rozswietli mroki swiata.\n);
						*ZagiewStat = 1;
						}
					else
						{
						printf("Pozostawiasz rozpalony kawalek drewna na zimnej, kamiennej podlodze.\n);
						printf("Byc moze plomien nigdy nie rozswietli mrokow swiata.\n);
						}
				else
					{
					printf("Sala spowita w polmroku nie wydaje sie ci zbyt interesujaca.\n);
					printf("Opuszczasz sale.\n");
				       }
			break;
			
			case 'h':
				printf("Schodzisz do Piwnicy.\n");
				PiwnicaOpis();
				if( *ZagiewStat == 1)
					       
			break;
		
			case 'i':
				printf("Wchodzisz do Tajemniczego Pokoju.\n");
				TajemniczyPokojOpis();
			break;
				
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
	
    free(buffer);																							            //zwalnianie buffera;
	hero->hp = 100;																										//zapisywanie hp																									
	hero->mp = 100;																										//zapisywanie mp
	hero->MinDmg = 40;
	hero->MaxDmg = 60;
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
	Walka1(hero);
	akt2(hero);
	Walka2(hero);
	free(hero);																											//prawdziwa przygoda bohatera konczy sie dopiero tutaj
	return 0;
}
