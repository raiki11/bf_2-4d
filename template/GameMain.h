#pragma once
#include "AbstractScene.h"
#include "DxLib.h"

// �V�[���}�l�[�W���[�N���X
// �e�V�[���̐؂�ւ����Ǘ�����

class GameMain :
    public AbstractScene
{

public:

    // �R���X�g���N�^
    GameMain();

    //�f�X�g���N�^
    ~GameMain();

    //�`��ȊO�̍X�V�����s
    AbstractScene* Update() override;

    //�`��Ɋւ��邱�Ƃ�����
    void Draw() const override;
private:
    //�Q�[�����C���Ŏg���ϐ��̐錾
};