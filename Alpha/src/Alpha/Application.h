#pragma once

#include "Core.h"

namespace Alpha
{

	class ALPHA_API Application
	{
	public:
		Application();
		virtual ~Application();

		//运行
		void Run();
		//创建应用实例，客户端中定义
		
	};
	Application* CreateApplication();
}