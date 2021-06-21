#pragma once

class Renderer{
public:
	Renderer();
	~Renderer() = default;
	void startGame();
private:
	void clear();
	static void input(bool& bOpen);
    bool open = true;
};