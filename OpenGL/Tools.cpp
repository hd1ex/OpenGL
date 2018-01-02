#include "Tools.h"


mat4 createTransformationMatrix(const vec3 translation, const vec3 rotation, const vec3 scaleValue)
{
	mat4 matrix;

	matrix *= translate(translation);

	matrix *= glm::rotate(rotation.x, vec3(1, 0, 0));
	matrix *= glm::rotate(rotation.y, vec3(0, 1, 0));
	matrix *= glm::rotate(rotation.z, vec3(0, 0, 1));

	matrix *= scale(scaleValue);

	return matrix;
}