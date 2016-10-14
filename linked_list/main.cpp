#include"dynamic_array.h"

int main()
{
	dynamic_array* t= init();
	
	for (int i = 0; i < 20; i++)
	{
		add (t,i);
	}
	print(t);
	return 0;
}