#define _USE_MATH_DEFINES
#include <math.h>
float CheckCollision(
    float PlayerPosX, float EnemyPosX, float PlayerPosY, float EnemyPosY, float PlayerRadius,
    float EnemyRadius) {
	float a = static_cast<float>(PlayerPosX - EnemyPosX);
	float b = static_cast<float>(PlayerPosY - EnemyPosY);
	float distance = sqrtf(a * a + b * b);
	return distance <= PlayerRadius + EnemyRadius;
}
float Move(
    float EnemyPosX[], float EnemyPosY[], float EnemyMovePosX[], float EnemyMovePosY[],
    float PlayerPosX, float PlayerPosY, float t, int numEnemies) {
	t += 0.01f;
	if (t >= 1) {
		t = 1.0f;
	}
	for (int i = 0; i < numEnemies; i++) {
		EnemyMovePosX[i] = (1.0f - t) * EnemyPosX[i] + t * PlayerPosX;
		EnemyMovePosY[i] = (1.0f - t) * EnemyPosY[i] + t * PlayerPosY;
	}
	return t;
}