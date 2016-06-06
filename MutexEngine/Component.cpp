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
    std::string frameName = typeid(*this).name();
    // If specific GCC versions remove stack/frame value from className
    frameName.erase(std::remove_if(frameName.begin(), frameName.end(), &isdigit), frameName.end());
    return frameName;
}