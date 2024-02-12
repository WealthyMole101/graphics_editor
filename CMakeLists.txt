cmake_minimum_required(VERSION 3.2)

# set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})

project(graphics_editor VERSION ${PROJECT_VESRION})

# configure_file(version.h.in version.h)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(graphics_editor main.cpp
    document.h document.cpp
    graphic_primitive.h graphic_primitive.cpp
    rectangle.h rectangle.cpp
    triangle.h triangle.cpp
    square.h square.cpp
    circle.h circle.cpp
    graphic_view.h graphic_view.cpp)

if (MSVC)
    target_compile_options(graphics_editor PRIVATE
        /W4
    )
else ()
    target_compile_options(graphics_editor PRIVATE
        #-Wall -Wextra -pedantic -Werror
    )
endif()

install(TARGETS graphics_editor RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT vbespalov@astralinux.ru)

include(CPack)
