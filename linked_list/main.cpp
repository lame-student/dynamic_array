#include"dynamic_array.h"

int main()
{
	dynamic_array* t= init();
	
	for (int i = 0; i < 20; i++)
	{
		add (t,i);
	}
	print(t);
	delete_array(t);

	return 0;
}