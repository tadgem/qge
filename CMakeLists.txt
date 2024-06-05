cmake_minimum_required(VERSION 3.14)
project(qge-all)

set(SDL_STATIC TRUE CACHE INTERNAL TRUE)
# remove ZERO_CHECK
set(CMAKE_SUPPRESS_REGENERATION true)
# remove INSTALL
set(CMAKE_SKIP_INSTALL_RULES true)
set(SDL2_DISABLE_SDL2MAIN       ON      CACHE BOOL "Disable SDL Entrypoint")
set(SDL2_DISABLE_INSTALL        ON      CACHE BOOL "Disable SDL Install")
set(SDL2_DISABLE_UNINSTALL      ON      CACHE BOOL "Disable SDL Uninstall")
set(BUILD_SHARED_LIBS           OFF     CACHE BOOL "Disable ASSIMP dynamic linking")
set(SKIP_PERFORMANCE_COMPARISON TRUE CACHE BOOL "Disable perf. comparison which requires boost *shudder*")

add_subdirectory(submodules/lvk/submodules/glm)
add_subdirectory(submodules/lvk/submodules/assimp)
add_subdirectory(submodules/lvk/third-party/spdlog)
add_subdirectory(submodules/lvk/third-party/sdl)
add_subdirectory(submodules/cereal)
add_subdirectory(submodules/entt)


set(ASSIMP_INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/submodules/lvk/submodules/assimp/include CACHE INTERNAL "")
set(GLM_INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/submodules/lvk/submodules/glm CACHE INTERNAL "")
set(SPDLOG_INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/submodules/lvk/third-party/spdlog/include CACHE INTERNAL "")
set(SDL_INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/submodules/lvk/third-party/sdl/include CACHE INTERNAL "")
set(ENTT_INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/submodules/entt/src CACHE INTERNAL "")
set(CEREAL_INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/submodules/cereal/include CACHE INTERNAL "")

add_subdirectory(submodules/lvk/lvk)
add_subdirectory(submodules/lvk/backends/sdl)

add_subdirectory(qge-core)
add_subdirectory(qge-runtime)
add_subdirectory(qge-editor)

set_target_properties(glm PROPERTIES FOLDER "ThirdParty/glm")
set_target_properties(sdl_headers_copy PROPERTIES FOLDER "ThirdParty/SDL")
set_target_properties(SDL2_test PROPERTIES FOLDER "ThirdParty/SDL")
set_target_properties(SDL2-static PROPERTIES FOLDER "ThirdParty/SDL")
set_target_properties(spdlog PROPERTIES FOLDER "ThirdParty/spdlog")
