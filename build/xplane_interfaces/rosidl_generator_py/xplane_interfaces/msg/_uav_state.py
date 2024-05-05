# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xplane_interfaces:msg/UAVState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UAVState(type):
    """Metaclass of message 'UAVState'."""

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
                'xplane_interfaces.msg.UAVState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uav_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uav_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uav_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uav_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uav_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UAVState(metaclass=Metaclass_UAVState):
    """Message class 'UAVState'."""

    __slots__ = [
        '_header',
        '_lattitude',
        '_longitude',
        '_altitude',
        '_roll',
        '_pitch',
        '_heading',
        '_airspeed',
        '_local_x',
        '_local_y',
        '_local_z',
        '_local_vx',
        '_local_vy',
        '_local_vz',
        '_local_ax',
        '_local_ay',
        '_local_az',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'lattitude': 'double',
        'longitude': 'double',
        'altitude': 'double',
        'roll': 'float',
        'pitch': 'float',
        'heading': 'float',
        'airspeed': 'float',
        'local_x': 'float',
        'local_y': 'float',
        'local_z': 'float',
        'local_vx': 'float',
        'local_vy': 'float',
        'local_vz': 'float',
        'local_ax': 'float',
        'local_ay': 'float',
        'local_az': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.lattitude = kwargs.get('lattitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.altitude = kwargs.get('altitude', float())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.heading = kwargs.get('heading', float())
        self.airspeed = kwargs.get('airspeed', float())
        self.local_x = kwargs.get('local_x', float())
        self.local_y = kwargs.get('local_y', float())
        self.local_z = kwargs.get('local_z', float())
        self.local_vx = kwargs.get('local_vx', float())
        self.local_vy = kwargs.get('local_vy', float())
        self.local_vz = kwargs.get('local_vz', float())
        self.local_ax = kwargs.get('local_ax', float())
        self.local_ay = kwargs.get('local_ay', float())
        self.local_az = kwargs.get('local_az', float())

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
        if self.header != other.header:
            return False
        if self.lattitude != other.lattitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.altitude != other.altitude:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.heading != other.heading:
            return False
        if self.airspeed != other.airspeed:
            return False
        if self.local_x != other.local_x:
            return False
        if self.local_y != other.local_y:
            return False
        if self.local_z != other.local_z:
            return False
        if self.local_vx != other.local_vx:
            return False
        if self.local_vy != other.local_vy:
            return False
        if self.local_vz != other.local_vz:
            return False
        if self.local_ax != other.local_ax:
            return False
        if self.local_ay != other.local_ay:
            return False
        if self.local_az != other.local_az:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

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
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch = value

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
    def local_x(self):
        """Message field 'local_x'."""
        return self._local_x

    @local_x.setter
    def local_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'local_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'local_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._local_x = value

    @builtins.property
    def local_y(self):
        """Message field 'local_y'."""
        return self._local_y

    @local_y.setter
    def local_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'local_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'local_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._local_y = value

    @builtins.property
    def local_z(self):
        """Message field 'local_z'."""
        return self._local_z

    @local_z.setter
    def local_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'local_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'local_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._local_z = value

    @builtins.property
    def local_vx(self):
        """Message field 'local_vx'."""
        return self._local_vx

    @local_vx.setter
    def local_vx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'local_vx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'local_vx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._local_vx = value

    @builtins.property
    def local_vy(self):
        """Message field 'local_vy'."""
        return self._local_vy

    @local_vy.setter
    def local_vy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'local_vy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'local_vy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._local_vy = value

    @builtins.property
    def local_vz(self):
        """Message field 'local_vz'."""
        return self._local_vz

    @local_vz.setter
    def local_vz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'local_vz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'local_vz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._local_vz = value

    @builtins.property
    def local_ax(self):
        """Message field 'local_ax'."""
        return self._local_ax

    @local_ax.setter
    def local_ax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'local_ax' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'local_ax' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._local_ax = value

    @builtins.property
    def local_ay(self):
        """Message field 'local_ay'."""
        return self._local_ay

    @local_ay.setter
    def local_ay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'local_ay' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'local_ay' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._local_ay = value

    @builtins.property
    def local_az(self):
        """Message field 'local_az'."""
        return self._local_az

    @local_az.setter
    def local_az(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'local_az' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'local_az' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._local_az = value
