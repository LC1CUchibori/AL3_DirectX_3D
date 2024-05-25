
#include "Audio.h"
#include "DirectXCommon.h"
#include "Input.h"
#include "Model.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"
#include "DebugCamera.h"

/// <summary>
/// ゲームシーン
/// </summary>
class GameScene {

public: // メンバ関数
    /// <summary>
    /// コンストクラタ
    /// </summary>
    GameScene();

    /// <summary>
    /// デストラクタ
    /// </summary>
    ~GameScene();

    /// <summary>
    /// 初期化
    /// </summary>
    void Initialize();

    /// <summary>
    /// 毎フレーム処理
    /// </summary>
    void Update();

    /// <summary>
    /// 描画
    /// </summary>
    void Draw();

private: // メンバ変数
    DirectXCommon* dxCommon = nullptr;
    Input* input = nullptr;
    Audio* audio = nullptr;

    /// <summary>
    /// ゲームシーン用
    /// </summary>

    // テクスチャハンドル
    uint32_t textureHandle = 0;
    // サウンドデータハンドル
    uint32t soundDataHandle = 0;
    // 音声再生ハンドル
    uint32t voiceHandle = 0;

    // スプライト
    Sprite* sprite = nullptr;
    // 3Dモデル
    Model* model = nullptr;
    // デバッグカメラ
    DebugCamera* debugCamera = nullptr;

    // ImGuiで値を入力する変数
    float inputFloat3[3] = { 0, 0, 0, };

    // ワールドトランスフォーム
    WorldTransform worldTransform;
    // ビュープロジェクション
    ViewProjection viewProjection_;
};