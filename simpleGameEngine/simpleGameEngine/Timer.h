#pragma once

class Timer
{
public:
	Timer();
	Timer(const Timer&) = delete;
	Timer& operator=(const Timer&) = delete;

	//comp delta time as the numb of milliseconds since alst frame
	//clamp it so debug won't think delta time is really high during breakpoints

	unsigned int computeDeltaTime();


	// wait if the game run faster than the decided fps
	void delayTime();


private:
	const static unsigned int FPS = 60;
	const static unsigned int FRAME_DELAY = 1000 / FPS;
	const unsigned int MAX_DT = 50;

	//time in milliseconds when frame starts
	unsigned int frameStart;

	//last frame start in milliseconds
	unsigned int lastFrame;

	//time it tooks to run the loop. Used to cap framerate
	unsigned int frameTime;



};