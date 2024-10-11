#pragma once
#include "22F-3274_22F-3327_Viktor.h"
#include "22F-3274_22F-3327_Viktor.cpp"
bool isNum(char c); //checks if a character is a number (0  to 9)
int StringToInt(std::string str); //takes a string and converts it into an integer
float StringToFloat(std::string str); //takes a string and converts it into a floating point number
bool isValidCNIC(std::string s); //takes a string and checks if the string follows a valid CNIC format
bool isValidName(std::string s); //checks if the string is a name (contains only alphabets)
bool isNull(std::string s); //checks if a string contains anything other than whitespaces
bool isInt(std::string s); //checks if a string can be turned into an integer
std::string IntToString(int x); //turns an integer into a string
std::string FloatToString(float x); //turns a float into a string
bool ContainsSpaces(std::string s); //checks if a non-null string contains any spaces
#pragma region Vehicle Model Class
//small struct for vehicle model
struct VclModel {
public:
	std::string Company; 
	std::string Model;
	int Year;
	VclModel(std::string Company, std::string Model, int year);
	VclModel();
};
#pragma endregion
#pragma region Account Class
//Account class, contains basic data like account name, cnic balance and password
class Account {
protected:
	std::string FirstName;
	std::string LastName;
	std::string password;
	std::string CNIC;
	int balance;
public:
	std::string getID();
	void setID(std::string Fname, std::string Lname, std::string ID);
	std::string getPass();
	std::string getFName();
	std::string getLName();
	int getbal();
	void addbal(int x);
	void deductbal(int x);
};
#pragma endregion
#pragma region Order Class
//Order class, tracks the cnic of driver, customer and some other data such as timestamps of placement and completion times
class Order {
protected:
	int PlacedOn;
	int CompletedOn;
	int cost;
	std::string type;
	int OrderID;
	std::string customerID;
	std::string driverID;
	int vehicleID;
	bool Accepted;
	bool Complete;
public:
	Order(); //default constructor, needed to use vectors (Viktors as i like to call them)
	Order(std::string C_id, std::string D_id, int V_id, std::string type, int id, int placed, int completed, bool accepted, bool complete, int cost); //constructor
#pragma region Getters
	//just a whole lot of getters
	int getID();
	std::string getCID();
	std::string getDID();
	std::string getType();
	int getVID();
	int getPlaced();
	int getComplete();
	int getCost();
	bool getAccepted();
	bool getCompleted();
#pragma endregion
	void Accept(); //marks order as accepted
	void oComplete(); //marks order as completed
	void Cancel(); //marks order as completed/rejected
	friend std::ostream& operator << (std::ostream& out, const Order O); //insertion operator for easy file writing
};
#pragma endregion
//Vehice class
#pragma region Vehicle Class
//Vehicle Class
class Vehicle {
public:
	VclModel Model;
	std::string driverID;
	int vehicleID;
	float rating;
	Viktor<float> scores; //each vehicle has this vector (Viktor) of scores, its used to calculate the rating
	std::string ServiceType;
	std::string Type;
	Vehicle();
	Vehicle(std::string driverID, std::string Type, int ID, VclModel Model, std::string ServiceType); //constructor
	int getID();
	float ComputeAndReturnRating(); //calculates and returns the rating
	friend std::ostream& operator << (std::ostream& out, const Vehicle V); //insertion operator for ez writing (again)
};
#pragma endregion
#pragma region Customer Class
//Customer class, inhereted from Account. has no additional memberx
class Customer :public Account {
private:
public:
	Customer();//default constructor cuz Viktors
	Customer(std::string FName, std::string LName, std::string CNIC, std::string password, int balance); //constructor
	friend std::ostream& operator << (std::ostream& out, const Customer C); //insertiooon operatooooor
};
#pragma endregion
#pragma region Driver Class
//Driver Class, has some additional members
class Driver :public Account {
private:
	float rating;
	int experience;
	bool isFree; //tells wether the driver is free or not
public:
	Viktor<Vehicle> Vehicles; //a list of vehicles
	Viktor<float> scores; //and some scores to calculate rating
	Driver(); //default constructor
	Driver(std::string FName, std::string LName, std::string CNIC, std::string password, int balance, int exp, bool freedom); //constructor
	int getExp();
	int getFreedom();
	void removeVehicle(int x);
	float ComputeAndReturnRating();
	void setFreedom(bool x);
	friend std::ostream& operator << (std::ostream& out, const Driver D);
};
#pragma endregion
#pragma region Main TMS Class
//Transport Management System Class, essentially the core of this project. it links all the above classes together and operates the system
class TMS {
public:
	Viktor<Customer> C_Accounts; //list of customers
	Viktor<Driver> D_Accounts;//list of drivers
	Viktor<Order> Orders;//list of orders
#pragma region Tools for Saving and Loading Data
	void ClearLoadedData(); //clears all the data loaded in all the Viktors
	void ClearSavedData(); //Clears most of the txt files in Data folder
	void SaveLoadedData(); //Dumps the data from the Viktors into text files
	void LoadSavedData(); //Reads data from text files and then assigns that data to appropriate objects
#pragma endregion
#pragma region Account Tools
	void DeleteCAccount(int x); //Delete Customer account
	void DeleteDAccount(int x); //Delete Driver Account
	void MakeOrder(Customer C, Driver D, Vehicle V, std::string type, int cost); //Function for adding a new order
	void CompleteOrder(int x); //self explanatory
	void AcceptOrder(int x); //does what you expect
	void RejectOrder(int x); //same here
	void CancelOrder(int x); //and here
	void SortR(); //Sorts drivers by rating
	void SortE(); //Sorts drivers by experience
#pragma endregion
#pragma region Tools for Finding and checking Repitition
	bool isUniqueOID(int x); //checks if the order id is unique
	int FindCNIC(std::string s); //Finds a cnic in the array of customers, returns index
	int FindCNIC2(std::string s); //Finds the cnic in the list of drivers, returns index
	int FindID(std::string str, int x); //Finds the vehicle id the list of vehicles of a specific driver
	bool isUniqueCNIC(std::string s); //Checks if the CNIC is unique
	bool idUniqueLisence(int x); //Checks if the vehicle id is unique
#pragma endregion
};
#pragma endregion
template <typename T> //template functon to swap
void swap(T* v1, T* v2);