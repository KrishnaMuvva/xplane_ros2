// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from xplane_interfaces:msg/UAVState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "xplane_interfaces/msg/detail/uav_state__struct.h"
#include "xplane_interfaces/msg/detail/uav_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool xplane_interfaces__msg__uav_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("xplane_interfaces.msg._uav_state.UAVState", full_classname_dest, 41) == 0);
  }
  xplane_interfaces__msg__UAVState * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lattitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "lattitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lattitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // airspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "airspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->airspeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // local_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->local_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // local_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->local_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // local_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->local_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // local_vx
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_vx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->local_vx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // local_vy
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_vy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->local_vy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // local_vz
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_vz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->local_vz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // local_ax
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_ax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->local_ax = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // local_ay
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_ay");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->local_ay = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // local_az
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_az");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->local_az = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * xplane_interfaces__msg__uav_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UAVState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("xplane_interfaces.msg._uav_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UAVState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  xplane_interfaces__msg__UAVState * ros_message = (xplane_interfaces__msg__UAVState *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lattitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lattitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lattitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // airspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->airspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->local_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->local_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->local_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_vx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->local_vx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_vx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_vy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->local_vy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_vy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_vz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->local_vz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_vz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_ax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->local_ax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_ax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_ay
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->local_ay);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_ay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_az
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->local_az);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_az", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
