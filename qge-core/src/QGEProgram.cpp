#include "QGEProgram.h"


qge::Program::Program() {

}

void qge::Program::Start() {
    p_VK.Start(1280, 720, false);

    while(p_VK.ShouldRun())
    {
        p_VK.PreFrame();

        p_VK.PostFrame();
    }

    p_VK.Quit();
}

lvk::VulkanAPI &qge::Program::GetVK() {
    return p_VK;
}
