#include "MyCppTemplate/Public.hpp"
#include "PublicImpl.hpp"

ok::Public::Public() : impl_{std::make_unique<PublicImpl>()}
{

}

ok::Public::~Public()
{

}

bool ok::Public::sayHello() const
{
  return impl_->sayHello();
}
