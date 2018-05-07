#include <stdio.h>
#include <string.h>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include "Values.h"
#include "node.h"
#include "list.cpp"

using namespace std;

/*
Berechne Volumen und Oberflaeche eines Quaders
*/

/*
	Berechne das Volumen des Quaders
*/
void calcQuader(double width, double height, double length)
{
	//calc Volume
	double volume = width * height * length;
	printf("Volumen: %f\n", volume);

	//calc Surface
	double area = 2 * ((width*height) + (height * length) + (length*width));
	printf("Area: %f\n", area);
}

/*
	Gib eine Zahl formatiert aus, als 1. Dezimal, 2. Oktal, 3. Hexadezimal und 4. al Character
*/
void formatNumber(int number)
{
	printf("dec: %d\n", number);
	printf("oct: %o\n", number);
	printf("hex: %x\n", number);
	printf("char: %c\n", number);
}

/*
	Berechne aus zwei Zahlen den groessten gemeinsamen Teiler (ggT) nach Euklid
*/
void euklid(int zahlA, int zahlB)
{
	int dividend;
	int divisor;
	int rest;

	if (zahlA >= zahlB)
	{
		dividend = zahlA;
		divisor = zahlB;
	}
	else
	{
		dividend = zahlB;
		divisor = zahlA;
	}
	do
	{
		rest = dividend % divisor;
		dividend = divisor;
		divisor = rest;
	} while (rest != 0);
	int ggT = dividend;

	printf("ggT: %d\n", ggT);
}

/*
	Gib für die Zahlen 1-7 den jeweiligen Wocohentag aus, wobei 1 für Montag steht, 2 für Dienstag, usw. Zahlen, die darüber hinaus gehen, sind keine Tage, was entsprechend vermerkt werden soll
*/
std::string weekdays(int day) {
	switch (day) {
	case 1: return std::string("Montag");
		break;
	case 2: return std::string("Dienstag");
		break;
	case 3: return std::string("Mittwoch");
		break;
	case 4: return std::string("Donnerstag");
		break;
	case 5: return std::string("Freitag");
		break;
	case 6: return std::string("Samstag");
		break;
	case 7: return std::string("Sonntag");
		break;
	default: return std::string("Kein Tag");
		break;
	}
}

/*
	Berechne den Saldo eines bestimmten Kapitals über eine gegebene Zeit mit einem gegebenen Zinssatz
*/
void calcZins(int kapital, int duration, int tax)
{
	int days = 360 * duration;

	double saldo = ((kapital * duration * tax) / 100);

	printf("Saldo: %f\n", saldo);
}

/*
	Kuerze einen Bruch, mithilfe der ermittlung des größten gemeinsamen Teiler
*/
void fraction(int zahlA, int zahlB)
{
	int tempA;
	int tempB;
	int zaehler;
	int nenner;
	int rest;

	if (zahlA >= zahlB)
	{
		zaehler = zahlA;
		nenner = zahlB;
		tempA = zahlA;
		tempB = zahlB;
	}
	else
	{
		zaehler = zahlB;
		nenner = zahlA;
		tempA = zahlB;
		tempB = zahlA;
	}
	do
	{
		rest = zaehler % nenner;
		zaehler = nenner;
		nenner = rest;
	} while (rest != 0);
	int ggT = zaehler;

	zaehler = (tempB / ggT);
	nenner = (tempA / ggT);


	printf("zaehler: %d\n", zaehler);
	printf("nenner: %d\n", nenner);
}

/*
	Ermittle die größe verschiedener Datentypen, Zahlen und Zeichen
*/
void sizeOfValues()
{
	printf("char     : %d Byte\n", sizeof(char));
	printf("int      : %d Bytes\n", sizeof(int));
	printf("long     : %d Bytes\n", sizeof(long int));
	printf("float    : %d Bytes\n", sizeof(float));
	printf("double   : %d Bytes\n", sizeof(double));
	printf("66       : %d Bytes\n", sizeof(33));
	printf("Hallo    : %d Bytes\n", sizeof("Hallo"));
	printf("(char)A  : %d Bytes\n", sizeof((char)'A'));
	printf("A        : %d Bytes\n", sizeof('A'));
	printf("34343434 : %d Bytes\n", sizeof(34343434));
}


/*
	gib zufällige Zahlen aus. Die Obergrenze kann frei gewählt werden. Außerdem sind alle Zufallszahlen nach jedem durchlauf verschieden
*/
void randomValues()
{
	int diceA = DICE_A;
	int numberOfSides = DICE_B;
	int random;
	int counter = 1;
	srand(time(NULL));


	for (int i = 0; i < 10; i++)
	{
		random = (rand() % ((numberOfSides + 1) - diceA)) + diceA;
		printf("%d.\tZufallszahl: %d\n", counter, random);
		counter++;
	}
}

