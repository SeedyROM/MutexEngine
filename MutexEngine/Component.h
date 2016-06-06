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
    virtual void initialize() {}
    virtual void update(Entity &e) { std::cout << getComponentName() << "\n"; }
    virtual void destroy() {}
    const std::string getComponentName() const;
};

class TestComponent : public Component {
    void update(Entity &e) {
        std::cout << getComponentName() << "\n";
    }
};