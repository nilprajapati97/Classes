/*
Problem: You have an old class that doesn’t match a new interface you need.

Solution: Wrap the old class with an adapter.


*/

#include <iostream>
using namespace std;

// Old interface
class OldPrinter
{
public:
	void printOld()
	{
		cout << "Printing using OldPrinter\n";
	}
};

// Target interface
class IPrinter
{
public:
	virtual void print() = 0;
};

// Adapter
class PrinterAdapter : public IPrinter
{
	OldPrinter *oldPrinter;

public:
	PrinterAdapter(OldPrinter *p) : oldPrinter(p) {}
	void print() override { oldPrinter->printOld(); }
};

int main()
{
	OldPrinter old;
	PrinterAdapter adapter(&old);
	adapter.print(); // Output: Printing using OldPrinter
}
/*
📌 Why This is a Practical Real-World Use
Embedded products change components due to availability or cost.

The application logic must be shielded from low-level driver changes.

The Adapter allows you to plug in new hardware without refactoring your entire application.

This pattern is common in BSP (Board Support Package) design, where a HAL (Hardware Abstraction Layer) works like a giant Adapter.


*/