/*
	Ermittle die Länge der array elemente. Dazu muss ein Array erstellt werden, welches diverse Character beinhaltet
*/
void arrayLength()
{
	//Erstelle ein Char array mit dem Inhalt Hallo, Welt!
	char charArray[] = "Hallo, Welt!";


	bool counterFinished = false;
	int arrayCounter = 0;
	int arrayLength = 0;
	do
	{
		if (charArray[arrayCounter] != '\0')
		{
			arrayLength++;
			arrayCounter++;
		}
		else
		{
			arrayLength++;
			counterFinished = true;
		}
	} while (!counterFinished);

	printf("Laenge d. Arrays %d\n", arrayLength);
}

/*
	Kopiere das Char Array in ein weiteres Array
*/
void copyArray()
{
	//Kopiere das Array in ein weiteres Array
	char charArray[] = "Hallo, Welt!";
	char copiedArray[sizeof(charArray)];

	for (int i = 0; i < 13; i++)
	{
		copiedArray[i] = charArray[i];
		printf("Full copied Array %c\n", copiedArray[i]);
	}
}

/*
	 Suche innerhalb eines arrays nach einem bestimmten zeichen
*/
void searchArray()
{
	//Suche im array nach einem bestimmten Zeichen
	char charArray[] = "Hallo, Welt!";
	char searching = 'a';
	int counter = 0;
	int arrayLength = sizeof(charArray);

	do
	{
		if (charArray[counter] == searching)
		{
			printf("Zeichen %c in Zelle %i gefunden\n", searching, counter);
		}
		counter++;
	} while (counter <= arrayLength);
}

/*
	Es ist herauszufinden, was in den jeweiligen Code Zeilen passiert
*/
void zeiger()
{
	int x = 1, y = 2, z[10];	//variable und array erstellen
	int *ip;			//zeiger erstellen

	ip = &x;			//ip erhält Adresse von x (ip = ADRESSE)
	printf("ip = &x;\n\tIP: %d, X: %d\n", ip, x);
	
	y = *ip;			//y erhält wert von ip (also Wert von x)
	printf("y = *ip;\n\ty: %d, *ip: %d\n", y, *ip);

	*ip = *ip + 10;		//Wert, auf den ip zeigt wird um 10 erhöht (x+10)
	printf("*ip = *ip + 10;\n\tip: %d\n", *ip);

	*ip += 1;			//x wird um 1 erhöht (x+1)
	printf("*ip += 1;\n\tip: %d\n", *ip);

	++*ip;			//x wird um 1 erhöht (x+1)
	printf("++*ip;\n\tip: %d\n", *ip);

	(*ip)++;			//x wird um 1 erhöht (x+1)
	printf("(*ip)++;\n\tip: %d\n", *ip);

	*ip = 0;			//x wird auf Wert 0 gesetzt
	printf("*ip = 0;\n\tip: %d\n", *ip);

	ip = &z[0];			//ip hat nicht mehr Adresse von x, sondern nimmt //adresse der ersten Zelle von Array z an 
	printf("ip = &z[0];\n\tip: %d\n", ip);




}




/*
	Es sollen zwei Werte miteinander vertauscht werden, OHNE dass die Werte kopiert werden. Es sollen Pointer verwendet werden
*/
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

/*
	Struktur zu Aufgabe 15
*/
struct tBook
{
	int buchID;
	char title[75];
	char autor[50];
};


/*
	vergib dem angegebenen Buch neue Werte
	book = nummer des buches, also stelle des exemplares im Array
	id = BuchID
*/
void setBook(tBook* book, int id, const char* titel, const char* autor)
{
	book->buchID = id;
	strcpy_s(book->title, titel);
	strcpy_s(book->autor, autor);
}


/*
	Lege eine Bibliothek an mit hilfe der Struktur
	ändere Die Elemente vom bookshelf
*/
void bibliothek()
{
	tBook bookshelf[100];

	for (int i = 0; i < 100; i++)
	{
		bookshelf[i].buchID = i;
		strcpy_s(bookshelf[i].autor, "Autor");
		strcpy_s(bookshelf[i].title, "Titel");
	}
	setBook(&bookshelf[0], 0,"asdf","Ilse Bilse");		//Vergib einem Buch neue Werte
}










