#ifdef MC_SHADER_H
#define MC_SHADER_H

#include <glad/glad.h>
#include <glm/glm.hpp>

namespace mc{

class Shader {

public:
  Shader(const std::string& vertex_shader, const std::string& fragment_shader);
  ~Shader() = default;

  void Use();
  void SetMatrix4(GLuint location, const Matrix4& matrix) const ;
  void SetVector3(GLuint location, const Vector3& vec) const;
  void SetInteger(GLuint location, int data) const;
  void SetFloat(GLuint location, float data) const;

private:
  void Compile(const char *shader_src, const std::string& shader_type);
  void CheckCompileErrors(GLuint shader_id, const std::string& shader_type);
  GLuint shader_id_{};

}

}

#endif