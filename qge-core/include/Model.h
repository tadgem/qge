//
// Created by liam_ on 6/5/2024.
//

#ifndef QGE_ALL_MODEL_H
#define QGE_ALL_MODEL_H
#include "Texture.h"
#include "STL/HashMap.h"
#include "STL/String.h"
#include "STL/Vector.h"
#include "lvk/Mesh.h"

namespace qge
{
    class Model
    {
    public:

        struct ModelSubMesh
        {
            lvk::Mesh m_Mesh;
            HashMap<TextureMapType, Texture*> m_AssociatedMaps;
        };

        Vector<ModelSubMesh> m_ModelMeshes;

    protected:
        friend class AssetManager;

        static Model Create(const String& path);
    };
}

#endif //QGE_ALL_MODEL_H
