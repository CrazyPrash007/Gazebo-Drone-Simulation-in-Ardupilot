
"use strict";

let TimesyncStatus = require('./TimesyncStatus.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let RCIn = require('./RCIn.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let GPSRTK = require('./GPSRTK.js');
let Altitude = require('./Altitude.js');
let VehicleInfo = require('./VehicleInfo.js');
let ManualControl = require('./ManualControl.js');
let CommandCode = require('./CommandCode.js');
let CellularStatus = require('./CellularStatus.js');
let DebugValue = require('./DebugValue.js');
let GPSINPUT = require('./GPSINPUT.js');
let LogData = require('./LogData.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let HomePosition = require('./HomePosition.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let TerrainReport = require('./TerrainReport.js');
let Tunnel = require('./Tunnel.js');
let MountControl = require('./MountControl.js');
let FileEntry = require('./FileEntry.js');
let LandingTarget = require('./LandingTarget.js');
let SysStatus = require('./SysStatus.js');
let RCOut = require('./RCOut.js');
let HilControls = require('./HilControls.js');
let HilSensor = require('./HilSensor.js');
let ESCStatus = require('./ESCStatus.js');
let BatteryStatus = require('./BatteryStatus.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let Vibration = require('./Vibration.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let GPSRAW = require('./GPSRAW.js');
let Param = require('./Param.js');
let RTKBaseline = require('./RTKBaseline.js');
let NavControllerOutput = require('./NavControllerOutput.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let ExtendedState = require('./ExtendedState.js');
let PositionTarget = require('./PositionTarget.js');
let RTCM = require('./RTCM.js');
let ESCTelemetryItem = require('./ESCTelemetryItem.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let Waypoint = require('./Waypoint.js');
let VFR_HUD = require('./VFR_HUD.js');
let WaypointList = require('./WaypointList.js');
let StatusText = require('./StatusText.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let CameraImageCaptured = require('./CameraImageCaptured.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let State = require('./State.js');
let Trajectory = require('./Trajectory.js');
let ESCInfo = require('./ESCInfo.js');
let WaypointReached = require('./WaypointReached.js');
let Thrust = require('./Thrust.js');
let HilGPS = require('./HilGPS.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let ActuatorControl = require('./ActuatorControl.js');
let ESCTelemetry = require('./ESCTelemetry.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let MagnetometerReporter = require('./MagnetometerReporter.js');
let Mavlink = require('./Mavlink.js');
let RadioStatus = require('./RadioStatus.js');
let ParamValue = require('./ParamValue.js');
let LogEntry = require('./LogEntry.js');

module.exports = {
  TimesyncStatus: TimesyncStatus,
  OnboardComputerStatus: OnboardComputerStatus,
  CamIMUStamp: CamIMUStamp,
  RCIn: RCIn,
  EstimatorStatus: EstimatorStatus,
  GPSRTK: GPSRTK,
  Altitude: Altitude,
  VehicleInfo: VehicleInfo,
  ManualControl: ManualControl,
  CommandCode: CommandCode,
  CellularStatus: CellularStatus,
  DebugValue: DebugValue,
  GPSINPUT: GPSINPUT,
  LogData: LogData,
  AttitudeTarget: AttitudeTarget,
  HomePosition: HomePosition,
  PlayTuneV2: PlayTuneV2,
  HilStateQuaternion: HilStateQuaternion,
  TerrainReport: TerrainReport,
  Tunnel: Tunnel,
  MountControl: MountControl,
  FileEntry: FileEntry,
  LandingTarget: LandingTarget,
  SysStatus: SysStatus,
  RCOut: RCOut,
  HilControls: HilControls,
  HilSensor: HilSensor,
  ESCStatus: ESCStatus,
  BatteryStatus: BatteryStatus,
  HilActuatorControls: HilActuatorControls,
  Vibration: Vibration,
  ESCStatusItem: ESCStatusItem,
  GPSRAW: GPSRAW,
  Param: Param,
  RTKBaseline: RTKBaseline,
  NavControllerOutput: NavControllerOutput,
  CompanionProcessStatus: CompanionProcessStatus,
  ExtendedState: ExtendedState,
  PositionTarget: PositionTarget,
  RTCM: RTCM,
  ESCTelemetryItem: ESCTelemetryItem,
  OpticalFlowRad: OpticalFlowRad,
  Waypoint: Waypoint,
  VFR_HUD: VFR_HUD,
  WaypointList: WaypointList,
  StatusText: StatusText,
  ESCInfoItem: ESCInfoItem,
  ADSBVehicle: ADSBVehicle,
  CameraImageCaptured: CameraImageCaptured,
  OverrideRCIn: OverrideRCIn,
  State: State,
  Trajectory: Trajectory,
  ESCInfo: ESCInfo,
  WaypointReached: WaypointReached,
  Thrust: Thrust,
  HilGPS: HilGPS,
  WheelOdomStamped: WheelOdomStamped,
  ActuatorControl: ActuatorControl,
  ESCTelemetry: ESCTelemetry,
  GlobalPositionTarget: GlobalPositionTarget,
  MagnetometerReporter: MagnetometerReporter,
  Mavlink: Mavlink,
  RadioStatus: RadioStatus,
  ParamValue: ParamValue,
  LogEntry: LogEntry,
};
