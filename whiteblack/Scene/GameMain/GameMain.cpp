#include "GameMain.h"




GameMain::GameMain(){
    //setup();
}
void GameMain::update(){
    player.update();
    map.update();
    player.addPos(map.isHitPlayerToBlock(player.getObject(),player.getCondition()));

    std::cout << player.getObject().vec << std::endl;
}
void GameMain::draw(){
    env.bgColor(Color::blue);
    glPushMatrix();
    glTranslated(-player.getObject().pos.x(), -player.getObject().pos.y(),0);
    map.draw();
    map.selected(player.getSelect());
    glPopMatrix();

    player.draw();
}

void GameMain::setup(){
    map.setup(1);


    player.setup(map.getPlayerStartPos());
    //player.setPos(map.getPlayerStartPos());


}

SCENE GameMain::shift(){
    if (env.isPushKey(GLFW_KEY_ENTER)){
        return SCENE::STAGESELECT;
    }
    return SCENE::GAME;
}

