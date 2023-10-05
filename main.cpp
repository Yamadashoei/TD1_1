#include <math.h>
bool CheckCollision(
    float posX1, float posX2, float posY1, float posY2, float radius1, float radius2) {
	float a = static_cast<float>(posX1 - posX2);
	float b = static_cast<float>(posY1 - posY2);
	float distance = sqrtf(a * a + b * b);
	if (distance <= radius2 + radius1) {
		return true; // �nͻ���Ƥ�
	}
	return false; // �nͻ���Ƥʤ�
}
