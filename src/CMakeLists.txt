set(SOURCE_FILES
  board.cpp
  field.cpp
  main.cpp
  window.cpp
)

add_executable(git_of_life
	${SOURCE_FILES}
)
target_link_libraries(git_of_life
	Qt5::Widgets
	Qt5::DBus
)
