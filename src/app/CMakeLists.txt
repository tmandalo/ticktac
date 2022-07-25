add_executable(ticktac
    mainwindow.ui
    mainwindow.cpp
    main.cpp
)

target_link_libraries(ticktac PRIVATE Qt6::Widgets)

set_target_properties(ticktac PROPERTIES
    MACOSX_BUNDLE ON
)
