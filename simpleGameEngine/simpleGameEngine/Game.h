#pragma once
#include "Window.h"
#include "Renderer.h"
#include "Timer.h"
#include <vector>
#include "Vector2.h"
#include "Actor.h"
#include "SpriteComponent.h"
using std::vector;

class Game
{
public:
	static Game& instance()
	{
		static Game inst;
		return inst;
	}

	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;
	Game(Game&&) = delete;
	Game& operator=(Game&&) = delete;

private:
	Game(): isRunning(true), isUpdatingActors(false) {}


public:
	bool initialize();
	void loop();
	void close();
	void load();
	void unload();

	void addActor(Actor* actor);
	void removeActor(Actor* actor);

	Renderer& getRenderer() { return renderer; }


private:
	void processInput();
	void update(float dt);
	void render();
	

	Window window;
	bool isRunning;
	Renderer renderer;

	bool isUpdatingActors;
	vector<Actor*> actors;
	vector<Actor*> pendingActors;




};