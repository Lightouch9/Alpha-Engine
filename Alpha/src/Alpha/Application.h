#pragma once

#include "Core.h"

namespace Alpha
{

	class ALPHA_API Application
	{
	public:
		Application();
		virtual ~Application();

		//����
		void Run();
		//����Ӧ��ʵ�����ͻ����ж���
		
	};
	Application* CreateApplication();
}