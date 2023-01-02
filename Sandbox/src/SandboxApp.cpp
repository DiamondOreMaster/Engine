#include <Vuzle.h>

class Sandbox : public Vuzle::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Vuzle::Application* Vuzle::CreateApplication() {
	return new Sandbox();
}