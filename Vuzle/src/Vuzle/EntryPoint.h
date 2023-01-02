#pragma once

#ifdef VZ_PLATFORM_WINDOWS

extern Vuzle::Application* Vuzle::CreateApplication();

	int main(int argc, char** argv) {
		auto app = Vuzle::CreateApplication();
		app->Run();
		delete app;
	}
#endif