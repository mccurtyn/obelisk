cmake_minimum_required(VERSION 3.10)

set(jsoncpp_DIR /home/nickmcc/vcpkg/installed/x64-linux/share/jsoncpp/)
find_package(jsoncpp CONFIG REQUIRED)
project(game)

add_executable(game
	game.cpp
	game.h
	main.cpp
	boss.cpp
	boss.h
	class.cpp
	class.h
	entity.h
	gameMiddle.cpp
	gameMiddle.h
	gameStart.cpp
	gameStart.h
	mainMenu.cpp
	mainMenu.h
	player.cpp
	player.h
	skill.h
	skillSet.cpp
	skillSet.h
	save.h
	sysdef.h
	storyReader.cpp
	storyReader.h
	cUtil.cpp
	cUtil.h
)
target_link_libraries(game PRIVATE jsoncpp_lib)

