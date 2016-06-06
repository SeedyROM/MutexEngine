//
//  Entity.hpp
//  MutexEngine
//
//  Created by Zack Kollar on 6/5/16.
//  Copyright © 2016 Mutex12. All rights reserved.
//

#pragma once

#include "Component.h"

class Entity {
    std::map<std::string, Component*> components;
    
public:
    Entity();
    
    void addComponent(Component* t);
    
    virtual void update();
    virtual void destroy();
};