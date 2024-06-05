//
// Created by liam_ on 6/5/2024.
//

#ifndef QGE_ALL_ECS_H
#define QGE_ALL_ECS_H
#include "entt/entt.hpp"

namespace qge
{
    class Scene
    {
    public:
        entt::registry m_SceneRegistry;

        struct ActiveScene
        {
            uint32_t m_SceneIndex;
            Scene*   m_Scene;
        };
    };
}

#endif //QGE_ALL_ECS_H
