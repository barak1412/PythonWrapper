default: build

mathematics_ops: ../MathematicsOps
	xcopy "..\MathematicsOps" ".\MathematicsOps" /s /e /a /i /Y

physics_ops: ../PhysicsOps
	xcopy "..\PhysicsOps" ".\PhysicsOps" /s /e /a /i /Y

my_physics.bycython.cpp:
	cython --cplus my_physics.pyx -o my_physics.bycython.cpp

BUILD_SOURCE_FILES = my_physics.bycython.cpp setup.py

BUILD_FILES=${BUILD_SOURCE_FILES}

build: ${BUILD_FILES}
	python setup.py build_ext -i

sdist: mathematics_ops physics_ops my_physics.bycython.cpp setup.py MANIFEST.in
	python setup.py sdist
