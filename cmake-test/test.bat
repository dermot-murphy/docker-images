rem cmake -G Ninja ..
rem cmake --build . --clean-first
rem testApp
docker run -it -v %cd%:/data test-arm astyle --version
docker run -it -v %cd%:/data test-arm arm-none-eabi-gcc --version
docker run -it -v %cd%:/data test-arm gcc --version
docker run -it -v %cd%:/data test-arm cmake --version
docker run -it -v %cd%:/data test-arm make --version
docker run -it -v %cd%:/data test-arm ninja --version
docker run -it -v %cd%:/data test-arm bash --version
