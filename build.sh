mkdir build
cd build

# Detect ninja
if command -v ninja &>/dev/null; then
	export BUILD_CMD='ninja'
	export CMAKE_ARGS='-GNinja'	
else
	export BUILD_CMD='make'
	export CMAKE_ARGS=''
fi

cmake $CMAKE_ARGS ..
$BUILD_CMD
