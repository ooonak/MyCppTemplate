#pragma once

#include <memory>
#include "spdlog/spdlog.h"

namespace ok {

class PublicImpl {
public:

  explicit PublicImpl();

  virtual ~PublicImpl();

  bool sayHello() const;

private:
  std::shared_ptr<spdlog::logger> logger_;

};

}  // namespace ok