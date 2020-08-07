#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
#include <ctime>
#include <windows.h>
#include <cstdlib>
#include<cstring>
using namespace std;
class Facility
{
private:
	bool Wifi;
	bool Gas_connection;
	bool Electricity;
public:
    Facility();
	Facility(bool w, bool GC, bool El);
	~Facility();
	void setWifi(bool W);
	void setGas_connection(bool GC);
	void setElectricity(bool El);
	bool getWifi();
	bool getGas_connection();
	bool getElectricity();
	friend ostream & operator<<(ostream & out, const Facility f)
	{
	   if(f.Wifi==true)
	   {
	   	out<<"Wifi Availible"<<endl;
	   }
	   else
	   {
	   	out<<"Wifi not  Availible"<<endl;
	   }
	   if(f.Gas_connection==true)
	   {
	   		cout<<"Gas Connection Availible"<<endl;
	   }
	   else
	   {
	   		out<<"Gas  Connection not Availible"<<endl;
	   }
	   if(f.Electricity==true)
	   {
	   	cout<<"Electricity Availible"<<endl;
	   }
	   else
	   {
	   		out<<"Electricity not Availible"<<endl;
	   }
	   return out;
	}
};
   Facility::Facility()
	{
		Wifi=false;
		Gas_connection=false;
		Electricity=false;
	}
	Facility::Facility(bool w, bool GC, bool El)
	{
		Wifi=w;
		Gas_connection=GC;
		Electricity=El;
	}
	 Facility::~Facility()
	{
		Wifi=false;
		Gas_connection=false;
		Electricity=false;
	}
   void Facility::setWifi(bool W)
   {
   	 Wifi=W;
   }
   void Facility::setGas_connection(bool GC)
   {
   		Gas_connection=GC;
   }
   void Facility::setElectricity(bool El)
   {
   	Electricity=El;
   }
   bool Facility::getWifi()
   {
   	return Wifi;
   }
   bool Facility::getGas_connection()
   {
   	return Gas_connection;
   }
   bool Facility::getElectricity()
   {
   	return Electricity;
   }
class Property
{
private:
	char *Property_Name;
	int price;
	int rent;
	char *Group;
	int house;
	int hotel;
	int shop;
	bool mortgaged;
public:
  Property();
  Property(const char PName[],int p,int r,char Grp[],int hs,int htl, int shp,bool mgd);
  ~Property();
  void setName(char p[]);
  void setprice(int p);
  void setrent(int r);
  void setgroup(char grp[]);
   int get_price();
  int get_rent();
  int get_house();
  int get_hotel();
  int get_shop();
  bool get_mortgaged();
  char *get_property_name();
  friend ostream &operator<<( ostream &out,const Property P)
  {
  	out<<"Propert Name : "<<P.Property_Name<<endl;
  	out<<"Price :"<<P.price<<endl;
  	out<<"Rent : "<<P.rent<<endl;
  	out<<"No of house :"<<P.house<<endl;
  	out<<"No of hotels : "<<P.hotel<<endl;
  	out<<"No of shops : "<<P.shop<<endl;
     	if(P.mortgaged==true)
     	{
  	    	cout<<"property mortaged"<<endl;
	    }
	  else
	  {
	  		cout<<"property not mortaged"<<endl;
	  }
  	return out;
  }
};
void Property::setName(char p[])
{
	int i;
	if(p==NULL)
	{
		Property_Name=NULL;
	}
	else if(p!=NULL)\
	{
	for(i=0;p[i]!='\0';i++);
	Property_Name=new char[i+1];
	for(int j=0;j<i+1;j++)
	{
		Property_Name[j]=p[j];
	}
    }
}
void Property::setprice(int p)
{
	price=p;
}
void Property::setrent(int r)
{
	rent=r;
}
void Property::setgroup(char grp[])
{
	int i;
	if(grp==NULL)
	{
		Group=NULL;
	}
	else if(grp!=NULL)\
	{
	for(i=0;grp[i]!='\0';i++);
	Group=new char[i+1];
	for(int j=0;j<i+1;j++)
	{
		Group[j]=grp[j];
	}
    }
}
int Property::get_hotel()
{
	return hotel;
}
int Property::get_house()
{
	return house;
}
int Property::get_shop()
{
	return shop;
}
bool Property::get_mortgaged()
{
	return mortgaged;
}
int Property::get_price()
{
	return price;
}
int Property::get_rent()
{
	return rent;
}
char * Property::get_property_name()
{
	return Property_Name;
}
  Property::Property()
  {
  	Property_Name=NULL;
  	price=0;
  	rent=0;
  	Group=NULL;
  	house=0;
  	hotel=0;
  	shop=0;
  	mortgaged=false;
  }
  Property::Property(const char PName[],int p,int r,char Grp[],int hs,int htl, int shp,bool mgd)
  {
      if(PName==NULL)
      {
      	Property_Name=NULL;
	  }
	  else if(PName!=NULL)
	  {
	  	if(Property_Name==NULL)
	  	{
	  	int i;
	  	for( i=0;PName[i]!='\0';i++);
	  	Property_Name=new char[i+1];
	  	for(int j=0;j<i+1;j++)
	  	{
	  		Property_Name[j]=PName[j];
		}
	    }
	    else if(Property_Name!=NULL)
	    {
	    //	delete []Property_Name;
	    	int i;
	  	for( i=0;PName[i]!='\0';i++);
	  	Property_Name=new char[i+1];
	  	for(int j=0;j<i+1;j++)
	  	{
	  		Property_Name[j]=PName[j];
		}
	   	}
	  }
	  if(Grp==NULL)
      {
      	Group=NULL;
	  }
	  else if(Grp!=NULL)
	  {
	  	if(Group==NULL)
	  	{
	  	int i;
	  	for( i=0;Grp[i]!='\0';i++);
	  	Group=new char[i+1];
	  	for(int j=0;j<i+1;j++)
	  	{
	  		Group[j]=Grp[j];
		}
	    }
	    else if(Group!=NULL)
	    {
	    //	delete []Group;
	    	int i;
	  	for( i=0;Grp[i]!='\0';i++);
	  	Group=new char[i+1];
	  	for(int j=0;j<i+1;j++)
	  	{
	  		Group[j]=Grp[j];
		}
	   	}
	  }
	  price=p;
	  rent=r;
	  house=hs;
	  hotel=htl;
	  shop=shp;
	  mortgaged=mgd;
	}
	Property::~Property()
	{
	//	delete []Property_Name;
		price=0;
		rent=0;
		house=0;
		hotel=0;
		shop=0;
		mortgaged=false;
	}
