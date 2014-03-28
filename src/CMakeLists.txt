AUX_SOURCE_DIRECTORY(. SRCS)
#set(SRCS assert.c except.c)
add_library(zclib STATIC ${SRCS})