# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xplane_interfaces:msg/UAVGlobalState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UAVGlobalState(type):
    """Metaclass of message 'UAVGlobalState'."""

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
                'xplane_interfaces.msg.UAVGlobalState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uav_global_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uav_global_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uav_global_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uav_global_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uav_global_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UAVGlobalState(metaclass=Metaclass_UAVGlobalState):
    """Message class 'UAVGlobalState'."""

    __slots__ = [
        '_lattitude',
        '_longitude',
        '_altitude_msl',
        '_altitude_agl',
        '_global_roll',
        '_global_pitch',
        '_global_yaw',
        '_groundspeed',
    ]

    _fields_and_field_types = {
        'lattitude': 'double',
        'longitude': 'double',
        'altitude_msl': 'double',
        'altitude_agl': 'double',
        'global_roll': 'double',
        'global_pitch': 'double',
        'global_yaw': 'double',
        'groundspeed': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lattitude = kwargs.get('lattitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.altitude_msl = kwargs.get('altitude_msl', float())
        self.altitude_agl = kwargs.get('altitude_agl', float())
        self.global_roll = kwargs.get('global_roll', float())
        self.global_pitch = kwargs.get('global_pitch', float())
        self.global_yaw = kwargs.get('global_yaw', float())
        self.groundspeed = kwargs.get('groundspeed', float())

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
        if self.lattitude != other.lattitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.altitude_msl != other.altitude_msl:
            return False
        if self.altitude_agl != other.altitude_agl:
            return False
        if self.global_roll != other.global_roll:
            return False
        if self.global_pitch != other.global_pitch:
            return False
        if self.global_yaw != other.global_yaw:
            return False
        if self.groundspeed != other.groundspeed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lattitude(self):
        """Message field 'lattitude'."""
        return self._lattitude

    @lattitude.setter
    def lattitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lattitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lattitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lattitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def altitude_msl(self):
        """Message field 'altitude_msl'."""
        return self._altitude_msl

    @altitude_msl.setter
    def altitude_msl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude_msl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude_msl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude_msl = value

    @builtins.property
    def altitude_agl(self):
        """Message field 'altitude_agl'."""
        return self._altitude_agl

    @altitude_agl.setter
    def altitude_agl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude_agl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude_agl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude_agl = value

    @builtins.property
    def global_roll(self):
        """Message field 'global_roll'."""
        return self._global_roll

    @global_roll.setter
    def global_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'global_roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'global_roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._global_roll = value

    @builtins.property
    def global_pitch(self):
        """Message field 'global_pitch'."""
        return self._global_pitch

    @global_pitch.setter
    def global_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'global_pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'global_pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._global_pitch = value

    @builtins.property
    def global_yaw(self):
        """Message field 'global_yaw'."""
        return self._global_yaw

    @global_yaw.setter
    def global_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'global_yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'global_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._global_yaw = value

    @builtins.property
    def groundspeed(self):
        """Message field 'groundspeed'."""
        return self._groundspeed

    @groundspeed.setter
    def groundspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'groundspeed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'groundspeed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._groundspeed = value