class PrivateProperty: public Property
{
private:
   Facility Fac;
public:
	PrivateProperty();
	PrivateProperty(const char PName[], int p, int r, char grp[],int hs,int htl,int shp,bool mgd,bool W, bool GC, bool El);
	~PrivateProperty();
	friend ostream &operator<<( ostream &out, PrivateProperty P)
  {
  			out<<"Property Name : "<<P.get_property_name()<<endl;
  			out<<"Rent of Property : "<<P.get_rent()<<endl;
  			out<<"Price of Property : "<<P.get_price()<<endl;
  			out<<"No of houses : "<<P.get_house()<<endl;
  			out<<"No of shops : "<<P.get_shop()<<endl;
  			out<<"No of hotels : "<<P.get_hotel()<<endl;
  			out<<"Facilities of private property : "<<endl;
  			if(P.get_mortgaged()==true)
  			{
  				out<<"Property mortaged"<<endl;
			  }
			  else
			  {
			  	out<<"property not mortaged"<<endl;
			  }

  			out<<P.Fac;
  			return out;
  }
};
    PrivateProperty::PrivateProperty()
	{
		Facility Fac;
	}
   PrivateProperty::PrivateProperty(const char PName[], int p, int r,char grp[],int hs,int htl,int shp,bool mgd, bool W, bool GC, bool El):Property(PName, p,r,grp,hs,htl,shp,mgd)
   {
   	Fac.setWifi(W);
   	Fac.setGas_connection(GC);
   	Fac.setElectricity(El);
   }
   PrivateProperty::~PrivateProperty()
   {
   	Fac.setWifi(false);
   	Fac.setGas_connection(false);
   	Fac.setElectricity(false);
   }

