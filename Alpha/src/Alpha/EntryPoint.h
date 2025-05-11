#pragma once
//引擎入口
//接收外部应用创建的应用实例并调用运行函数Run()

#ifdef AP_PLATFORM_WINDOWS

extern Alpha::Application* Alpha::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Alpha::CreateApplication();
	app->Run();
	delete app;
}

#endif