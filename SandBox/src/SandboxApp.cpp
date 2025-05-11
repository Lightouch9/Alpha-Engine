#include<Alpha.h>

class SandBox : public Alpha::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}
};

Alpha::Application* Alpha::CreateApplication()
{
	return new SandBox();
}