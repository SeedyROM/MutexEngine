//
//  Component.hpp
//  MutexEngine
//
//  Created by Zack Kollar on 6/5/16.
//  Copyright © 2016 Mutex12. All rights reserved.
//

#pragma once

// !IMPORTANT: Forward declartion to resolve circular dependencies.
class Entity;

//
// Component class to be used by the entity system as a way of organizing functionality!
//

class Component {
public:
    
    //
    // Virtual functions to be overriden/inherited by derived classes.
    //
    
    // Run when the component is added to an Entity object.
    virtual void initialize() {}
    
    // Run on each screen update to keep continuity and synchronize component actions.
    virtual void update(Entity &e) { std::cout << getComponentName() << "\n"; }
    
    // Run at deallocation to clean up and free memory.
    virtual void destroy() {}
    
    //
    // Constant returning function to determine class name/type.
    //
    
    // Function used to dynamically defer the derived class name.
    const std::string getComponentName() const;
};


// Debug code!

// !!!PLEASE IGNORE!!! //
class TestComponent : public Component {
    void update(Entity &e) {
        std::cout << getComponentName() << "\n";
    }
};
// !!!END IGNORE!!! //