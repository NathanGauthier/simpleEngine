#pragma once
#include <map>
#include <string>
#include "Texture.h"
using std::map;
using std::string;


/*a static singleton assets class thats hosts several
functions lo load ressources. each loaded ressource is also
stored to future reference by string handles. all functions 
and ressources are static and no public constructor is defined*/

class Assets
{
public:
	static std::map<std::string, Texture> textures; //!!!!!!!!!!!!!!!!!!

	//Load a terxture from file
	static Texture loadTexture(Renderer& renderer, const string& filename, const string& name);

	//retrieves a stored texture
	static Texture& getTexture(const std::string& name);

	//properly de-allocates all loaded ressources
	static void clear();

private:
	Assets() {}
	// load a single texture from file
	static Texture loadTextureFromFile(Renderer& renderer, const string& filename);



};