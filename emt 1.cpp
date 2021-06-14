#include<iostream>
using namespace std;
class integerset
{
	int i, j;
	int x;
	bool a[100];
	
public:
	integerset(bool[]);
	~integerset();
	integerset unionofsets(integerset);
	void insertelement(int);
	void isequalto(integerset);
	void print();

private:

};

integerset::integerset(bool m[100])
{
	for (int i = 0; i < 101; i++)
	{
		a[i] = 0;
	}
}

integerset::~integerset()
{

}
integerset integerset::unionofsets(integerset n)
{
	integerset k;
	k = new integerset();
	for (int i = 0; i < 101; i++)
	{
		if (a[i]==1||n.a[i]==1)
		{
			k.insertelement(i);
		}
	}
	return k;
} 
void integerset::isequalto(integerset f)
{
	for (int i = 0; i < 101; i++)
	{
		if (a[i]!=f.a[i])
		{
			return f;

		}

	}
}
void integerset::insertelement(int z)
{
	a[z] = 1;
}