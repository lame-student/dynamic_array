#include"dynamic_array.h"

dynamic_array* init()
{
	dynamic_array* m = new dynamic_array;
	m->count = 0;
	m->size = 256;
	m->data = new double[256];
	return m;
}
   
void print(dynamic_array* m)
{
	for (int i=1; i<m->count+1;i++)
	{
		cout << m->data[i-1]<< '\t';
		if (i % 5 == 0)
		{
			cout << endl;
		}
		
	}
}
void add(dynamic_array* s, double d)
{
	s->data[s->count] = d;
	s->count = s->count + 1;
	if (s->count > s->size / 2)
	{
		alloc (s);
	}
	
}

void alloc(dynamic_array* f)
{
	f->size = 2*f->size;
	double* k = new double[f->size];
	for (int i = 0; i < f->count; i++)
	{
		k[i] = f->data[i];
	}
	delete[] f->data;
	f->data = k;
}

double remove(dynamic_array* d, int k)
{
	double s;
	s=d->data[k];
	for (int i = k; i < d->count; i++)
	{
		d->data[i] = d->data[i + 1];
	}
	d->count = d->count - 1;
	return s;
}
void delete_array(dynamic_array* d)
{
	delete[] d->data;
	delete d;
}