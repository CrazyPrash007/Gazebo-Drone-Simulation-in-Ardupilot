#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/prashant/catkin_ws/src/iq_gnc"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/prashant/catkin_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/prashant/catkin_ws/install/lib/python3/dist-packages:/home/prashant/catkin_ws/build/iq_gnc/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/prashant/catkin_ws/build/iq_gnc" \
    "/usr/bin/python3" \
    "/home/prashant/catkin_ws/src/iq_gnc/setup.py" \
    egg_info --egg-base /home/prashant/catkin_ws/build/iq_gnc \
    build --build-base "/home/prashant/catkin_ws/build/iq_gnc" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/prashant/catkin_ws/install" --install-scripts="/home/prashant/catkin_ws/install/bin"
