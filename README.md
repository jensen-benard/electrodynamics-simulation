# Electrodynamics Simulation


## Project Structure
- src/: Main compilable source location. Must be present for projects with compiled components that do not use submodules. In the presence of include/, also contains private headers.

- include/: Directory for public headers. May be present. May be omitted for projects that do not distinguish between private/public headers. May be omitted for projects that use submodules.

- tests/: Directory for tests.

- examples/: Directory for samples and examples.

- external/: Directory for packages/projects to be used by the project, but not edited as part of the project.

- extras/: Directory containing extra/optional submodules for the project.

- data/: Directory containing non-source code aspects of the project. This might include graphics and markup files.

- tools/: Directory containing development utilities, such as build and refactoring scripts

- docs/: Directory for project documentation.

- libs/: Directory for main project submodules.