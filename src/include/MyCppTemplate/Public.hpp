#pragma once

#include <memory>

namespace ok {

class PublicImpl;

class Public {
public:

  explicit Public();

  virtual ~Public();

  bool sayHello() const;

private:
  std::unique_ptr<PublicImpl> impl_;

};

}  // namespace ok