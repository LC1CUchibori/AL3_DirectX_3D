#pragma once

#include "Matrix4x4.h"
#include "Vector3.h"

class WorldTransform {

	void UpdateMatrix();

public:
    // ローカルスケール
    Vector3 scale_ = {1, 1, 1};
    // X,Y,Z軸回りのローカル回転角
    Vector3 rotation_ = {0, 0, 0};
    // ローカル座標
    Vector3 translation_ = {0, 0, 0};
    // ローカル → ワールド変換行列
    Matrix4x4 matWorld_;
    // 親となるワールド変換へのポインタ
    const WorldTransform* parent = nullptr;

    WorldTransform() = default;
    ~WorldTransform() = default;

    /// <summary>
    /// 初期化
    /// </summary>
    void Initialize();
    /// <summary>
    /// 定数バッファ生成
    /// </summary>
    void CreateConstBuffer();
    /// <summary>
    /// マッピングする
    /// </summary>
    void Map();
    /// <summary>
    /// 行列を転送する
    /// </summary>
    void TransferMatrix();
    /// <summary>
    /// 定数バッファの取得
    /// </summary>
    
};