#include <iostream>
#include <string>
#include <fstream>

using namespace std;

unsigned int quantity = 0;
float cost = 0;
unsigned short name_n, attempts = 3;;
string name, pass;
char pass_char;

struct items
{
	string name, model, producer, color, parameters;
	struct date
	{
		unsigned short ofReceipt, ofSale;//receipt da se sazdava dinamichno (ako artikulat ne e poluchen oshte), sale da se sazdava dinamichno (ako artikulat ne e prodaden)
	};
	unsigned short quantity;
	float price, weight;
}item;

void menu()
{
	unsigned short option;
	cout<<"Items in the system: "<<quantity<<"\n";
	cout<<"Cost of all items in the system: "<<cost<<"\n"<<"\n";
	cout<<"Please, choose an option:"<<"\n";
	cout<<"1. Add a new item"<<"\n";
	cout<<"2. Change parameters of an existing item"<<"\n";
	cout<<"3. See sales for a particular day or a period of time"<<"\n";
	cout<<"4. Exit"<<"\n"<<"\n";
	cin>>option;
	while(option < 1 || option > 4)
	{
		cout<<"Invalid option! Choose another one: ";
		cin>>option;
	}
	switch(option)
	{
		case 1: 	{
						cout<<"Add a new item:"<<"\n";
						cout<<"Name: "; cin>>item.name;
						cout<<"Model: "; cin>>item.model;
						cout<<"Producer: "; cin>>item.name;
						cout<<"Color: "; cin>>item.name;
						cout<<"Parameters: "; cin>>item.name;
						//item
						//ofstream file;
						break;
					}
		
	}
}
void enter()
{
	cout<<"Name: ";
	cin>>name;//proveri dali, ako nishto ne vavedesh, ostava sashtata stoynost ot minalo vavezhdane
	if(name == "admin") name_n = 1;
	if(name == "user1") name_n = 2;
	if(name == "user2") name_n = 3;
	cout<<"Pass: ";
	//pass_char = getch();//tuk koeto se vavezhda da ne se vizhda
	switch(name_n)
	{
		case 1: 	{
						if(pass == "doctorToshe") 
						{
							attempts = 3;
							cout<<"\n"<<"Welcome, "<<name<<"!"<<"\n"<<"\n";
							cout<<"***************"<<"\n"<<"\n";
							menu();
						}break;
					}
		case 2: 	{
						if(pass == "radi05") 
						{
							attempts = 3;
							cout<<"\n"<<"Welcome, "<<name<<"!"<<"\n"<<"\n";
							cout<<"***************"<<"\n"<<"\n";
							menu();
						}break;
					}
		case 3: 	{
						if(pass == "viki16") 
						{
							attempts = 3;
							cout<<"\n"<<"Welcome, "<<name<<"!"<<"\n"<<"\n";
							cout<<"***************"<<"\n"<<"\n";
							menu();
						}break;
					}
		default:    {
						attempts--;
						switch(attempts)
						{
							case 2: {
										cout<<"Invalid username or pass! Please, try again. You have "<<attempts<<" attempts more."<<"\n";
										break;
									}
							case 1: {
										cout<<"Invalid username or pass! Please, try again. You have "<<attempts<<" attempts more."<<"\n";
										cout<<"Warning! If you enter invalid data now, the system will be locked!"<<"\n";
										break;
									}
							case 0: {
										unsigned int key;
										cout<<"System locked!"<<"\n";
										cout<<"If you are the Admin, please enter the special key: ";
										cin>>key;
										if(key == 497792)
										{
											cout<<"System unlocked!";
											attempts = 3;
											enter();
										}
										break;
									}
						}
						enter();
						break;
					}
		//kak da se skrivat potr. ime i parola sled kato sa vavedeni, kak da imash pravo na 3 opita za vlizane i sistemata da ostava zakliuchena do vavezhdaneto na specialen kod
	}
}
int main()
{
	cout<<"Computer company \"The best doctors\""<<"\n";
	cout<<"Please, first enter into the system: "<<"\n"<<"\n";
	enter();
}
