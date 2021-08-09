cmake_minimum_required(VERSION 3.6)

set(app "kappa")

project(${app})

enable_language(C)
enable_language(ASM)
enable_testing()

# Disallow insource builds
if ( ${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR} )
    message( FATAL_ERROR “In-source builds not allowed! Create a build directory and run CMake from there. ” )
endif()

add_executable (
	${PROJECT_NAME}
)

add_executable (
	utest_${PROJECT_NAME}_app_runner
)

target_sources (

	${PROJECT_NAME}
	
        PRIVATE
	
	# Main
	src/main/main.c
	
	# Application Layer
	src/app/app_manager.c
	src/app/app_manager.h
	src/app/app_cli.c
	src/app/app_cli.h

	# API Layer
	src/api/api_manager.c
	src/api/api_manager.h
)

target_include_directories (

	${PROJECT_NAME}
	
	PUBLIC
	
	src/main
	src/app
	src/api
	src/include
)

target_sources (

	utest_${PROJECT_NAME}_app_runner
	
        PRIVATE
	
	# Main
	test/utest/app/utest_app_runner.c
	test/utest/api/mock_api_manager.c
)

target_include_directories (

	utest_${PROJECT_NAME}_app_runner
	
	PUBLIC
	
	src/include
	test/utest
	test/unity/include
)

add_test(NAME utest_kappa_app_runner COMMAND utest_kappa_app_runner)