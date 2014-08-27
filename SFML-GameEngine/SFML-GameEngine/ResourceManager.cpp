//
//  AssetManager.cpp
//  SFML-GameEngine
//
//  Created by Hayden Goldstien on 8/26/14.
//  Copyright (c) 2014 HaydenGoldstien. All rights reserved.
//

#include "ResourceManager.hpp"

template <typename Resource, typename Identifier>
void ResourceManager<Resource, Identifier>::load(Identifier id, const std::string &filenmae)
{
    std::unique_ptr<Resource> resource(new Resource());
    
    //TO-DO: Load resource from load resource
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
}