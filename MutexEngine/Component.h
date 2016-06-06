//
//  Component.hpp
//  MutexEngine
//
//  Created by Zack Kollar on 6/5/16.
//  Copyright © 2016 Mutex12. All rights reserved.
//

#pragma once

class Entity;

class Component {
public:
    // Virtual functions to be overriden.
    virtual void initialize(Entity &entity) {}
    virtual void update(Entity &entity) {}
    virtual void destroy(Entity &entity) {}
    const std::string getComponentName() const;
};