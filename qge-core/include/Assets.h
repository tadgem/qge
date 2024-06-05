//
// Created by liam_ on 6/5/2024.
//

#ifndef QGE_ALL_ASSETS_H
#define QGE_ALL_ASSETS_H

#include "STL/String.h"
#include "STL/HashSet.h"
#include "Model.h"
#include "Texture.h"

namespace qge
{
    template <typename _Ty>
    struct Asset
    {
        _Ty* m_Asset;
    };

    class AssetManager
    {
    public:

        Asset<Model>    LoadModelAsset(const String& path);
        Asset<Texture>  LoadTextureAsset(const String& path);

        template<typename _Ty>
        bool        UnloadAsset(Asset<_Ty> asset)
        {
            if(p_LoadedAssets.find(asset.m_Asset) == p_LoadedAssets.end())
            {
                return false;
            }

            p_LoadedAssets.erase(asset.m_Asset);
            delete asset.m_Asset;
            return true;
        }

    protected:
        HashSet<void*> p_LoadedAssets;

    };

    Asset<Model> AssetManager::LoadModelAsset(const String &path) {
        auto* m = new Model();

        p_LoadedAssets.emplace((void*) m);
        return {m};
    }

    Asset<Texture> AssetManager::LoadTextureAsset(const String &path) {
        auto* t = new Texture();

        p_LoadedAssets.emplace(t);
        return {t};
    }
}

#endif //QGE_ALL_ASSETS_H
