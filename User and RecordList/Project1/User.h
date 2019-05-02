#ifndef USER_H
#define USER_H

#include"Product.h"
#include"Date.h"
#include"ProductLinkedList.h"

class User
{
private:
	int userID;
	string userName;
	string phNo;
	Date purchaseDate;

	ProductLinkedList UserProList;
public:
	User()
	{
		this->userID = 0;
		this->userName = "";
		this->phNo = "";

	}
	User(int userID, string userName, string phNo, Date purchaseDate)
	{
		this->userID = userID;
		this->userName = userName;
		this->phNo = phNo;
		this->purchaseDate.setDate(purchaseDate);
	}


//SETTERS


	void setUser(User obj)
	{
		this->userID = obj.getUserID();
		this->userName = obj.getUserName();
		this->phNo = obj.getPhNo();
		this->purchaseDate.setDate(obj.getPurchaseDate());
		this->UserProList.setProductLinkedList(obj.getUserProList());
	}

	void setUser(int userID, string userName, string phNo, Date purchaseDate, ProductLinkedList UserProList)
	{
		this->userID = userID;
		this->userName = userName;
		this->phNo = phNo;
		this->purchaseDate.setDate(purchaseDate);

		this->UserProList.setProductLinkedList(UserProList);
	}

	void setuserID(int userID)				{ this->userID = userID; }
	void setuserName(string userName)		{ this->userName = userName; }
	void setphNo(string phNo)				{ this->phNo = phNo; }
	void setpurchaseDate(Date purchaseDate)	{ this->purchaseDate.setDate(purchaseDate); }



//GETTERS


	int getUserID()							{ return userID; }
	string getUserName()					{ return userName; }
	string getPhNo()						{ return phNo; }
	Date getPurchaseDate()					{ return purchaseDate; }
	ProductLinkedList getUserProList()		{ return UserProList;  }



//FUNCTIONS



	void InsertProduct2(Product obj)		{ UserProList.insertProduct(obj); }
	bool SearchByName2(string name)			{ return UserProList.searchByName(name); }
	void DisplayProducts2()					{ UserProList.displayProducts(); }
	void RemoveProduct2(int key)			{ UserProList.removeProduct(key); }
	double TotalBill2()						{ return UserProList.totalBill(); }
	void UpdateProduct2(int id)				{ UserProList.updateProduct(id); }
	

};


#endif