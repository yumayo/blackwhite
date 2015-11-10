#include "../Top/Top.h"
////小松っさん、吉雄
//ここではブロック一個がどんな動きをするのかを書く
//ブロックのギミックは７種類ある
//位置とブロックの情報はマップさんから最初に全部もらえます
//
///マップにはプレイヤーのposとsizeとvecの
///情報でblockにどれだけめり込んだかを返す関数を作る


class Block 
{
public:
    Block();
    void update();
    void draw();
    void setup();

    void setPos(Vec2f _pos);
    void setStatus(BLOCK _block);

    Vec2f Collision(Object _player ,
        BLOCK _up, BLOCK _down,
        DIRECTION _direction,
        int move_vector);

private:
    BLOCK status;
    Object block;
    

    /////////////////////吉雄//変数///////////////////////



    //////////////////////小松//変数/////////////////////////



};
