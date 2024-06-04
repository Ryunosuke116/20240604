#include"2-1bar.h"
#include"2-1foo.h"
#include<iostream>

using namespace std;

void main()
{
	Foo* pFoo;
	Bar* pBar;
	int a;

	pFoo = new Foo;
	pBar = new Bar;
	int a;

	pBar->func1(pFoo);
	pBar->func2();
	pFoo->fuga(pBar);
	pBar->func1(pFoo);
}