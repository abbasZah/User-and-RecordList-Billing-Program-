
#include "UsersRecordList.h"

int main()
{
	// FOR THIS ASSIGNMENT.

	//I SPENT ALL OF MY TIME DOING THESE TWO QUETSIONS TO MAKE IT BETTER...
	//AND IT IS WORKING NOW..
	//PROGRAM IS MADE IN ~ MICROSOFT VISUAL STUDIO.


		UserLinkedList UserRecord;



	Label:

		cout << "\n|===================================================================================================================|" << endl;
		cout << "|----------------------------------------------- User Record Program -----------------------------------------------|" << endl;
		cout << "|===================================================================================================================|" << endl;


		cout << "\n\t\t|=================================================================================|" << endl;
		cout << "\t\t|-------------------------------- USER RECORD MENU -------------------------------|" << endl;
		cout << "\t\t|=================================================================================|" << endl;
		cout << "\n\t\t\t1.  Insert a User" << "\t\t\t2.  Remove a User";
		cout << "\n\t\t\t3.  Search User" << "\t\t\t\t4.  Update User";
		cout << "\n\t\t\t5.  Maximum Price Bill" << "\t\t\t6.  Display Users in Record";
		
		cout << "\n\n\t\t\t\t|============ 9.  GO TO PRODUCT MENU ============|";

		cout << "\n\n\t\t|=================================================================================|" << endl;
		int choose;
		cout << "\t\t\t\t\t\t\tChoose : ";
		cin >> choose;

		
switch (choose) 
{





	
		case 1:
		{
				
				   cout << "\n\t\t|==============================================================|" << endl;
				   cout << "\t\t|-------------- Enter the User Detail to Insert ---------------|" << endl;
				   cout << "\t\t|==============================================================|" << endl;

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
				   cout << "\t\t\t\tEnter the Purschase date in [DD MM YY] format: (with space) : ";
				   cin >> dd >> mm >> yy;

				   Pdate.setDate(dd, mm, yy);

				   User user(id, name, phNo, Pdate);

				   UserRecord.addUser(user);

				   
				   

				   break;
		}
//8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
		case 3:
		{
				  string name2;
				  cout << "\n\t\t|==============================================================|" << endl;
				  cout << "\t\t|-------------- Enter the User Detail to Search ---------------|" << endl;
				  cout << "\t\t|==============================================================|" << endl;

				  cout << "\n\n\t\t\t\tEnter the User Name (string) : ";
				  cin >> name2;

				  UserRecord.searchUserByName(name2);




				  break;
		}
//8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
		case 2:
		{

				  int id2;
				  cout << "\n\t\t|==============================================================|" << endl;
				  cout << "\t\t|-------------- Enter the User Detail to Remove ---------------|" << endl;
				  cout << "\t\t|==============================================================|" << endl;

				  cout << "\n\n\t\t\t\tEnter the User id (integer) : ";
				  cin >> id2;

				  UserRecord.removeUser(id2);




				  break;
		}
//8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
		case 4:
		{
				  int id2;
				  cout << "\n\t\t|==============================================================|" << endl;
				  cout << "\t\t|-------------- Enter the User Detail to Update ---------------|" << endl;
				  cout << "\t\t|==============================================================|" << endl;

				  cout << "\n\n\t\t\t\tEnter the User id (integer) : ";
				  cin >> id2;

				  UserRecord.updateUser(id2);




				  break;
		}
//8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
		case 6:
		{
				  
				  cout << "\n\t\t|==============================================================|" << endl;
				  cout << "\t\t|---------------- Displaying User in the Record ---------------|" << endl;
				  cout << "\t\t|==============================================================|" << endl;
				  UserRecord.displayUserList();




				  break;
		}
//8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
		case 5:
		{

				  cout << "\n\t\t|==============================================================|" << endl;
				  cout << "\t\t|------------------- Displaying MAX BILL User -----------------|" << endl;
				  cout << "\t\t|==============================================================|" << endl;
				  UserRecord.maxPriceBill();

				  //WOrking on it..


				  break;
		}

//8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
		case 9:
		{
				   int id;

				   cout << "\n\t\t|==============================================================|" << endl;
				   cout << "\t\t|------- Enter the User Detail to Enter in Product Menu -------|" << endl;
				   cout << "\t\t|==============================================================|" << endl;

				   cout << "\t\t\t\tEnter the User id (integers) : ";
				   cin >> id;

				   UserRecord.searchUserById(id);
				   
				   if (UserRecord.searchUserById(id) == true)
				   {
					   
					   User tempObj;
					   tempObj = UserRecord.getUserById(id);

				   ProLabel:
					   cout << "\n\t\t|=================================================================================|" << endl;
					   cout << "\t\t|------------------------------- PRODUCT RECORD MENU -----------------------------|" << endl;
					   cout << "\t\t|=================================================================================|" << endl;
					   cout << "\n\t\t\t1.  Insert a Product" << "\t\t\t2.  Remove a Product";
					   cout << "\n\t\t\t3.  Search Product" << "\t\t\t4.  Update Product";
					   cout << "\n\t\t\t5.  Total Price Bill" << "\t\t\t6.  Display ProductList";
					   
					   cout << "\n\n\t\t\t\t|============ 9.  GO TO USER MENU ============|";

					   cout << "\n\n\t\t|=================================================================================|" << endl;
					   int choose;
					   cout << "\t\t\t\t\t\t\tChoose : ";
					   cin >> choose;


					   switch (choose)
					   {
									   case 1:
									   {

												  cout << "\n\t\t|==============================================================|" << endl;
												  cout << "\t\t|------------ Enter the Product Detail to Insert --------------|" << endl;
												  cout << "\t\t|==============================================================|" << endl;

												  int id, qty;
												  string name, phNo;

												  float price;


												  cout << "\n\n\t\t\t\tEnter the Product id (integers) : ";
												  cin >> id;
												  cout << "\t\t\t\tEnter the Product name (string) : ";
												  cin >> name;
												  cout << "\t\t\t\tEnter the Product Price (float) : ";
												  cin >> price;
												  cout << "\t\t\t\tEnter the Product quantity (integers) : ";
												  cin >> qty;


												  Product pro(id, name, price, qty);

												  tempObj.InsertProduct2(pro);

												  break;
									   }

										   //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

									   case 2:
									   {

												  int id2;

												  cout << "\n\t\t|==============================================================|" << endl;
												  cout << "\t\t|------------ Enter the Product Detail to Remove --------------|" << endl;
												  cout << "\t\t|==============================================================|" << endl;

												  cout << "\n\n\t\t\t\tEnter the User id (integers) : ";
												  cin >> id2;


												  tempObj.RemoveProduct2(id2);
												  //Remove function is not working.... //Now, issue is solved..

												  break;
									   }

										   //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

									   case 4:
									   {

												  int id2;

												  cout << "\n\t\t|==============================================================|" << endl;
												  cout << "\t\t|------------ Enter the Product Detail to Update --------------|" << endl;
												  cout << "\t\t|==============================================================|" << endl;

												  cout << "\n\n\t\t\t\tEnter the User id (integers) : ";
												  cin >> id2;


												  tempObj.UpdateProduct2(id2);
												 

												  break;
									   }

										   //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

									   case 3:

									   {

												  string name;

												  cout << "\n\t\t|==============================================================|" << endl;
												  cout << "\t\t|------------ Enter the Product Detail to Search --------------|" << endl;
												  cout << "\t\t|==============================================================|" << endl;

												  cout << "\t\t\t\tEnter the User name (string) : ";
												  cin >> name;


												  tempObj.SearchByName2(name);

												  break;
									   }


										   //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

									   case 6:
									   {
												 cout << "\n\t\t|==============================================================|" << endl;
												 cout << "\t\t|---------------------- Display Products ----------------------|" << endl;
												 cout << "\t\t|==============================================================|" << endl;

												 tempObj.DisplayProducts2();

												 break;
									   }


										   //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

									   case 5:
									   {
												 cout << "\n\t\t|==============================================================|" << endl;
												 cout << "\t\t|---------------------- Total Price Biil ----------------------|" << endl;
												 cout << "\t\t|==============================================================|" << endl;

												 tempObj.TotalBill2();

												 break;
									   }
						   
										   //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

									   case 9:
									   {
												 goto Label;

									   }
					   }
					   goto ProLabel;
					   
					   
				   }
				   else
				   {
					   cout << "\n\n\t\t\t\tUser not found : ";
				   }
				   
			  
		}//end of case 9


//8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888

}
goto Label;




	system("pause");
	return 0;
}