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
#include <memory>
#include <stdexcept>
#include <cassert>

template <typename Resource, typename Identifier>
class ResourceManager
{
public:
    void                load(Identifier id, const std::string& filename);
    
    
    const Resource&     get(Identifier id);
    
private:
    void                insertResource(Identifier id, std::unique_ptr<Resource> resource);
    std::map<Identifier, std::unique_ptr<Resource>> mResourceMap;
};

template <typename Resource, typename Identifier>
void ResourceManager<Resource, Identifier>::load(Identifier id, const std::string &filename)
{
    std::unique_ptr<Resource> resource(new Resource());
    
    if (!resource->loadFromFile(filename))
    {
        throw std::runtime_error("ResourceManager::load - failed to load " + filename);
    }
    insertResource(id, std::move(resource));
}

template <typename Resource, typename Identifier>
const Resource& ResourceManager<Resource, Identifier>::get(Identifier id)
{
    auto found = mResourceMap.find(id);
    assert (found != mResourceMap.end());
    return *found->second;
}

template <typename Resource, typename Identifier>
void ResourceManager<Resource, Identifier>::insertResource(Identifier id, std::unique_ptr<Resource> resource)
{
    auto inserted = mResourceMap.insert(std::make_pair(id, std::move(resource)));
    assert(inserted.second);
}

#endif /* defined(__SFML_GameEngine__AssetManager__) */
