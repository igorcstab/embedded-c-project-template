# configures files for project versioning as a lib
configure_file(project-version/project-version.c.in project-version.c @ONLY)

add_library(
    project-version
    project-version/project-version.h
    project-version/project-version.c
)

target_include_directories(project-version PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/project-version)