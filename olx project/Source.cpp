#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class olx
{
private:
	int choic;
public:
	olx()
	{
		choic = 0;
	}
	olx(int x)
	{
		x = choic;
	}
	virtual void list() = 0;
};
class cars :public olx
{
public:

	void list()
	{
		cout << "\t------------------------------------------------" << endl;
		cout << "\t********* [We have 5 different  cars] **********" << endl;
		cout << "\t------------------------------------------------" << endl;
		cout << "\n\t1:Name: City\n\tModel: 2012\n\tCompany: Honda\n\tHorse Power: 1300 CC\n\tPrice: 8,000" << endl;
		cout << "\n\t2:Name: Mehran\n\tModel: 2000\n\tCompany: Suzuki\n\tHorse Power: 800 CC\n\tPrice: 1,157" << endl;
		cout << "\n\t3:Name: Corolla\n\tModel: 1998\n\tCompany: Toyota\n\tHorse Power: 1800 CC\n\tPrice: 3,098" << endl;
		cout << "\n\t4:Name: Santro\n\tModel: 1890\n\tCompany: Suzuki\n\tHorse Power: 1000 CC\n\tPrice: 7,000" << endl;
		cout << "\n\t5:Name: Mira\n\tModel: 2021\n\tCompany: Daihatsu\n\tHorse Power: 1200 CC\n\tPrice: 5,500" << endl;
		cout << "\t------------------------------------------------" << endl;
	}
};
class bikes :public olx
{
public:
	void list()
	{
		cout << "\t------------------------------------------------" << endl;
		cout << "\t********* [We have 3 different  bikes] **********" << endl;
		cout << "\t------------------------------------------------" << endl;
		cout << "\n\t1:Name: 70\n\tModel: 2012\n\tCompany: Suzuki\n\tHorse Power: 500 CC\n\tPrice: 5,000" << endl;
		cout << "\n\t2:Name: Heavy Bike\n\tModel: 2000\n\tCompany: Honda\n\tHorse Power: 800 CC\n\tPrice: 9,000" << endl;
		cout << "\n\t3:Name: 250\n\tModel: 1998\n\tCompany: Suzuki\n\tHorse Power: 1100 CC\n\tPrice: 1,000" << endl;
		cout << "\t------------------------------------------------" << endl;
		
	}
};
class mobiles : public olx
{
public:
	void list()
	{
		cout << "\t------------------------------------------------" << endl;
		cout << "\t********* [We have 6 different  mobiles] **********" << endl;
		cout << "\t------------------------------------------------" << endl;
		cout << "\n\t1:Name: 3310\n\tModel: Old\n\tPrice: 80\n\n\t2:Name: iPhone\n\tModel: New\n\tPrice: 10" << endl;
		cout << "\n\t3:Name: Samsung\n\tModel: New\n\tPrice: 360\n\n\t4:Name: BlueBerry\n\tModel: New\n\tPrice: 730" << endl;
		cout << "\n\t5:Name: Q MObile\n\tModel: New\n\tPrice: 679\n\n\t6:Name: Nokia\n\tModel: Old\n\tPrice: 185" << endl;
		cout << "\t------------------------------------------------" << endl;
	}
};
class ovens :public olx
{
public:
	void list()
	{
		cout << "\t------------------------------------------------" << endl;
		cout << "\t********* [We have 4 different  ovens] **********" << endl;
		cout << "\t------------------------------------------------" << endl;
		cout << "\n\t1:Name: Baked Oven\n\tModel: 2012\n\tCompany: Toshiba\n\tPower Capacity: 500W\n\tPrice: 500" << endl;
		cout << "\n\t2:Name: Cooking Oven\n\tModel: 2010\n\tCompany: Dawlance\n\tPower Capacity: 120W\n\tPrice: 200" << endl;
		cout << "\n\t3:Name: Cooking Oven\n\tModel: 1998\n\tCompany: LG\n\tPower Capacity: 390W\n\tPrice: 150" << endl;
		cout << "\n\t1:Name: Baked Oven\n\tModel: 2022\n\tCompany: Shangrilla\n\tPower Capacity: 200W\n\tPrice: 100" << endl;
		cout << "\t------------------------------------------------" << endl;

	}
};
class washingmachine :public olx
{
public:
	void list()
	{
		cout << "\t------------------------------------------------" << endl;
		cout << "\t********* [We have 2 different Washing Machines] **********" << endl;
		cout << "\t------------------------------------------------" << endl;
		cout << "\n\t1:Name: Wash n Dryer\n\tModel: 2001\n\tCompany: Toshiba\n\tPower Capacity: 800W\n\tPrice: 670" << endl;
		cout << "\n\t2:Name: Washer_8D6\n\tModel: 2009\n\tCompany: Dawlance\n\tPower Capacity: 500W\n\tPrice: 500" << endl;
		cout << "\t------------------------------------------------" << endl;

	}
};
class add
{
private:
	string company, n,temp;
	string city, model;
	int cho, price;
	
public:
	void display()
	{
			cout << "\n\n\t================= [Posting An Add] =================\n" << endl;
			cout << "We are happy to see you Please provide some information" << endl;
			getline(cin, temp);
			cout << "Enter Your City: "; getline(cin, city);
			cout << "\n\t1.Cars\n\t2.Bikes\n\t3.Mobiles\n\t4.Ovens\n\t5.Washing Machines\n\t6.Go Back" << endl;
			cout << "Enter your choice, which product you want to sale: ";
			cin >> cho;
			if(cho==1)
			{
				getline(cin, temp);
				cout << "\nEnter your car name: "; getline(cin, n);
				cout << "Enter your car company name: "; getline(cin, company);
				cout << "Enter your car model: "; getline(cin, model);
				cout << "Enter your car price: "; cin >> price;
				
			}
			else if(cho==2)
			{
				getline(cin, temp);
				cout << "\nEnter your bike name: "; getline(cin, n);
				cout << "Enter your bike company name: "; getline(cin, company);
				cout << "Enter your bike model: "; getline(cin, model);
				cout << "Enter your bike price: "; cin >> price;
				
			}
			else if(cho==3)
			{
				getline(cin, temp);
				cout << "\nEnter your Mobile name: "; getline(cin, n);
				cout << "Enter Mobile Company: "; getline(cin, company);
				cout << "Enter your Mobile model: "; getline(cin, model);
				cout << "Enter your Mobile price: "; cin >> price;
				
			}
			else if (cho == 4)
			{
				getline(cin, temp);
				cout << "\nEnter your Oven name: "; getline(cin, n);
				cout << "Enter Oven Company: "; getline(cin, company);
				cout << "Enter your Oven model: "; getline(cin, model);
				cout << "Enter your Oven price: "; cin >> price;
				
			}
			else if (cho == 5)
			{
				getline(cin, temp);
				cout << "\nEnter your Washing Machine name: "; getline(cin, n);
				cout << "Enter Washing Machine Company: "; getline(cin, company);
				cout << "Enter your Washing Machine model: "; getline(cin, model);
				cout << "Enter your Washing Machine price: "; cin >> price;
				
			}
			else 
			{ 
				cout << "================== [Wrong Input!!] =====================\n" << endl;
				display();
			
			}
			
	}
	void display_info()
	{
		cout << "\n\t======================= [Your Add Details] =====================" << endl << endl;
		cout << "\tName: " << n << endl;
		cout << "\tCompany: " << company << endl;
		cout << "\tModel: " << model << endl;
		cout << "\tPrice: " << price <<" ruppee "<< endl;
		cout << "\n\t================== [Your Ad Was Successfully Published] ===================\n" << endl;
	}
};

