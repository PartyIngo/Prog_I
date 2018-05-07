#pragma once
enum class States 
{
	Start,
	SplashScreen,
	MainMenu,
	End,

};

class state
{
public:
	State();
	~State();

	States Update();
	void Render();
	void Init();
	void Unload();
};