//
//  Component.cpp
//  MutexEngine
//
//  Created by Zack Kollar on 6/5/16.
//  Copyright © 2016 Mutex12. All rights reserved.
//

#include "Component.h"

// Get unique ID for component type.
const std::string Component::getComponentName() const {
    return typeid(*this).name();
}