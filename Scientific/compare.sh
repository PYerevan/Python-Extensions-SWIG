echo "Python Pure"
time bash -c 'python3 py_extractor.py natNb_y.out > /tmp/aaa'
echo
echo "Python C++ Extension"
time bash -c 'python3 c_extractor.py natNb_y.out > /tmp/aaa'
echo
echo "C++"
time bash -c './out natNb_y.out > /tmp/aaa'
