std_msgs/Header header

# Orientation from SportModeState IMU
float32 roll
float32 pitch
float32 yaw

# Angular velocity from IMU gyroscope
float32 roll_rate
float32 pitch_rate
float32 yaw_rate

# Linear acceleration from IMU
float32 ax
float32 ay
float32 az

# Body velocity from SportModeState
float32 vx
float32 vy
float32 vz

# High-level robot state
float32 body_height
uint8 mode
uint8 gait_type
float32 foot_raise_height
uint32 sport_error_code

# Foot contacts from LowState
int16[4] foot_force
bool[4] foot_contact

# Foot kinematics from SportModeState
float32[12] foot_position_body
float32[12] foot_speed_body

# Joint state from LowState, first 12 motors only
float32[12] joint_position
float32[12] joint_velocity
float32[12] joint_tau_est

# Diagnostics
bool sport_received
bool lowstate_received
float32 sport_age_s
float32 lowstate_age_s