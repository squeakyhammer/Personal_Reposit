#pragma once
template <typename T>
class TemplateSample
{
public : 
	TemplateSample();
	TemplateSample(T data);
	T GetData(void);

private: 
	T template_data;

};

class anyclass
{
public:
	void anyfunction(void);
};
