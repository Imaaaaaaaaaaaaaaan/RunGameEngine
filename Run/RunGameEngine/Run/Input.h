#pragma once
#include "Window.h"
#include "Vector.h"
#include <glm/vec2.hpp>

class Input
{
public:
	Input(Window window);

	static bool isKeyPressed(uint16_t key);
	static bool isMouseButtonPressed(uint16_t button);
	static glm::vec2 getMousePos();
private:
	static bool m_keys[1024];
	static bool m_mouseButtons[32];
	static glm::vec2 m_mousePos;
	static GLFWwindow* m_window;

	friend static void mouse_button_callback(GLFWwindow* window, int button, int action, int mods);
	friend static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
};

