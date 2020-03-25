#include "TemplateSample.h"
#include <iostream>
using namespace std;

template <typename T>
TemplateSample<T>::TemplateSample()
{
	cout << "basic creater called" << endl;
}

template <typename T>
TemplateSample<T>::TemplateSample(T data)
{
	template_data = data;
}

template <typename T>
T TemplateSample<T>::GetData(void)
{
	return(template_data);
}

void anyclass::anyfunction(void)
{
	std::cout << "Hello world" << std::endl;
}

template class TemplateSample<int>;
template class TemplateSample<double>;
