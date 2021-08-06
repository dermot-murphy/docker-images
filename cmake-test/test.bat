rd /S /Q builds
docker run -it -v %cd%:/data canembed-arm-ubuntu pwd && mkdir builds && cd builds && cmake -G Ninja .. && cmake --build . && testApp
