//
//  Entity.cpp
//  MutexEngine
//
//  Created by Zack Kollar on 6/5/16.
//  Copyright © 2016 Mutex12. All rights reserved.
//

#include "Entity.h"

Entity::Entity() {
    addComponent(new Component());
    addComponent(new TestComponent());
}

void Entity::addComponent(Component *t) {
    components.insert(std::pair<std::string, Component*>(t->getComponentName(), t));
}

void Entity::update() {
    for (auto component=components.begin(); component!=components.end(); ++component) {
        component->second->update(*this);
    }
}

void Entity::destroy() {
    
}