# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xplane_interfaces:msg/UAVAutoPilot.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UAVAutoPilot(type):
    """Metaclass of message 'UAVAutoPilot'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xplane_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xplane_interfaces.msg.UAVAutoPilot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uav_auto_pilot
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uav_auto_pilot
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uav_auto_pilot
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uav_auto_pilot
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uav_auto_pilot

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UAVAutoPilot(metaclass=Metaclass_UAVAutoPilot):
    """Message class 'UAVAutoPilot'."""

    __slots__ = [
        '_heading',
        '_altitude',
        '_airspeed',
        '_vertical_velocity',
    ]

    _fields_and_field_types = {
        'heading': 'float',
        'altitude': 'float',
        'airspeed': 'float',
        'vertical_velocity': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.heading = kwargs.get('heading', float())
        self.altitude = kwargs.get('altitude', float())
        self.airspeed = kwargs.get('airspeed', float())
        self.vertical_velocity = kwargs.get('vertical_velocity', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.heading != other.heading:
            return False
        if self.altitude != other.altitude:
            return False
        if self.airspeed != other.airspeed:
            return False
        if self.vertical_velocity != other.vertical_velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'altitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._altitude = value

    @builtins.property
    def airspeed(self):
        """Message field 'airspeed'."""
        return self._airspeed

    @airspeed.setter
    def airspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'airspeed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'airspeed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._airspeed = value

    @builtins.property
    def vertical_velocity(self):
        """Message field 'vertical_velocity'."""
        return self._vertical_velocity

    @vertical_velocity.setter
    def vertical_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertical_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vertical_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vertical_velocity = value
