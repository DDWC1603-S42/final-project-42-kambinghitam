//By KambingHitam
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void text()
{
	for(int x =9000; x >0 ; x--){
		cout<<"...";
		cout<<"\r";
	}
		cout<<"\n"<<endl;
		cout<<" _________"<<endl;
		cout<<"|M4IN PAG3|"<<endl;
    cout<<"|======#==|"<<endl;
    cout<<"|==*======|"<<endl;
    cout<<"|======@==|"<<endl;
	cout<<"\nWhat do you want to do?\n \n(A) Start a war? \n(B) Defence your country? \n(C) Feeling like heavy? \n(D) Feeling like sneaky?\n(q)Quit\n\n> ";
	return;
}

int main ()
{
	text();
	char selection;
	cin>>selection;
	while (selection != 'q'){
		if(selection=='a'){
			int per,totpr;
				cout<<"\nCreate a team."<<endl;
				cout<<"How many team members do you want to hire?"<<endl;
				cout<<"$900 per head"<<endl;
				cin>>per;
				totpr=900*per;
				cout<<"The total price is: $"<<totpr<<endl;
				text();
				cout << "wanna proceed?\n";
				cin >> selection;
		}
		else if(selection =='b'){
			srand ( time(NULL) );
			string region[4]; //declare
		 	int randx = rand() % 4;
		 	region[0]="Setapak";
		 	region[1]="Shah Alam";
		 	region[2]="Nilai";
		 	region[3]="Segamat";

		 	cout<<region[0]<<endl<<region[1]<<endl<<region[2]<<endl<<region[3]<<endl;

			cout<<"\n\nAmong these regions, you're responsible to defend: ";
		 	cout<<region[randx];

		 	cout<<"\n\nYou'll be reward with $20,000\n"<<endl;

		 		text();
				cout << "wanna proceed?\n";
				cin >> selection;
		}
		else if(selection=='c'){

         	int itemHeavy,price,totalprice;

 	cout<<"\nChoose ya poison"<<endl;

 	cout<<"1) Tactical vest = $339  "<<endl;
 	cout<<"2) LWRC M6 IC SPR Individual Carbine 223 Rifle = $1900"<<endl;
 	cout<<"3) Winchester Model 1873 Carbine = $1100"<<endl;
 	cout<<"4) Bushmaster Red Dot Scope = $599"<<endl;
 	cout<<"5) MK1 Grenade = $100"<<endl;
 	cout<<"6) Black Aces Bazooka = $1299"<<endl;
 	cin >>itemHeavy;
 	if (itemHeavy == 1){
 		cout<<"Current price: $339"<<price<<endl;
 		price += 399;
	 }
	  else	if (itemHeavy == 2){
 		cout<<"Current price: $1900"<<price<<endl;
	 }
	 	  else	if (itemHeavy == 3){
 		cout<<"Current price: $1100"<<price<<endl;
	 }
	 	  else	if (itemHeavy == 4){
 		cout<<"Current price: $599"<<price<<endl;
	 }
	 	  else	if (itemHeavy == 5){
 		cout<<"Current price: $100"<<price<<endl;
	 }
	 	  else	if (itemHeavy == 6){
 		cout<<"Current price: $1299"<<price<<endl;
	 } 	text();
				cout << "wanna proceed?\n";
				cin >> selection;

		}
		else if(selection=='d'){
			int snk;

			cout<<"1) Special Buck Knives = $105"<<endl;
		 	cout<<"2) Smith & Wesson Special Pistol = $1199"<<endl;
		 	cout<<"3) Browning Hi-Power Gun = $605"<<endl;
		 	cout<<"4) Beretta 96A1 = $599"<<endl;

		 	cin>>snk;

		 	if (snk == 1){
		 		cout<<"Current price: $105"<<endl;

			 }
			  else	if (snk == 2){
		 		cout<<"Current price: $1199"<<endl;
			 }
			 	  else	if (snk == 3){
		 		cout<<"Current price: $605"<<endl;
			 }
			 	  else	if (snk == 4){
		 		cout<<"Current price: $599"<<endl;
			 }
			 text();
			 cout << "wanna proceed?\n";
			 cin >> selection;
		}
	}
}
