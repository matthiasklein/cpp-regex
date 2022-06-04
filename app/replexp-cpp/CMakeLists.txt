project(replexp-cpp LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(HEADERS
)

set(SOURCES
    main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

install(TARGETS ${PROJECT_NAME} DESTINATION .)
