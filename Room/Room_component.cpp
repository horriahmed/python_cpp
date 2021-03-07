#include <pybind11/pybind11.h>

char version[]="1.0";

char const* getVersion() {
	return version;
}

class Room 
{
    public:
        double length;
        double breadth;
        double height;  

        Room(double length,double breadth,double height):length(length),breadth(breadth),height(height){}
        ~Room(){}


        double calculateArea(){   
            return length * breadth;
        }

        double calculateVolume(){   
            return length * breadth * height;
        }

        double getLength(){
            return length;
        }

        double getBreadth(){
            return breadth;
        }

        double  getHeigh(){
            return height;
        }




};
 
namespace py = pybind11;


PYBIND11_MODULE(Room_component,greetings)
{
  greetings.doc() = "greeting_object 1.0";
  greetings.def("getVersion", &getVersion, "a function returning the version");
  
   
    py::class_<Room>(greetings, "Room", py::dynamic_attr())
        .def(py::init<double ,double, double>())
        .def("calculateArea", &Room::calculateArea)
        .def("calculateVolume", &Room::calculateVolume)
        .def("getHeigh", &Room::getHeigh)
        .def("getBreadth", &Room::getBreadth)
        .def("getLength", &Room::getLength);

		
}
