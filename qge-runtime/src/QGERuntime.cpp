#include "QGEProgram.h"
#include "Assets.h"
int main()
{
    qge::Program prog;
    qge::AssetManager am;

    qge::Asset<qge::Model> model = am.LoadModelAsset("Fuck");

    bool isFree = am.UnloadAsset(model);

    prog.Start();
}