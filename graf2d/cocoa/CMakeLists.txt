############################################################################
# CMakeLists.txt file for building ROOT graf2d/cocoa package
# @author Pere Mato, CERN
############################################################################

ROOT_STANDARD_LIBRARY_PACKAGE(GCocoa
  HEADERS
    TGCocoa.h
    TGOSXGL.h
    TGQuartz.h
  SOURCES
    src/CocoaConstants.mm
    src/CocoaGuiTypes.mm
    src/CocoaPrivate.mm
    src/FontCache.mm
    src/MenuLoader.mm
    src/QuartzPixmap.mm
    src/QuartzWindow.mm
    src/ROOTApplicationDelegate.mm
    src/ROOTOpenGLView.mm
    src/TGCocoa.mm
    src/TGOSXGL.mm
    src/TGQuartz.mm
    src/X11Atoms.mm
    src/X11Buffer.mm
    src/X11Colors.mm
    src/X11Events.mm
    src/XLFDParser.mm
  DEPENDENCIES
    GQuartz
    Gui
  LIBRARIES
    "-framework Cocoa"
    "-framework OpenGL"
    ${FREETYPE_LIBRARIES}
)

# We know GL is deprecated on macOS. And our answer is WebGUI/Graphics.
target_compile_options(GCocoa PRIVATE -ObjC++ -Wno-deprecated-declarations)
target_include_directories(GCocoa PRIVATE ${FREETYPE_INCLUDE_DIRS})

if(NOT opengl) # special case when cocoa is enabled but not opengl (i.e. gminimal=ON)
  target_include_directories(GCocoa PRIVATE
    ${CMAKE_SOURCE_DIR}/graf3d/gl/inc
    ${CMAKE_SOURCE_DIR}/graf3d/glew/inc
  )
endif()
