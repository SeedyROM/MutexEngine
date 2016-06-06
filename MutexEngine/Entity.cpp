//
//  Entity.cpp
//  MutexEngine
//
//  Created by Zack Kollar on 6/5/16.
//  Copyright © 2016 Mutex12. All rights reserved.
//

#include "Entity.h"

// Initialize the base Entity class/define default behaviour.
Entity::Entity() {
    // !!!DEBUG CODE!!! //
    addComponent(new Component());
    addComponent(new TestComponent());
    // !!!END DEBUG!!! //
}

// Add components to the local hash_map and allow for easy/fast iteration.
void Entity::addComponent(Component *t) {
    // Insert component into the Entity Component hash map,
    // and use the string identifier (from getComponentName) as a hash key.
    components.insert(std::pair<std::string, Component*>(t->getComponentName(), t));
}

// Runs once per loop/frame and calls each of the entity's component's update funcs.
void Entity::update() {
    for (auto component=components.begin(); component!=components.end(); ++component) {
        component->second->update(*this);
    }
}

// Used for deallocation/destruction of entity objects.
// (Mostly a pre-optimization from possibly more complex Entities)
void Entity::destroy() {
    
}