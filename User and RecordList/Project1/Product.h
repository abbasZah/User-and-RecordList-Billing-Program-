#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>
using namespace std;


class Product
{
private:
	int proID;
	string proName;
	float proPrice;
	int proQuantity;
public:
	Product()
	{
		this->proID = 0;
		this->proName = "";
		this->proPrice = 0;
		this->proQuantity = 0;
	}
	Product(int proID, string proName, float proPrice, int proQuantity)
	{
		this->proID = proID;
		this->proName = proName;
		this->proPrice = proPrice;
		this->proQuantity = proQuantity;
	}
	
	void setProduct(Product obj)
	{
		this->proID = obj.getProID();
		this->proName = obj.getProName();
		this->proPrice = obj.getProPrice();
		this->proQuantity = obj.getProQuantity();
	}
	
	void setProID(int proID)				{ this->proID = proID; }
	void setProName(string proName)			{ this->proName = proName; }
	void setProPrice(float proPrice)		{ this->proPrice = proPrice; }
	void setProQuantity(int proQuantity)	{ this->proQuantity = proQuantity; }

	int getProID()							{ return proID; }
	string getProName()						{ return proName; }
	float getProPrice()						{ return proPrice; }
	int getProQuantity()					{ return proQuantity; }

};


#endif