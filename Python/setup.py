from setuptools import setup, Extension
import os

def generate_sources_lst():
	sources = ["my_physics.bycython.cpp"]
	sources_dirs = ["PhysicsOps/Source/", "MathematicsOps/Source/"]
	for source_dir in sources_dirs:
		sources += [os.path.join(source_dir, f) for f in os.listdir(source_dir) if f.endswith(".cpp") or f.endswith(".c")]
	return sources

setup(
    # Information
    name = "my_physics",
    version = "1.0.0",
    author = "Barak David",
    license = "MIT",
    keywords = "Simple gravity calulator.",
    # Build instructions
    ext_modules = [Extension("my_physics",
                             sources=generate_sources_lst(),
							 include_dirs=["MathematicsOps/Includes", "PhysicsOps/Includes"],
							 language="c++")]
)