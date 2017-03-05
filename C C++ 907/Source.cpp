#define _CRT_SECURE_NO_WARNIGNS
#include <iostream>
#include <string>

using namespace std;

class film{
	public:
		char nume[64];
		char primul_actor[64];
		char aldoilea_actor[64];
		void arata_film();
		void initializare(char *nume, char *primul, char *aldoilea);
};

void film::arata_film(){
	cout << "Numele filmului:" << nume << endl;
	cout << "Interpreteaza: " << primul_actor << "si " << aldoilea_actor << endl;
}

void film::initializare(char *film_nume, char *primul, char *aldoilea){
	strcpy_s(nume, film_nume);
	strcpy_s(primul_actor, primul);
	strcpy_s(aldoilea_actor, aldoilea);

}

void main(){
	film fugar, neobosit;
	fugar.initializare("Fugarul","Harrison Ford","Tommy Lee Jones");
	neobosit.initializare("Nopti albe in Seatle" , "Tom Hanks" , "Meg Ryan");

	cout << "Ultimele doua filme pe care le-am vazut sunt: " << fugar.nume << "si " << neobosit.nume << endl;
	cout << "Cred ca" << fugar.primul_actor << "a fost mare!" << endl;

	system("pause");
}