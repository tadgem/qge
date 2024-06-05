//
// Created by liam_ on 6/5/2024.
//

#ifndef QGE_ALL_TEXTURE_H
#define QGE_ALL_TEXTURE_H
#include <STL/String.h>

namespace qge
{
    enum class TextureMapType
    {
        Generic,
        Diffuse,
        Normal,
        Roughness,
        AO,
        Specular,
        Emissive,
        Displacement,
        Metallic,
        Height
    };


    class Texture
    {
    public:
        TextureMapType m_Type;

    protected:
        friend class AssetManager;
        friend class Model;
        static Texture Create(const String& path);
    };
}
#endif //QGE_ALL_TEXTURE_H
