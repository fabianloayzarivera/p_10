// 10_Practica10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TList.h"

int main()
{
	TList List;

	List.Push("Hello");
	List.Push("World");
	List.Push("My");
	List.Push("Name");
	List.Push("Is");
	List.Push("Fabian");

	cout << "List Size: " << List.Size()<<endl;
	cout << "List First: "<<List.First()<<endl;
	cout << "Printing list using next() " << endl;
	cout << List.Next() << endl;
	cout << List.Next() << endl;
	cout << List.Next() << endl;
	cout << List.Next() << endl;
	cout << List.Next() << endl;
	cout << List.Next() << endl;

	cout << endl;
	cout << "Poping first value: " << endl;
	cout << List.Pop() << endl;
	cout << "List Size: " << List.Size() << endl;
	cout << "List First: " << List.First() << endl;
	cout << List.Next() << endl;
	cout << List.Next() << endl;
	cout << List.Next() << endl;
	cout << List.Next() << endl;
	cout << List.Next() << endl;
	cout << "Reseting List!" << endl;
	List.Reset();
	cout << "List Size: " << List.Size() << endl;
	cout << "List First: " << List.First() << endl;
	/*TList *ptr = new TList(List);
	delete(ptr);*/
	getchar();

    return 0;
}

