#include"WorldTransform.h"
#include"Math.h"


void WorldTransform::UpdateMatrix()
{
	matWorld_ = MakeAffineMatrix(scale_, rotation_, translation_);
}