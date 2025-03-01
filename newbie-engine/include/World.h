#ifndef __WORLD__
#define __WORLD__
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <SDL.h>
#include "vec3d.h"
#include "vec4.h"
#include "BZK_List.h"
#include "Space.h"
#include "SpaceManager.h"
#include "Cube.h"
#include "Camera.h"
#include "Scene.h"
#include "AssetLibrary.h"
using namespace std;

/**
@brief classe para World centraliza toda as opera��es relacionadas ao game.

*/

class World
{
public:
	World(string aWorld);
	World(vec3d pos, vec3d rot, vec3d grav);
	SpaceManager* iSpaces;
	dWorldID world;
	dJointGroupID contactGroup;
	dSpaceID topLevelSpace;
	Space* currentSpace;
	Scene* sceneNode;
	AssetLibrary* assetLib;
	void Update(float dt);
	void Draw();

private:
	string space;
	string endSpace;
	string name;
	string endName;
	string Echo;
	string cube;
	string endCube;
	string sphere;
	string endSphere;
	string size;
	string endSize;
	string position;
	string endPosition;
	string mass;
	string endMass;
	string rotation;
	string endRotation;
	string linearVel;
	string endLinearVel;
	string angularVel;
	string endAngularVel;
	string vec;
	string endVec;
	string type;
	string endType;
	string mesh;
	string endMesh;
	string path;
	string endPath;
	string material;
	string ka;
	string endKa;
	string kd;
	string endKd;
	string ks;
	string endKs;
	string ke;
	string endKe;
	string endMaterial;
	string vec4;
	string endVec4;
	string radius;
	string endRadius;
	string indexData;
	string endIndexData;
	string vertexData;
	string endVertexData;
	string uvData;
	string endUVData;
	string iniTexture;
	string endTexture;
	BZK_List<float> lstVertex;
	BZK_List<float> lstUV;
	BZK_List<int> lstInt;

	ifstream Datafile;
	float stepSize;
	void getObjectDetails();
	void getSpace();
	void getCube();
	void getMesh();
	void getSphere();
	void getTexture(Object* obj);
	void getIndexData();
	void getVertexData();
	void getUVData();
	void getMaterial(Object* obj);
	vec3d getVec();
	vec4d getVec4();
	void NextObjectProperty(Object* obj);

};
#endif