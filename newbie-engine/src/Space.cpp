#include "Space.h"
#include <ode/ode.h>
Space::Space(dSpaceID spc)
{
   iObjects.Erase();
   iSpace = dSimpleSpaceCreate(spc);
}

void Space::addObject(Object *o)
{
   iObjects.add(o);
}

void Space::Update()
{
   iObjects.Update();
}

void Space::Draw()
{
   iObjects.Draw();
}

int getNumberOfObjects()
{
	//TODO: Implement This
	return 0;
}
