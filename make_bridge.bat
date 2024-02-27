cl.exe /std:c++17 /DZMQ_BRIDGE_EXPORTS /DWIN32 /LD zmqbridge.cpp /link /LIBPATH:"C:\php-sdk\phpmaster\vs16\x64\deps\lib" libzmq.lib
lib.exe /OUT:zmqbridge.lib zmqbridge.obj
