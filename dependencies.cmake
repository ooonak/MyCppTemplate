macro(EnableUseFetchContent)

    include(FetchContent)

    set(FETCHCONTENT_TRY_FIND_PACKAGE_MODE ALWAYS)

    FetchContent_Declare(
        spdlog
        GIT_REPOSITORY https://github.com/gabime/spdlog.git
        GIT_TAG v1.12.0
        # OVERRIDE_FIND_PACKAGE
        # FIND_PACKAGE_ARGS
    )

    FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.14.0
        # OVERRIDE_FIND_PACKAGE
        # FIND_PACKAGE_ARGS
    )

    FetchContent_MakeAvailable(spdlog googletest)

endmacro(EnableUseFetchContent)