/*
	Lies eine Textdatei ein und gib deren Inhalt auf der Konsole aus.
*/
void textFile() {
		/*	datei öffnen	
			datei einkesen7
			zeiger steht auf erster zeile
			erste zeile einlesen und ausgeben
			zeiger erhöhen
			datei in array speichern --> evtl
			strtok mit string und , 
			ausgabe e´vtl in schleife
		*/

	FILE *fp;
	FILE *destFile;
	fopen_s(&fp, "test.txt", "r");
	//fp = fopen("test.txt", "r");
	if (fp == NULL) 
	{
		printf("Fehler beim einlesen der Datei!\n");
	}
	else
	{
		//printf("IRGENDWAS GEHT\n");
		//int size = sizeof(fp);
		//const int temp = size;
		//char str[temp];
		char str[100];
		while (fgets(str, 100, fp))	//puffer wo string gespeichert wird, max anzahl eingelesener zeichen, stream wo datei drin ist0
		{
			//b: Den inhalt in eine neue datei schreiben. Vorher diese Datei erzeugen
			ofstream antwort;
			antwort.open("antwort.txt", ios::app);
			antwort << str, "\n";
			antwort.close();
		
			//Datei wird geöffnet, es wird geschrieben, dann wird überschrieben --> KACKE
			printf(str);


			//c: gib den Inhalt rückwärts aus
			//b: Den inhalt in eine neue datei schreiben. Vorher diese Datei erzeugen
			ofstream reverseFile;
			reverseFile.open("reverse.txt", ios::app);
			for (int i = 99; i >= 0; i--) 
			{
				reverseFile << str[i], "\n";
			}
			reverseFile.close();

			




		}
		
	}
	
	
	
	
	
	
	
	
	//printf(datei);
	//if (NULL == datei)
	//{
	//	printf("Datei konnte nicht geöffnet werden!");
	//}


/*
	while (fgets(datei) != NULL) 
	{
	
	}*/
}

//Unterrrichtseinheit vom 19. April 2018
/*typedef struct node
{
	int size;
	node * next;
} node;
*/



//Unterrrichtseinheit vom 19. April 2018
//Lege eine Liste an!
void createList()
{
	//Lege ein Paar Nodes auf dem Heap an
	//node * node1 = (node*) malloc(sizeof(node));
	//node * node2 = (node*) malloc(sizeof(node));
	//node * node3 = (node*) malloc(sizeof(node));
	//node * node4 = (node*) malloc(sizeof(node));

	//node *node1 = createNodes(1);
	//node *liststart = node1;
	//node *listEnd = node1;

	////node * node1 = createNodes(1);
	//node * node2 = createNodes(2);
	//node * node3 = createNodes(3);
	//node * node4 = createNodes(4);

	///*node1->value = 1;
	//node1->next = node2;

	//node2->value = 2;
	//node2->next = node3;
	//
	//node3->value = 3;
	//node3->next = node4;
	//
	//node4->value = 4;
	//node4->next = NULL;*/

	//createNodeAndAppend(&listEnd, 2);
	//createNodeAndAppend(&listEnd, 3);
	//createNodeAndAppend(&listEnd, 4);
	//
	////Gib die Liste aus. Es soll an einem übergebenen Punkt angefangen werden
	//printList(liststart);


	node* listStart;
	node* listEnd;

	node* node1 = createNode(1);
	listStart = node1;
	listEnd = node1;

	createNodeAndAppend(&listEnd, 2);
	createNodeAndAppend(&listEnd, 3);
	createNodeAndAppend(&listEnd, 4);

	printList(listStart);
}







/*
	Rufe einfach alle Funktionen der jeweiligen Aufgaben auf
*/
int main() {
	//Aufgabe 1 & 2
//	calcQuader(WIDTH, HEIGHT, LENGTH);

	//aufgabe 3
//	formatNumber(111);

	//Aufgabe 4

//	euklid(ZAHLA, ZAHLB);

	//Aufgabe 5
//	for (int i = 0; i < 20; i++) {
//		printf("%s\n", weekdays(i).c_str());
//	}

	//Aufgabe 6
//	calcZins(KAPITAL, DURATION, ZINS);

	//Aufgabe 7
//	fraction(ZAHLA, ZAHLB);

	//Aufgabe 8
//	sizeOfValues();

	//Aufgabe 9
//	randomValues();

	//Aufgabe 10
//	arrayLength();

	//Aufgabe 11
//	copyArray();

	//Aufgabe 12
//	searchArray();

	//Aufgabe 13 war verständnis und steht im Word dokument vom 12. April
	zeiger();

	//Aufgabe 14
//	int x = 14;
//	int y = 27;

	//Kontrollanzeige vor dem Tauschen der Werte
//	printf("Before:\tX: %i;\t Y: %i\n", x, y);

	//übergib die Werte der Speicherzellen der Variablen x & y, damit deren Werte vertauscht werden können 
//	swap(&x, &y);

	//Kontrollanzeige nach dem Tauschen der Werte
//	printf("After:\tX: %d;\t Y: %d\n", x, y);

	//Zu aufgabe 15
//	bibliothek();


	//Aufgabe 16
	//textFile();

	//Unterrichtseinheit vom 19. April 2018
//	createList();







	//Sorge dafür, dass sich die Konsole nicht sofort schließt
	//scanf_s("&f");
}

