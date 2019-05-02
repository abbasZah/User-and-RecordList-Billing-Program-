#ifndef PRODUCTLINKEDLIST_H
#define PRODUCTLINKEDLIST_H

#include"Product.h"
#include<iostream>
#include <algorithm>
using namespace std;








class ProductNode
{
public:
	Product data;
	ProductNode *next;

	ProductNode(Product data)
	{	
		this->data.setProduct(data);
		next = NULL;
	}

};








class ProductLinkedList
{

	ProductNode *head;

public:

	ProductLinkedList()
	{
		head = NULL;
	}
	
	void setProductLinkedList(ProductLinkedList obj)
	{
		this->head = obj.head;
	}


									//ALL FUNCTIONS OF QUESTION # 1
	//======================================================================================
	void insertProduct(Product obj)
	{
		ProductNode *myNode = new ProductNode(obj);
		

		if (head == NULL)
		{
			head = myNode;
			cout << "\n  Product Inserted !";
		}
		else
		{
			myNode->next = head;
			head = myNode;

			cout << "\n  Product Inserted !";
		}
	}
	//======================================================================================
	bool searchByName(string name)
	{
		bool check = false;

		transform(name.begin(), name.end(), name.begin(), ::tolower);

		string tempStr = " ";

		if (head == NULL)
		{
			cout << "\n  List is empty !";
		}
		else
		{
			ProductNode *temp = head;

			do
			{

				tempStr = temp->data.getProName();
				transform(tempStr.begin(), tempStr.end(), tempStr.begin(), ::tolower);


				if (tempStr == name)
				{
					check = true;
					cout << "\n Product Found";
				}
				temp = temp->next;
			} while (temp != NULL);
		}

		if (check == false)
		{
			cout << "\n Product Not Found";
		}


		return check;
	}

	//======================================================================================
	void displayProducts()
	{
		
		if (head == NULL)
		{
			cout << "\n  List is empty !";
		}
		else
		{
			ProductNode *temp = head;

			cout << "\n---------------- PRODUCT LIST------------------ ";
			do
			{		
				cout << "\nProduct Id : " << temp->data.getProID();
				cout << "\nProduct Name : " << temp->data.getProName();
				cout << "\nProduct Price : " << temp->data.getProPrice();
				cout << "\nProduct Quantity : " << temp->data.getProQuantity();
				cout << "\n---------------- ";		
				temp = temp->next;
			} while (temp != NULL);
		}

	}
	//======================================================================================
	void removeProduct(int key)
	{

		//cout << "\n control reach in remPro !";

		bool check = false;
		if (head == NULL)
		{
			cout << "\n List is Empty ! And value is not deleted !";
			check = false;
		}
		else
		{
			ProductNode *temporary = head;
			ProductNode *pre = NULL;

			while (temporary->next != NULL)
			{
				//cout << "\n control reach in do whil !";
				if (temporary->data.getProID() == key)
				{
					pre->next = temporary->next;

					cout << "\n Node is  deleted !\n ";
					check = true;

				}

				
				pre = temporary;
				temporary = temporary->next;
			} 

		}
	}
	//======================================================================================
	double totalBill()
	{
		double sum = 0;
		double singleval;
		if (head == NULL)
		{
			cout << "\n  List is empty !";
			sum = 0;
		}
		else
		{
			ProductNode *temp = head;

			
			do
			{
				singleval = temp->data.getProPrice() * temp->data.getProQuantity();
				sum = sum + singleval;
				
				temp = temp->next;
			} while (temp != NULL);
		}

		cout << "\nTotal Bill is : "<<sum<<" PKR\n";
		return sum;
	}
	//======================================================================================
	void updateProduct(int id)
	{
		bool check = false;

		if (head == NULL)
		{
			check = false;
			cout << "\n  List is empty !";
		}
		else
		{
			ProductNode *temp = head;

			do
			{
				if (temp->data.getProID() == id)
				{
					check = true;
					cout << "\n Product Found";

					int ID,QTY;
					string NAME;
					float PRICE;

					cout << "\n--------------------\n";
					cout << " Enter New Product ID : "; cin >> ID;
					cout << " Enter New Product Name : "; cin >> NAME;
					cout << " Enter New Product Price : "; cin >> PRICE;
					cout << " Enter New Product Quantity : "; cin >> QTY;
					cout << "\n--------------------";

					Product obj(ID,NAME,PRICE,QTY);

					temp->data.setProduct(obj);

					cout << "\n Product Updated";
				}
				temp = temp->next;
			} while (temp != NULL);
		}

		if (check == false)
		{
			cout << "\n Product Not Found";
		}

	}
	//======================================================================================




};

#endif