bool isloggedin()
{
	string username, password, un, pw;
	cout << "Enter username: "; cin >> username;
	cout << "Enter password: "; cin >> password;
	int line = 1, flag = 0;
	ifstream fin;
	fin.open("user_data.txt");
	while (!fin.eof())
	{
		if (line % 2 != 0)
		{
			fin >> un;
		}
		else
		{
			fin >> pw;
			if (un == username && pw == password)
			{
				flag = 1;
			}
		}
		line++;
	}
	if (flag == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void login()
{
	int choice, c;
	cout << "\n**********************************************************************";
	cout << "\n\t\t\t1.REGISTER\n\t\t\t2.LOGIN\n\tEnter your choice: "; cin >> choice;
	if (choice == 1)
	{
		string username, password;
		cout << "\nSelect a username (don't make a space): "; cin >> username;
		cout << "\nSelect a password (don't make a space): "; cin >> password;
		ofstream file;
		file.open("user_data.txt", ios::app);
		file << username << "\r" << password << "\r";
		file.close();
		cout << "\n\n=========== [Please Login to continue] =============" << endl;
		login();
	}
	else if (choice == 2)
	{
		bool status = isloggedin();
		if (!status)
		{
			cout << "\n======== [FALSE LOGIN!!] ==========" << endl;
			login();
		}
		else
		{
			cout << "\n======= [SUCCESSFULLY LOGIN!!] ========" << endl;
		}
	}
	else if (choice != 1 || choice != 2)
	{
		login();
	}
	
}
int main()
{
	int ch, chc;
	char cc;
	olx* o;
	cars c;
	bikes b;
	add a;
	mobiles m;
	ovens ov;
	washingmachine w;
	cout << "\n\n\t==================== WELCOME TO OLX ==========================\n\n" << endl;
	login();
	do
	{
		
		cout << "\n\t*****************************";
		cout << "\n\t*  Press 1 to look adds     *" << endl;
		cout << "\t*  Press 2 to post an adds  *" << endl;
		cout << "\t*  Press 3 to EXIT          *" << endl;
		cout << "\t*****************************\n";
		cout << "\nEnter your choice: ";
		cin >> ch;
		if (ch == 1)
		{
			do
			{
				cout << "\n\tWhat you want to look forward on olx\n\t1.Cars\n\t2.Bikes\n\t3.Mobiles\n\t4.Ovens\n\t5.Washing Machines\n\t6.Go Back" << endl;
				cout << "\nEnter Your Choice: ";
				cin >> chc;
				switch (chc)
				{
				case 1:
				{
					o = &c;
					o->list();
					break;
				}

				case 2:
				{
					o = &b;
					o->list();
					break;
				}
				case 3:
				{
					o = &m;
					o->list();
					break;
				}
				case 4:
				{
					o = &ov;
					o->list();
					break;
				}
				case 5:
				{
					o = &w;
					o->list();
					break;
				}
				case 6:
				{
					break;
				}
				}

			} while (chc >= 1 && chc < 6);
		}
		else if (ch == 2)
		{
			a.display();
			cout << "\n\t Do you want to see your add (y/n): ";
			cin >> cc;
			if (cc == 'y')
			{
				a.display_info();
			}
		}
	} while (ch >= 1 && ch < 3);
	system("pause");
	return 0;
}