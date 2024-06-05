#pragma once
#include "VulkanAPI_SDL.h"
#include "ECS.h"
#include <memory>
namespace qge
{
    class Program
    {
    public:
        Program();
        void Start();

        lvk::VulkanAPI& GetVK();

    protected:
        lvk::VulkanAPI_SDL p_VK;

        std::vector<std::unique_ptr<Scene>> m_ActiveScenes;
    };
}