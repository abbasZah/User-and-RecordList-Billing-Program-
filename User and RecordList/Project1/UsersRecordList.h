#include"User.h"





class UserNode
{
public:
	User userData;
	UserNode *userNext;

	UserNode(User data)
	{
		this->userData.setUser(data);
		userNext = NULL;
	}
};







class UserLinkedList
{

	UserNode *userHead;

public:

	UserLinkedList()
	{
		userHead = NULL;
	}



								//ALL FUNCTIONS OF QUESTION # 2
	//======================================================================================

	void addUser(User obj)
	{
		UserNode *myNode = new UserNode(obj);


		if (userHead == NULL)
		{
			userHead = myNode;
			cout << "\n  User Inserted !";
		}
		else
		{
			myNode->userNext = userHead;
			userHead = myNode;

			cout << "\n  User Inserted !";
		}
	}

	//======================================================================================

	bool searchUserByName(string name)
	{
		bool check = false;

		transform(name.begin(), name.end(), name.begin(), ::tolower);
		string tempStr = " ";

		if (userHead == NULL)
		{
			cout << "\n  List is empty !";
		}
		else
		{
			UserNode *temp = userHead;

			do
			{

				tempStr = temp->userData.getUserName();
				transform(tempStr.begin(), tempStr.end(), tempStr.begin(), ::tolower);

				if (tempStr == name)
				{
					check = true;
					cout << "\n User Found";
				}
				temp = temp->userNext;
			} while (temp != NULL);
		}

		if (check == false)
		{
			cout << "\n User Not Found";
		}


		return check;
	}

	//======================================================================================
	bool searchUserById(int id)
	{
		bool check = false;

		if (userHead == NULL)
		{
			check = false;
		}
		else
		{
			UserNode *temp = userHead;

			do
			{

				if (temp->userData.getUserID() == id)
				{	
					check = true;
					
				}
				temp = temp->userNext;
			} while (temp != NULL);
		}


		return check;
	}
	//======================================================================================
	User getUserById(int id)
	{
		bool check = false;
		User tempUserProList;

		if (userHead == NULL)
		{
			cout << "\n  List is empty !";
		}
		else
		{
			UserNode *temp = userHead;

			do
			{


				if (temp->userData.getUserID() == id)
				{
					
					tempUserProList.setUser(temp->userData.getUserID()		, temp->userData.getUserName()
						, temp->userData.getPhNo()		, temp->userData.getPurchaseDate()		,temp->userData.getUserProList());

					check = true;
					cout << "\n User Found";
				}
				temp = temp->userNext;
			} while (temp != NULL);
		}

		if (check == false)
		{
			cout << "\n User Not Found";
		}


		return tempUserProList;
	}
	//======================================================================================
	void updateUser(int id)
	{
		bool check = false;

		if (userHead == NULL)
		{
			check = false;
			cout << "\n  List is empty !";
		}
		else
		{
			UserNode *temp = userHead;

			do
			{
				if (temp->userData.getUserID() == id)
				{
					check = true;
					cout << "\n Product Found";
					int id;
					string name, phNo;

					int dd, mm, yy;
					Date Pdate;


					cout << "\n\n\t\t\t\tEnter the User id (integers) : ";
					cin >> id;
					cout << "\t\t\t\tEnter the User name (string) : ";
					cin >> name;
					cout << "\t\t\t\tEnter the User Phone No: (string) : ";
					cin >> phNo;
					cout << "\t\t\tEnter the purchase date in [DD MM YY] format: (with space) : ";
					cin >> dd >> mm >> yy;

					Pdate.setDate(dd, mm, yy);

					User user(id, name, phNo, Pdate);

					temp->userData.setUser(user);

					cout << "\n User Updated";
				}
				temp = temp->userNext;
			} while (temp != NULL);
		}

		if (check == false)
		{
			cout << "\n Product Not Found";
		}

	}
	//======================================================================================
	void displayUserList()
	{

		if (userHead == NULL)
		{
			cout << "\n  List is empty !";
		}
		else
		{
			UserNode *temp = userHead;

			cout << "\n---------------- USER LIST------------------ ";
			do
			{
				cout << "\nUser Id : " << temp->userData.getUserID();
				cout << "\nUser Name : " << temp->userData.getUserName();
				cout << "\nUser Phone No : " << temp->userData.getPhNo();
				cout << "\npurchase date : " << temp->userData.getPurchaseDate().getDay()
				<<" "<< temp->userData.getPurchaseDate().getMonth()
				<< " " << temp->userData.getPurchaseDate().getYear();
				cout << "\n---------------- ";
				temp = temp->userNext;
			} while (temp != NULL);
		}

	}

	//======================================================================================

	void maxPriceBill()
	{
		double max = 0;
		string name;

		if (userHead == NULL)
		{
			cout << "\n  List is empty !";
			max = 0;
		}
		else
		{
			UserNode *temp = userHead;


			do
			{
				double val = temp->userData.TotalBill2();
				if (max < val)
				{
					max = val;
					name = temp->userData.getUserName();

				}

				temp = temp->userNext;
			} while (temp != NULL);

			cout << "\nMax. Bill User is : " << name << " And its Bill is " << max;
		}

		
	}

	//======================================================================================

	void removeUser(int key)
	{

		

		bool check = false;
		if (userHead == NULL)
		{
			cout << "\n List is Empty ! And value is not deleted !";
			check = false;
		}
		else
		{
			UserNode *temporary = userHead;
			UserNode *pre = NULL;

			while (temporary->userNext != NULL)
			{
				cout << "\n control reach in do whil !";
				if (temporary->userData.getUserID() == key)
				{
					pre->userNext = temporary->userNext;

					cout << "\n Node is  deleted !\n ";
					check = true;

				}


				pre = temporary;
				temporary = temporary->userNext;
			}

		}

	}



};