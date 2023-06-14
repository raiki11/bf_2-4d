#pragma once

#include "AbstractScene.h"

class Title :
    public AbstractScene

{
private:
    enum class MENU
    {
        PLAY,
        HELP,
        EXIT,
        MENU_SIZE
    };
    const char* menu_items[static_cast<int>(MENU::MENU_SIZE)] = {
      "PLAY",
      "HELP",
      "EXIT"
    };
    //���ݑI�����Ă郁�j���[
    int now_menu;
    //�t�H���g
    int font_handle;
    //����SE
    int decision_se;
    //�w�i�摜
    int background_image;
    //�搶
    int sensei_image;
    //����Ԋu����
    int input_margin;
public:
    //�R���X�g���N�^
    Title();

    //�f�X�g���N�^
    ~Title();

    //�`��ȊO�̍X�V�����s
    AbstractScene* Update() override;

    //�`��Ɋւ��邱�Ƃ�����
    void Draw() const override;
};


