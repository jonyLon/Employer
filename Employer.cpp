#include <iostream>
using namespace std;


//enum Type
//{
//    President, Manager, Worker
//};

class Employer abstract {
public:

    virtual void print() const = 0;
};
class President : public Employer {
public:
    President(string name) : name{name} {
    }
    virtual void print() const override {
        cout << "Employee type: "<< type << endl;
        cout << "Name: " << name << endl;
    }
private:
    string name;
    string type = "President";
};
class Manager : public Employer {
public:
    Manager(string name) : name{ name } {
    }
    virtual void print() const override {
        cout << "Employee type: " << type << endl;
        cout << "Name: " << name << endl;
    }
private:
    string name;
    string type = "Manager";
};

class Worker : public Employer {
public:
    Worker(string name) : name{ name } {
    }
    virtual void print() const override {
        cout << "Employee type: " << type << endl;
        cout << "Name: " << name << endl;
    }
private:
    string name;
    string type = "Worker";
};





int main()
{
    Employer* arr[3] = { new President("Jim"), new Manager("Devid"), new Worker("Jon") };
    for (auto i : arr) {
        i->print();
    }
}

