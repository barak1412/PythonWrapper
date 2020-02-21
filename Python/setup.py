from setuptools import setup, Extension

setup(
    # Information
    name = "my_physics",
    version = "1.0.0",
    author = "Barak David",
    license = "MIT",
    keywords = "Simple gravity calulator.",
    # Build instructions
    ext_modules = [Extension("my_physics",
                             ["my_physics.bycython.cpp", "MathematicsOps/Source/mathematics_ops.cpp",
							 "MyToolBox/Source/physics.cpp", "MyToolBox/Source/CAPIPhysics.cpp"],
                             include_dirs=["MathematicsOps/Includes", "MyToolBox/Includes"],
							 language="c++")]
)