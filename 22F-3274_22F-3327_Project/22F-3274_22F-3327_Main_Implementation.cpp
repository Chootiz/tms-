#include "pch.h"
#include <fstream>
#include <vector>
#include <string>
#include "22F-3274_22F-3327_Main_Interface.h"
#pragma region Vehicle Model Class
VclModel::VclModel(std::string Company, std::string Model, int year) {
	this->Company = Company;
	this->Model = Model;
	this->Year = year;
}
VclModel::VclModel() {

}
#pragma endregion
#pragma region Account Class
std::string Account::getID() {
	return CNIC;
}
void Account::setID(std::string Fname, std::string Lname, std::string ID) {
	CNIC = ID;
	FirstName = Fname;
	LastName = Lname;
}
std::string Account::getPass() {
	return this->password;
}
std::string Account::getFName() {
	return FirstName;
}
std::string Account::getLName() {
	return LastName;
}
int Account::getbal() {
	return balance;
}
void Account::addbal(int x) {
	this->balance += x;
}
void Account::deductbal(int x) {
	this->balance -= x;
}
#pragma endregion
#pragma region Order Class
Order::Order(std::string C_id, std::string D_id, int V_id, std::string type, int id, int placed, int completed, bool accepted, bool complete, int cost) {
	this->customerID = C_id;
	this->driverID = D_id;
	this->vehicleID = V_id;
	this->type = type;
	this->OrderID = id;
	this->PlacedOn = placed;
	this->CompletedOn = completed;
	this->Accepted = accepted;
	this->Complete = complete;
	this->cost = cost;
}
Order::Order() {
	this->customerID = "";
	this->driverID = "";
	this->vehicleID = 0;
	this->type = "";
	this->OrderID = 0;
	this->PlacedOn = 0;
	this->CompletedOn = 0;
	this->Accepted = 0;
	this->Complete = 0;
	this->cost = 0;
}
#pragma region Getters
int Order::getID() {
	return this->OrderID;
}
std::string Order::getCID() {
	return this->customerID;
}
std::string Order::getDID() {
	return this->driverID;
}
std::string Order::getType() {
	return this->type;
}
int Order::getVID() {
	return this->vehicleID;
}
int Order::getPlaced() {
	return this->PlacedOn;
}
int Order::getComplete() {
	return this->CompletedOn;
}
int Order::getCost() {
	return this->cost;
}
bool Order::getAccepted() {
	return this->Accepted;
}
bool Order::getCompleted() {
	return this->Complete;
}
#pragma endregion
std::ostream& operator << (std::ostream& out, const Order O) {
	out << O.customerID << " " << O.driverID << " " << O.vehicleID << " " << O.type << " " << O.OrderID << " " << O.PlacedOn << " " << O.CompletedOn << " " << O.Accepted << " " << O.Complete << " " << O.cost;
	return out;
}
void Order::Accept() {
	this->Accepted = true;
}
void Order::Cancel() {
	this->CompletedOn = time(0);
}
void Order::oComplete() {
	this->Complete = true;
	this->CompletedOn = time(0);
}
#pragma endregion
#pragma region Vehicle Class
Vehicle::Vehicle(std::string driverID, std::string Type, int ID, VclModel Model, std::string ServiceType) {
	this->driverID = driverID;
	this->Type = Type;
	this->vehicleID = ID;
	this->Model = Model;
	this->ServiceType = ServiceType;
}
Vehicle::Vehicle() {
	this->driverID = "";
	this->Type = "";
	this->vehicleID = 0;
	this->Model.Company = "";
	this->Model.Model = "";
	this->Model.Year = 0;
	this->ServiceType = "";
}
int Vehicle::getID() {
	return this->vehicleID;
}
float Vehicle::ComputeAndReturnRating() {
	this->rating = 0;
	for (int i = 0; i < this->scores.size(); i++) {
		rating += *this->scores[i];
	}
	if (this->scores.size()) this->rating /= this->scores.size();
	int x = this->rating * 100;
	return (x / 100.0);
}
std::ostream& operator << (std::ostream& out, const Vehicle V) {
	out << V.driverID << " " << V.Type << " " << V.vehicleID << " " << V.Model.Company << " " << V.Model.Model << " " << V.Model.Year << " " << V.ServiceType;
	return out;
}
#pragma endregion
#pragma region Customer Class
Customer::Customer() {

}
Customer::Customer(std::string FName, std::string LName, std::string CNIC, std::string password, int balance) {
	this->FirstName = FName;
	this->LastName = LName;
	this->CNIC = CNIC;
	this->password = password;
	this->balance = balance;
}
std::ostream& operator << (std::ostream& out, const Customer C) {
	out << C.FirstName << " " << C.LastName << " " << C.CNIC << " " << C.password << " " << C.balance << std::endl;
	return out;
}
#pragma endregion
#pragma region Driver Class
Driver::Driver(std::string FName, std::string LName, std::string CNIC, std::string password, int balance, int exp, bool freedom) {
	this->FirstName = FName;
	this->LastName = LName;
	this->CNIC = CNIC;
	this->password = password;
	this->balance = balance;
	this->experience = exp;
	this->isFree = freedom;
}
Driver::Driver() {
	this->FirstName = "";
	this->LastName = "";
	this->CNIC = "";
	this->password = "";
	this->balance = 0;
	this->experience = 0;
	this->isFree = 0;
}
int Driver::getExp() {
	return this->experience;
}
int Driver::getFreedom() {
	return this->isFree;
}
float Driver::ComputeAndReturnRating() {
	this->rating = 0;
	for (int i = 0; i < this->scores.size(); i++) {
		rating += *(this->scores[i]);
	}
	if (this->scores.size()) rating /= this->scores.size();
	int x = rating * 100;
	return (x / 100.0);
}
void Driver::setFreedom(bool x) {
	this->isFree = x;
}
void Driver::removeVehicle(int x) {
	for (int i = x; i < this->Vehicles.size() - 1; i++) {
		*this->Vehicles[i] = *this->Vehicles[i + 1];
	}
	this->Vehicles.pop_back();
}
std::ostream& operator << (std::ostream& out, const Driver D) {
	out << D.FirstName << " " << D.LastName << " " << D.CNIC << " " << D.password << " " << D.balance << " " << D.experience << " " << D.isFree << std::endl;
	return out;
}
#pragma endregion
#pragma region Main TMS Class
#pragma region Tools for Saving and Loading Data
void TMS::ClearLoadedData() {
	int i, j, k;
	int x, y, z;
	C_Accounts.clear();
	Orders.clear();
	x = D_Accounts.size();
	for (i = 0; i < x; i++) {
		D_Accounts[i]->scores.clear();
		y = D_Accounts[i]->Vehicles.size();
		for (j = 0; j < y; j++) {
			D_Accounts[i]->Vehicles[j]->scores.clear();
		}
		D_Accounts[i]->Vehicles.clear();
	}
	D_Accounts.clear();
}
void TMS::ClearSavedData() {
	std::ofstream DataEreaser;
	DataEreaser.open("Data/Customers.txt");
	DataEreaser.close();
	DataEreaser.open("Data/Drivers.txt");
	DataEreaser.close();
	DataEreaser.open("Data/Vehicles.txt");
	DataEreaser.close();
	DataEreaser.open("Data/Ratings.txt");
	DataEreaser.close();
	DataEreaser.open("Data/VRatings.txt");
	DataEreaser.close();
	DataEreaser.open("Data/Orders");
	DataEreaser.close();
}
void TMS::SaveLoadedData() {
	std::ofstream SaveData;
	int i, j, k;
	SaveData.open("Data/Customers.txt");
	for (i = 0; i < C_Accounts.size(); i++) {
		SaveData << *C_Accounts[i];
	}
	SaveData.close();
	SaveData.open("Data/Drivers.txt");
	for (i = 0; i < D_Accounts.size(); i++) {
		SaveData << *D_Accounts[i];
	}
	SaveData.close();
	SaveData.open("Data/Ratings.txt");
	for (i = 0; i < D_Accounts.size(); i++) {
		for (j = 0; j < D_Accounts[i]->scores.size(); j++) {
			SaveData << D_Accounts[i]->getID() << " " << *(D_Accounts[i]->scores[j]) << std::endl;
		}
	}
	SaveData.close();
	SaveData.open("Data/Vehicles.txt");
	for (i = 0; i < D_Accounts.size(); i++) {
		for (j = 0; j < D_Accounts[i]->Vehicles.size(); j++) {
			SaveData << *(D_Accounts[i]->Vehicles[j]) << std::endl;
		}
	}
	SaveData.close();
	SaveData.open("Data/VRatings.txt");
	for (i = 0; i < D_Accounts.size(); i++) {
		for (j = 0; j < D_Accounts[i]->Vehicles.size(); j++) {
			for (k = 0; k < D_Accounts[i]->Vehicles[j]->scores.size(); k++) {
				SaveData << D_Accounts[i]->getID() << " " << D_Accounts[i]->Vehicles[j]->vehicleID << " " << *(D_Accounts[i]->Vehicles[j]->scores[k]) << std::endl;
			}
		}
	}
	SaveData.close();
	SaveData.open("Data/Orders.txt");
	for (i = 0; i < Orders.size(); i++) {
		SaveData << *Orders[i] << std::endl;
	}
}
void TMS::LoadSavedData() {
	ClearLoadedData();
	std::ifstream LoadData;
	std::string st1, st2, st3, st4, st5, st6, st7, st8, st9, st10;
	LoadData.open("Data/Customers.txt");
	if (LoadData.is_open()) {
		st1 = ""; st2 = ""; st3 = ""; st4 = ""; st5 = ""; st6 = ""; st7 = ""; st8 = ""; st9 = ""; st10 = "";
		while (!LoadData.eof()) {
			st1 = ""; st2 = ""; st3 = ""; st4 = ""; st5 = ""; st6 = ""; st7 = ""; st8 = ""; st9 = ""; st10 = "";
			LoadData >> st1 >> st2 >> st3 >> st4 >> st5;
			Customer temp(st1, st2, st3, st4, StringToInt(st5));
			if (st1 != "") C_Accounts.push_back(temp);
		}
		if (st1 != "" && C_Accounts.size()) C_Accounts.pop_back();
	}
	LoadData.close();
	st1 = ""; st2 = ""; st3 = ""; st4 = ""; st5 = ""; st6 = ""; st7 = ""; st8 = ""; st9 = ""; st10 = "";
	LoadData.open("Data/Drivers.txt");
	if (LoadData.is_open()) {
		while (!LoadData.eof()) {
			st1 = ""; st2 = ""; st3 = ""; st4 = ""; st5 = ""; st6 = ""; st7 = ""; st8 = ""; st9 = ""; st10 = "";
			LoadData >> st1 >> st2 >> st3 >> st4 >> st5 >> st6 >> st7;
			Driver temp(st1, st2, st3, st4, StringToInt(st5), StringToInt(st6), StringToInt(st7));
			if (st1 != "") D_Accounts.push_back(temp);
		}
		if (st1 != "" && D_Accounts.size()) D_Accounts.pop_back();
	}
	LoadData.close();
	if (D_Accounts.size() != 0) {
		st1 = ""; st2 = ""; st3 = ""; st4 = ""; st5 = ""; st6 = ""; st7 = ""; st8 = ""; st9 = ""; st10 = "";
		LoadData.open("Data/Ratings.txt");
		if (LoadData.is_open()) {
			while (!LoadData.eof()) {
				st1 = ""; st2 = ""; st3 = ""; st4 = ""; st5 = ""; st6 = ""; st7 = ""; st8 = ""; st9 = ""; st10 = "";
				LoadData >> st1 >> st2;
				if (st1 != "") D_Accounts[FindCNIC2(st1)]->scores.push_back(StringToFloat(st2));
			}
			if (st1 != "" && D_Accounts[FindCNIC2(st1)]->scores.size()) D_Accounts[FindCNIC2(st1)]->scores.pop_back();
		}
		LoadData.close();
		st1 = ""; st2 = ""; st3 = ""; st4 = ""; st5 = ""; st6 = ""; st7 = ""; st8 = ""; st9 = ""; st10 = "";
		LoadData.open("Data/Vehicles.txt");
		if (LoadData.is_open()) {
			while (!LoadData.eof()) {
				st1 = ""; st2 = ""; st3 = ""; st4 = ""; st5 = ""; st6 = ""; st7 = ""; st8 = ""; st9 = ""; st10 = "";
				LoadData >> st1 >> st2 >> st3 >> st4 >> st5 >> st6 >> st7;
				VclModel temo(st4, st5, StringToInt(st6));
				Vehicle temp(st1, st2, StringToInt(st3), temo, st7);
				if (st1 != "")
					D_Accounts[FindCNIC2(st1)]->Vehicles.push_back(temp);
			}
			if (st1 != "" && D_Accounts[FindCNIC(st1)]->Vehicles.size()) D_Accounts[FindCNIC2(st1)]->Vehicles.pop_back();
		}
		LoadData.close();
		st1 = ""; st2 = ""; st3 = ""; st4 = ""; st5 = ""; st6 = ""; st7 = ""; st8 = ""; st9 = ""; st10 = "";
		LoadData.open("Data/VRatings.txt");
		if (LoadData.is_open()) {
			while (!LoadData.eof()) {
				st1 = ""; st2 = ""; st3 = ""; st4 = ""; st5 = ""; st6 = ""; st7 = ""; st8 = ""; st9 = ""; st10 = "";
				LoadData >> st1 >> st2 >> st3;
				if (st1 != "") D_Accounts[FindCNIC2(st1)]->Vehicles[FindID(st1, StringToInt(st2))]->scores.push_back(StringToFloat(st3));
			}
			if (st1 != "" && D_Accounts[FindCNIC2(st1)]->Vehicles[FindID(st1, StringToInt(st2))]->scores.size()) D_Accounts[FindCNIC2(st1)]->Vehicles[FindID(st1, StringToInt(st2))]->scores.pop_back();
		}
		LoadData.close();
	}
	st1 = ""; st2 = ""; st3 = ""; st4 = ""; st5 = ""; st6 = ""; st7 = ""; st8 = ""; st9 = ""; st10 = "";
	LoadData.open("Data/Orders.txt");
	if (LoadData.is_open()) {
		while (!LoadData.eof()) {
			st1 = ""; st2 = ""; st3 = ""; st4 = ""; st5 = ""; st6 = ""; st7 = ""; st8 = ""; st9 = ""; st10 = "";
			LoadData >> st1 >> st2 >> st3 >> st4 >> st5 >> st6 >> st7 >> st8 >> st9 >> st10;
			Order temp(st1, st2, StringToInt(st3), st4, StringToInt(st5), StringToInt(st6), StringToInt(st7), StringToInt(st8), StringToInt(st9), StringToInt(st10));
			if (st1 != "") Orders.push_back(temp);
		}
		if (st1 != "" && Orders.size()) Orders.pop_back();
	}
	LoadData.close();
}
#pragma endregion
#pragma region Account Tools
void TMS::DeleteCAccount(int x) {
	for (int i = 0; i < Orders.size(); i++) {
		if (C_Accounts[x]->getID() == Orders[i]->getCID()) {
			CancelOrder(i);
			i = -1;
		}
	}
	for (int i = x; i < C_Accounts.size() - 1; i++) {
		*C_Accounts[i] = *C_Accounts[i + 1];
	}
	C_Accounts.pop_back();
}
void TMS::DeleteDAccount(int x) {
	for (int i = 0; i < Orders.size(); i++) {
		if (D_Accounts[x]->getID() == Orders[i]->getDID()) {
			RejectOrder(i);
			i = -1;
		}
	}
	for (int i = x; i < D_Accounts.size() - 1; i++) {
		*D_Accounts[i] = *D_Accounts[i + 1];
	}
	D_Accounts.pop_back();
}
void TMS::MakeOrder(Customer C, Driver D, Vehicle V, std::string type, int cost) {
	srand(time(0));
	int O_id = rand() % 1000000 + 1;
	while (!(isUniqueOID(O_id))) {
		int O_id = rand() % 1000000 + 1;
	}
	Order temp(C.getID(), D.getID(), V.getID(), type, O_id, time(0), 0, 0, 0, cost);
	Orders.push_back(temp);
}
void TMS::CancelOrder(int x) {
	std::ofstream Savvy;
	Savvy.open("Data/All Orders.txt", std::ios::app);
	Orders[x]->Cancel();
	Savvy << Orders[x]->getType() + " Requested by: " << C_Accounts[FindCNIC(Orders[x]->getCID())]->getFName() + " " + C_Accounts[FindCNIC(Orders[x]->getCID())]->getLName() + "%Selected Driver: " + D_Accounts[FindCNIC2(Orders[x]->getDID())]->getFName() + " " + D_Accounts[FindCNIC2(Orders[x]->getDID())]->getLName() + "%Selected Vehicle: " + D_Accounts[FindCNIC2(Orders[x]->getDID())]->Vehicles[FindID(Orders[x]->getDID(), Orders[x]->getVID())]->Model.Company + " " + D_Accounts[FindCNIC2(Orders[x]->getDID())]->Vehicles[FindID(Orders[x]->getDID(), Orders[x]->getVID())]->Model.Model + " " + IntToString(D_Accounts[FindCNIC2(Orders[x]->getDID())]->Vehicles[FindID(Orders[x]->getDID(), Orders[x]->getVID())]->Model.Year) + "%Order Cost: " + IntToString(Orders[x]->getCost()) + "%Order Cancelled\n";
	Savvy.close();
	Savvy.open("Data/Past_Services.txt", std::ios::app);
	Savvy.close();
	D_Accounts[FindCNIC2(Orders[x]->getDID())]->setFreedom(0);
	for (int i = x; i < Orders.size() - 1; i++) {
		*Orders[i] = *Orders[i + 1];
	}
	Orders.pop_back();
}
void TMS::AcceptOrder(int x) {
	for (int i = 0; i < Orders.size(); i++) {
		if (x == Orders[i]->getID()) {
			Orders[i]->Accept();
			D_Accounts[FindCNIC2(Orders[i]->getDID())]->setFreedom(1);
		}
	}
}
void TMS::RejectOrder(int x) {
	std::ofstream Savvy;
	Savvy.open("Data/All Orders.txt", std::ios::app);
	Orders[x]->Cancel();
	Savvy << Orders[x]->getType() + " Requested by: " << C_Accounts[FindCNIC(Orders[x]->getCID())]->getFName() + " " + C_Accounts[FindCNIC(Orders[x]->getCID())]->getLName() + "%Selected Driver: " + D_Accounts[FindCNIC2(Orders[x]->getDID())]->getFName() + " " + D_Accounts[FindCNIC2(Orders[x]->getDID())]->getLName() + "%Selected Vehicle: " + D_Accounts[FindCNIC2(Orders[x]->getDID())]->Vehicles[FindID(Orders[x]->getDID(), Orders[x]->getVID())]->Model.Company + " " + D_Accounts[FindCNIC2(Orders[x]->getDID())]->Vehicles[FindID(Orders[x]->getDID(), Orders[x]->getVID())]->Model.Model + " " + IntToString(D_Accounts[FindCNIC2(Orders[x]->getDID())]->Vehicles[FindID(Orders[x]->getDID(), Orders[x]->getVID())]->Model.Year) + "%Order Cost: " + IntToString(Orders[x]->getCost()) + "%Order Rejected\n";
	Savvy.close();
	Savvy.open("Data/Past_Services.txt", std::ios::app);
	Savvy << Orders[x]->getType() + " " + Orders[x]->getDID() + " " + IntToString(Orders[x]->getVID()) + " Requested*by:*" + C_Accounts[FindCNIC(Orders[x]->getCID())]->getFName() + "*" + C_Accounts[FindCNIC(Orders[x]->getCID())]->getLName() + "%Order*Status:*Rejected\n";
	Savvy.close();
	D_Accounts[FindCNIC2(Orders[x]->getDID())]->setFreedom(0);
	for (int i = x; i < Orders.size() - 1; i++) {
		*Orders[i] = *Orders[i + 1];
	}
	Orders.pop_back();
}
void TMS::CompleteOrder(int x) {
	std::ofstream Savvy;
	Savvy.open("Data/All Orders.txt", std::ios::app);
	Orders[x]->oComplete();
	Savvy << Orders[x]->getType() + " Requested by: " << C_Accounts[FindCNIC(Orders[x]->getCID())]->getFName() + " " + C_Accounts[FindCNIC(Orders[x]->getCID())]->getLName() + "%Selected Driver: " + D_Accounts[FindCNIC2(Orders[x]->getDID())]->getFName() + " " + D_Accounts[FindCNIC2(Orders[x]->getDID())]->getLName() + "%Selected Vehicle: " + D_Accounts[FindCNIC2(Orders[x]->getDID())]->Vehicles[FindID(Orders[x]->getDID(), Orders[x]->getVID())]->Model.Company + " " + D_Accounts[FindCNIC2(Orders[x]->getDID())]->Vehicles[FindID(Orders[x]->getDID(), Orders[x]->getVID())]->Model.Model + " " + IntToString(D_Accounts[FindCNIC2(Orders[x]->getDID())]->Vehicles[FindID(Orders[x]->getDID(), Orders[x]->getVID())]->Model.Year) + "%Order Cost: " + IntToString(Orders[x]->getCost()) + "%Order Completed\n";
	Savvy.close();
	Savvy.open("Data/Past_Services.txt", std::ios::app);
	Savvy << Orders[x]->getType() + " " + Orders[x]->getDID() + " " + IntToString(Orders[x]->getVID()) + " Requested*by:*" + C_Accounts[FindCNIC(Orders[x]->getCID())]->getFName() + "*" + C_Accounts[FindCNIC(Orders[x]->getCID())]->getLName() + "%Order*Status:*Completed\n";
	Savvy.close();
	for (int i = x; i < Orders.size() - 1; i++) {
		*Orders[i] = *Orders[i + 1];
	}
	Orders.pop_back();
}
void TMS::SortR() {
	int lindex = 0;
	for (int i = 0; i < this->D_Accounts.size(); i++) {
		lindex = i;
		for (int j = i; j < this->D_Accounts.size(); j++) {
			if (D_Accounts[j]->ComputeAndReturnRating() > D_Accounts[lindex]->ComputeAndReturnRating()) {
				lindex = j;
			}
		}
		swap(D_Accounts[i], D_Accounts[lindex]);
	}
}
void TMS::SortE() {
	int lindex = 0;;
	for (int i = 0; i < this->D_Accounts.size(); i++) {
		lindex = i;
		for (int j = i; j < this->D_Accounts.size(); j++) {
			if (D_Accounts[j]->getExp() > D_Accounts[lindex]->getExp()) {
				lindex = j;
			}
		}
		swap(D_Accounts[i], D_Accounts[lindex]);
	}
}
#pragma endregion
#pragma region Tools for Finding
bool TMS::isUniqueOID(int x) {
	for (int i = 0; i < Orders.size(); i++) {
		if (x == Orders[i]->getID()) {
			return 0;
		}
	}
	return 1;
}
int TMS::FindCNIC(std::string s) {
	for (int i = 0; i < C_Accounts.size(); i++) {
		if (s == C_Accounts[i]->getID()) {
			return i;
		}
	}
	return -1;
}
int TMS::FindCNIC2(std::string s) {
	for (int i = 0; i < D_Accounts.size(); i++) {
		if (s == D_Accounts[i]->getID()) {
			return i;
		}
	}
	return -1;
}
int TMS::FindID(std::string str, int x) {
	for (int i = 0; i < D_Accounts[FindCNIC2(str)]->Vehicles.size(); i++) {
		if (x == D_Accounts[FindCNIC2(str)]->Vehicles[i]->vehicleID) {
			return i;
		}
	}
}
bool TMS::isUniqueCNIC(std::string s) {
	for (int i = 0; i < C_Accounts.size(); i++) {
		if (C_Accounts[i]->getID() == s) {
			return 0;
		}
	}
	for (int i = 0; i < D_Accounts.size(); i++) {
		if (D_Accounts[i]->getID() == s) {
			return 0;
		}
	}
	return 1;
}
bool TMS::idUniqueLisence(int x) {
	for (int i = 0; i < D_Accounts.size(); i++) {
		for (int j = 0; j < D_Accounts[i]->Vehicles.size(); j++) {
			if (x == D_Accounts[i]->Vehicles[j]->getID()) {
				return 0;
			}
		}
	}
	return 1;
}
#pragma endregion
#pragma endregion
#pragma region Functions
bool isNum(char c) {
	if (c < '0' || c > '9') {
		return 0;
	}
	return 1;
}
int StringToInt(std::string str) {
	int x = 0, i;
	for (i = 0; i < str.length(); i++) {
		if (isNum(str[i])) {
			x = (x * 10) + (str[i] - '0');
		}
	}
	return x;
}
float StringToFloat(std::string str) {
	float x = 0, y = 0;
	int i;
	for (i = 0; i < str.length() && str[i] != '.'; i++) {
		if (isNum(str[i])) {
			x = (x * 10) + (str[i] - '0');
		}
	}
	for (i++; i < str.length(); i++) {
		if (isNum(str[i])) {
			y = (y * 10) + (str[i] - '0');
		}
	}
	while (y > 1) {
		y /= 10;
	}
	return x + y;
}
bool isValidCNIC(std::string s) {
	bool validity = 1;
	if (s.length() != 15) {
		return 0;
	}
	for (int i = 0; i < 15; i++) {
		if (i == 5 || i == 13) {
			if (s[i] == '-') {
				validity = 1;
			}
			else
				validity = 0;
		}
		else {
			if (!isNum(s[i])) {
				validity = 0;
			}
		}
	}
	return validity;
}
bool isValidName(std::string s) {
	for (int i = 0; i < s.length(); i++) {
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
			//do nothing
		}
		else {
			return 0;
		}
	}
	return 1;
}
bool isNull(std::string s) {
	if (s == "") {
		return 1;
	}
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ') {
			return 0;
		}
	}
	return 1;
}
bool isInt(std::string s) {
	for (int i = 0; i < s.size(); i++) {
		if (!(isNum(s[i]))) {
			return 0;
		}
	}
	return 1;
}
std::string IntToString(int x) {
	char c;
	std::string str;
	if (x == 0) {
		return "0";
	}
	while (x != 0) {
		c = '0' + x % 10;
		x /= 10;
		str = str + c;
	}
	for (int i = 0; i < str.size() / 2; i++) {
		c = str[i];
		str[i] = str[str.size() - 1 - i];
		str[str.size() - 1 - i] = c;
	}
	return str;
}
std::string FloatToString(float x) {
	int p, q;
	float t = x;
	p = x;
	t = t - p;
	q = t;
	if (t != 0) {
		while (t < 10) {
			t *= 10;
			q = t;
		}
	}
	std::string str = IntToString(p) + "." + IntToString(q);
	return str;
}
bool ContainsSpaces(std::string s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') return 1;
	}
	return 0;
}
template <typename T>
void swap(T* v1, T* v2) {
	T k;
	k = *v1;
	*v1 = *v2;
	*v2 = k;
}
#pragma endregion