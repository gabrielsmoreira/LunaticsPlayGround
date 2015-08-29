#ifndef __SINGLETON__
#define __SINGLETON__

#include <ode/ode.h>
#include "ObjectManager.h"
#include "Camera.h"

class Singleton
{
private:

    Singleton() {}

public:
    static Singleton *instance;
    dWorldID world;
    dSpaceID space;
    ObjectManager rootSceneNode;
    Camera rootCamera;
    dJointGroupID contactGroup;

    // Fun��o-membro que retorna sempre a mesma inst�ncia do objeto
    static Singleton& getInstance()
    {
        if (!instance) instance = new Singleton();
        return *instance;
    }


};


#endif // __SINGLETON__
