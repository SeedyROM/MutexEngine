//
//  Entity.hpp
//  MutexEngine
//
//  Created by Zack Kollar on 6/5/16.
//  Copyright © 2016 Mutex12. All rights reserved.
//

#pragma once

#include "Component.h"

//
// Entity class to utilize components and
// organize even more functionality amongst game objects.
//

class Entity {
    // Hash map to organize/compartmentalize entity functionality.
    std::map<std::string, Component*> components;
    
public:
    // Obvious default constructor definition.
    Entity();
    
    // Add a component to the map that can be easily accessed later.
    void addComponent(Component* t);
    
    // Virtual functions to be overriden by derived classes.
    virtual void update();
    virtual void destroy();
};