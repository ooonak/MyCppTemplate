#include "PublicImpl.hpp"
#include "spdlog/spdlog.h"

ok::PublicImpl::PublicImpl()
{
  logger_ = spdlog::get("PublicImpl");
  if (logger_ == nullptr)
  {
    logger_ = spdlog::default_logger();
  }

  logger_->debug("{}", __PRETTY_FUNCTION__ );
}

ok::PublicImpl::~PublicImpl()
{
  logger_->debug("{}", __PRETTY_FUNCTION__ );
}

bool ok::PublicImpl::sayHello() const
{
  logger_->debug("{}", __PRETTY_FUNCTION__ );
  return true;
}
