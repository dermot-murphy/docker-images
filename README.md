# docker-images

# Build the images CANembed-arm-ubuntu
build

# Test the image
cd cmake-test
mkdir builds
cd builds
docker run -it -v %cd%:/data canembed-arm-ubuntu bash

# Generate the make files
cmake -G Ninja ..

# Build the files
make --build . 

# Run tests
ctest


