#include "../include/Shader.h"

namespace mc {

Shader::Shader(const std::string& vs_src, const std::string& fc_src) {
  unsigned int vs, fs;
  vs = glCreateShader(GL_VERTEX_SHADER);
  glShaderSource(vs, 1, &vs_src.c_str(), NULL);
  glCompileShader(vs);
  CheckCompileErrors(vs, "VERTEX");
  

}

Shader::CheckCompileErrors(unsigned int shader_id, const std::string& type) const {
  int success{};
  char info_log[1024];
  if ()
}

}