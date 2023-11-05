#include "MyCppTemplate/Public.hpp"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include <string>
#include <vector>
#include <exception>
#include <iostream>

void setupLogging(std::vector<spdlog::sink_ptr> &sinks, const std::vector<std::string> &loggerNames)
{
  try
  {
    auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
    console_sink->set_level(spdlog::level::debug);
    sinks.push_back(console_sink);

    for (const auto& loggerName : loggerNames)
    {
      auto logger = std::make_shared<spdlog::logger>(
          loggerName, std::begin(sinks), std::end(sinks));
      logger->set_level(spdlog::level::debug);
      spdlog::register_logger(logger);
    }

  }
  catch (const spdlog::spdlog_ex &ex)
  {
    std::cout << "Log initialization failed: " << ex.what() << std::endl;
  }
}

int main()
{
  std::vector<spdlog::sink_ptr> sinks;
  const std::vector<std::string> loggers{ "PublicImpl" };
  setupLogging(sinks, loggers);

  try {
    ok::Public p;
    p.sayHello();
  } catch (const std::exception &exc)
  {
    spdlog::error("{}", exc.what());
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
