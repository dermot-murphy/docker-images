rem goto try
rem goto test
docker build --no-cache %1 -t %1
goto end
:try
docker history %1
docker images
docker run -it -v %cd%:/data %1 pwd
docker run -it -v %cd%:/data %1 astyle --version
docker run -it -v %cd%:/data %1 arm-none-eabi-gcc --version
docker run -it -v %cd%:/data %1 gcc --version
docker run -it -v %cd%:/data %1 cmake --version
docker run -it -v %cd%:/data %1 make --version
docker run -it -v %cd%:/data %1 ninja --version
docker run -it -v %cd%:/data %1 bash --version
:end