class Player
{
private:
	char *fName;
	char *lName;
	int cash;
	int index;
	int No_of_Properties;
	Property **Prop;
public:
	Player();
	Player(  const char fN[], const char lN[], int C, int NoP);
	~Player();
	friend ostream &operator<<( ostream &out, const Player &P)
    {
    	out<<"Player Name : "<<P.fName<<" "<<P.lName<<endl;
    	out<<"Cash of player : "<<P.cash<<endl;
    	out<<"No of properties : "<<P.No_of_Properties<<endl;
    	out<<"Index of player : "<<P.index<<endl;
    	return out;
    }

};
  Player::Player()
  {
  	fName=NULL;
  	lName=NULL;
  	cash=0;
  	index=0;
  	No_of_Properties=0;
  	Prop=NULL;
  }
  Player::Player(const char fN[], const char lN[], int C, int NoP)
  {
  	index=0;
  	if(fN==NULL)
  	{
  		fName=NULL;
	}
	else if(fN!=NULL)
	{
		if(fName==NULL)
		{
			int i;
			for(i=0;fN[i]!='\0';i++);
			fName=new char [i+1];
			for(int j=0;j<i+1;j++)
			{
				fName[j]=fN[j];
			}
		}
		else if(fName!=NULL)
		{
			//delete []fName;
		    int i;
			for(i=0;fN[i]!='\0';i++);
			fName=new char [i+1];
			for(int j=0;j<i+1;j++)
			{
				fName[j]=fN[j];
			}
		}
	}
	if(lN==NULL)
  	{
  		lName=NULL;
	}
	else if(lN!=NULL)
	{
		if(lName==NULL)
		{
			int i;
			for(i=0;lN[i]!='\0';i++);
			lName=new char [i+1];
			for(int j=0;j<i+1;j++)
			{
				lName[j]=fN[j];
			}
		}
		else if(lName!=NULL)
		{
			//delete []lName;
		    int i;
			for(i=0;lN[i]!='\0';i++);
			lName=new char [i+1];
			for(int j=0;j<i+1;j++)
			{
				lName[j]=lN[j];
			}
		}
	}
	cash=C;
	No_of_Properties=NoP;
	Prop=NULL;
  }
 Player::~Player()
 {
 //	delete []fName;
 //	delete []lName;
 	cash=0;
 	index=0;
 	No_of_Properties=0;
 	Prop=NULL;
 }
 class Bank
 {
private:
	long Cash;
	PrivateProperty **PrivateProp;
	Property **PublicProp;
public:
	Bank();
	Bank(long C);
	~Bank();
	void setproperties();
	friend ostream &operator<<(ostream &out,Bank B)
	{
		out<<"Cash in Bank : "<<B.Cash<<endl;
	}
};
Bank::Bank()
{
	Cash=0;
	PrivateProp=NULL;
	PublicProp=NULL;
}
Bank::Bank(long C)
{
	Cash=C;
	PrivateProp=NULL;
	PublicProp=NULL;
}
Bank::~Bank()
{
	Cash=0;
	PrivateProp=NULL;
	PublicProp=NULL;
}
void Bank::setproperties()
{
	ifstream fin;
	fin.open("properties.txt");
    int size=20;
	int a;
	char arr[50];
	PrivateProp=new PrivateProperty*[size];
	for(int i=0;i<size;i++)
	{
		PrivateProp[i]=new PrivateProperty;
		fin.getline(arr,50,',');
		PrivateProp[i]->setName(arr);
		fin>>a;
		PrivateProp[i]->setprice(a);
		fin.ignore();
		fin>>a;
		PrivateProp[i]->setrent(a);
		fin.ignore();
		fin.getline(arr,50);
		PrivateProp[i]->setgroup(arr);
		cout<<*PrivateProp[i];
		system("pause");
	}

}
int dice()
{
	int r=rand()%6+1;
	return r;
}
class Game
{
 private:
   Player player1;
   Player player2;
   Property prop;
   Bank bank;
public:
   Game();
   Game(Player plr1,Player plr2, Property prp, Bank bnk);
   ~Game();
   friend ostream &operator<<(ostream &out,  Game &G)
   {
   	  out<<"player1 : "<<endl<<G.player1<<endl;
   	  out<<"player2 : "<<endl<<G.player2<<endl;
	  cout<<endl<<"Property : "<<G.prop<<endl;
	  cout<<"Bank : "<<G.bank<<endl;
	  return out;
   }
};
Game::Game()
{

}
Game::Game(Player plr1,Player plr2, Property prp, Bank bnk)
{
	player1=plr1;
	player2=plr2;
	prop=prp;
	bank=bnk;
}
Game::~Game()
{

}
int main ()
{

	Facility f(false,true,true);
	//cout<<f;
	//cout<<endl;
	Property P("Iqbal town",1000,100,"hello",20,21,20,true);
	//cout<<P;
	//cout<<endl;
	PrivateProperty Pa("faisal town",1,2,"hy",3,4,5,true,true,false,true);
	//cout<<Pa;
	Player x1("Daniyal","chuttiya",1000,0);
	Player x2("arslan","the shit guy",100,0);
	//cout<<x;
	Bank B(100000);
	B.setproperties();
	Game G(x1,x2,P,B);
	//cout<<G;
	}
