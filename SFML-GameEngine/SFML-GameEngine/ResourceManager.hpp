//
//  AssetManager.h
//  SFML-GameEngine
//
//  Created by Hayden Goldstien on 8/26/14.
//  Copyright (c) 2014 HaydenGoldstien. All rights reserved.
//

#ifndef __SFML_GameEngine__ResourceManager__
#define __SFML_GameEngine__ResourceManager__

#include <map>
#include <string>

template <typename Resource, typename Identifier>
class ResourceManager
{
public:
    void                load(Identifier id, const std::string& filenmae);
    const Resource&     get(Identifier id);
    
private:
    void                insertResource(Identifier id, std::unique_ptr<Resource> resource);
    std::map<Identifier, std::unique_ptr<Resource>> mResourceMap;
};

#endif /* defined(__SFML_GameEngine__AssetManager__) */
