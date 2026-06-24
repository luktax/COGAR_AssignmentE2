# generated from rosidl_generator_py/resource/_idl.py.em
# with input from go2_stair_interfaces:msg/Go2SafetyState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'foot_force'
# Member 'foot_position_body'
# Member 'foot_speed_body'
# Member 'joint_position'
# Member 'joint_velocity'
# Member 'joint_tau_est'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Go2SafetyState(type):
    """Metaclass of message 'Go2SafetyState'."""

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
            module = import_type_support('go2_stair_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'go2_stair_interfaces.msg.Go2SafetyState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__go2_safety_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__go2_safety_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__go2_safety_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__go2_safety_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__go2_safety_state

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


class Go2SafetyState(metaclass=Metaclass_Go2SafetyState):
    """Message class 'Go2SafetyState'."""

    __slots__ = [
        '_header',
        '_roll',
        '_pitch',
        '_yaw',
        '_roll_rate',
        '_pitch_rate',
        '_yaw_rate',
        '_ax',
        '_ay',
        '_az',
        '_vx',
        '_vy',
        '_vz',
        '_body_height',
        '_mode',
        '_gait_type',
        '_foot_raise_height',
        '_sport_error_code',
        '_foot_force',
        '_foot_contact',
        '_foot_position_body',
        '_foot_speed_body',
        '_joint_position',
        '_joint_velocity',
        '_joint_tau_est',
        '_sport_received',
        '_lowstate_received',
        '_sport_age_s',
        '_lowstate_age_s',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'roll': 'float',
        'pitch': 'float',
        'yaw': 'float',
        'roll_rate': 'float',
        'pitch_rate': 'float',
        'yaw_rate': 'float',
        'ax': 'float',
        'ay': 'float',
        'az': 'float',
        'vx': 'float',
        'vy': 'float',
        'vz': 'float',
        'body_height': 'float',
        'mode': 'uint8',
        'gait_type': 'uint8',
        'foot_raise_height': 'float',
        'sport_error_code': 'uint32',
        'foot_force': 'int16[4]',
        'foot_contact': 'boolean[4]',
        'foot_position_body': 'float[12]',
        'foot_speed_body': 'float[12]',
        'joint_position': 'float[12]',
        'joint_velocity': 'float[12]',
        'joint_tau_est': 'float[12]',
        'sport_received': 'boolean',
        'lowstate_received': 'boolean',
        'sport_age_s': 'float',
        'lowstate_age_s': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.yaw = kwargs.get('yaw', float())
        self.roll_rate = kwargs.get('roll_rate', float())
        self.pitch_rate = kwargs.get('pitch_rate', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.ax = kwargs.get('ax', float())
        self.ay = kwargs.get('ay', float())
        self.az = kwargs.get('az', float())
        self.vx = kwargs.get('vx', float())
        self.vy = kwargs.get('vy', float())
        self.vz = kwargs.get('vz', float())
        self.body_height = kwargs.get('body_height', float())
        self.mode = kwargs.get('mode', int())
        self.gait_type = kwargs.get('gait_type', int())
        self.foot_raise_height = kwargs.get('foot_raise_height', float())
        self.sport_error_code = kwargs.get('sport_error_code', int())
        if 'foot_force' not in kwargs:
            self.foot_force = numpy.zeros(4, dtype=numpy.int16)
        else:
            self.foot_force = kwargs.get('foot_force')
        self.foot_contact = kwargs.get(
            'foot_contact',
            [bool() for x in range(4)]
        )
        if 'foot_position_body' not in kwargs:
            self.foot_position_body = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.foot_position_body = kwargs.get('foot_position_body')
        if 'foot_speed_body' not in kwargs:
            self.foot_speed_body = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.foot_speed_body = kwargs.get('foot_speed_body')
        if 'joint_position' not in kwargs:
            self.joint_position = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.joint_position = kwargs.get('joint_position')
        if 'joint_velocity' not in kwargs:
            self.joint_velocity = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.joint_velocity = kwargs.get('joint_velocity')
        if 'joint_tau_est' not in kwargs:
            self.joint_tau_est = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.joint_tau_est = kwargs.get('joint_tau_est')
        self.sport_received = kwargs.get('sport_received', bool())
        self.lowstate_received = kwargs.get('lowstate_received', bool())
        self.sport_age_s = kwargs.get('sport_age_s', float())
        self.lowstate_age_s = kwargs.get('lowstate_age_s', float())

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
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.yaw != other.yaw:
            return False
        if self.roll_rate != other.roll_rate:
            return False
        if self.pitch_rate != other.pitch_rate:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.ax != other.ax:
            return False
        if self.ay != other.ay:
            return False
        if self.az != other.az:
            return False
        if self.vx != other.vx:
            return False
        if self.vy != other.vy:
            return False
        if self.vz != other.vz:
            return False
        if self.body_height != other.body_height:
            return False
        if self.mode != other.mode:
            return False
        if self.gait_type != other.gait_type:
            return False
        if self.foot_raise_height != other.foot_raise_height:
            return False
        if self.sport_error_code != other.sport_error_code:
            return False
        if any(self.foot_force != other.foot_force):
            return False
        if self.foot_contact != other.foot_contact:
            return False
        if any(self.foot_position_body != other.foot_position_body):
            return False
        if any(self.foot_speed_body != other.foot_speed_body):
            return False
        if any(self.joint_position != other.joint_position):
            return False
        if any(self.joint_velocity != other.joint_velocity):
            return False
        if any(self.joint_tau_est != other.joint_tau_est):
            return False
        if self.sport_received != other.sport_received:
            return False
        if self.lowstate_received != other.lowstate_received:
            return False
        if self.sport_age_s != other.sport_age_s:
            return False
        if self.lowstate_age_s != other.lowstate_age_s:
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
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value

    @builtins.property
    def roll_rate(self):
        """Message field 'roll_rate'."""
        return self._roll_rate

    @roll_rate.setter
    def roll_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll_rate = value

    @builtins.property
    def pitch_rate(self):
        """Message field 'pitch_rate'."""
        return self._pitch_rate

    @pitch_rate.setter
    def pitch_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_rate = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_rate = value

    @builtins.property
    def ax(self):
        """Message field 'ax'."""
        return self._ax

    @ax.setter
    def ax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ax' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ax' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ax = value

    @builtins.property
    def ay(self):
        """Message field 'ay'."""
        return self._ay

    @ay.setter
    def ay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ay' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ay' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ay = value

    @builtins.property
    def az(self):
        """Message field 'az'."""
        return self._az

    @az.setter
    def az(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'az' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'az' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._az = value

    @builtins.property
    def vx(self):
        """Message field 'vx'."""
        return self._vx

    @vx.setter
    def vx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vx = value

    @builtins.property
    def vy(self):
        """Message field 'vy'."""
        return self._vy

    @vy.setter
    def vy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vy = value

    @builtins.property
    def vz(self):
        """Message field 'vz'."""
        return self._vz

    @vz.setter
    def vz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vz = value

    @builtins.property
    def body_height(self):
        """Message field 'body_height'."""
        return self._body_height

    @body_height.setter
    def body_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'body_height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'body_height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._body_height = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def gait_type(self):
        """Message field 'gait_type'."""
        return self._gait_type

    @gait_type.setter
    def gait_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gait_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gait_type' field must be an unsigned integer in [0, 255]"
        self._gait_type = value

    @builtins.property
    def foot_raise_height(self):
        """Message field 'foot_raise_height'."""
        return self._foot_raise_height

    @foot_raise_height.setter
    def foot_raise_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_raise_height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'foot_raise_height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._foot_raise_height = value

    @builtins.property
    def sport_error_code(self):
        """Message field 'sport_error_code'."""
        return self._sport_error_code

    @sport_error_code.setter
    def sport_error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sport_error_code' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sport_error_code' field must be an unsigned integer in [0, 4294967295]"
        self._sport_error_code = value

    @builtins.property
    def foot_force(self):
        """Message field 'foot_force'."""
        return self._foot_force

    @foot_force.setter
    def foot_force(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'foot_force' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 4, \
                "The 'foot_force' numpy.ndarray() must have a size of 4"
            self._foot_force = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'foot_force' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-32768, 32767]"
        self._foot_force = numpy.array(value, dtype=numpy.int16)

    @builtins.property
    def foot_contact(self):
        """Message field 'foot_contact'."""
        return self._foot_contact

    @foot_contact.setter
    def foot_contact(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'foot_contact' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._foot_contact = value

    @builtins.property
    def foot_position_body(self):
        """Message field 'foot_position_body'."""
        return self._foot_position_body

    @foot_position_body.setter
    def foot_position_body(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'foot_position_body' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'foot_position_body' numpy.ndarray() must have a size of 12"
            self._foot_position_body = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'foot_position_body' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._foot_position_body = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def foot_speed_body(self):
        """Message field 'foot_speed_body'."""
        return self._foot_speed_body

    @foot_speed_body.setter
    def foot_speed_body(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'foot_speed_body' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'foot_speed_body' numpy.ndarray() must have a size of 12"
            self._foot_speed_body = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'foot_speed_body' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._foot_speed_body = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def joint_position(self):
        """Message field 'joint_position'."""
        return self._joint_position

    @joint_position.setter
    def joint_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'joint_position' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'joint_position' numpy.ndarray() must have a size of 12"
            self._joint_position = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_position' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_position = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def joint_velocity(self):
        """Message field 'joint_velocity'."""
        return self._joint_velocity

    @joint_velocity.setter
    def joint_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'joint_velocity' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'joint_velocity' numpy.ndarray() must have a size of 12"
            self._joint_velocity = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_velocity' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_velocity = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def joint_tau_est(self):
        """Message field 'joint_tau_est'."""
        return self._joint_tau_est

    @joint_tau_est.setter
    def joint_tau_est(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'joint_tau_est' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'joint_tau_est' numpy.ndarray() must have a size of 12"
            self._joint_tau_est = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_tau_est' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_tau_est = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def sport_received(self):
        """Message field 'sport_received'."""
        return self._sport_received

    @sport_received.setter
    def sport_received(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sport_received' field must be of type 'bool'"
        self._sport_received = value

    @builtins.property
    def lowstate_received(self):
        """Message field 'lowstate_received'."""
        return self._lowstate_received

    @lowstate_received.setter
    def lowstate_received(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lowstate_received' field must be of type 'bool'"
        self._lowstate_received = value

    @builtins.property
    def sport_age_s(self):
        """Message field 'sport_age_s'."""
        return self._sport_age_s

    @sport_age_s.setter
    def sport_age_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sport_age_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sport_age_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sport_age_s = value

    @builtins.property
    def lowstate_age_s(self):
        """Message field 'lowstate_age_s'."""
        return self._lowstate_age_s

    @lowstate_age_s.setter
    def lowstate_age_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lowstate_age_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lowstate_age_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lowstate_age_s = value
