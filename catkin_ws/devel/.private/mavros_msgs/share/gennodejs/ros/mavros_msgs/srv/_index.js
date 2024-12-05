
"use strict";

let WaypointPush = require('./WaypointPush.js')
let LogRequestList = require('./LogRequestList.js')
let SetMavFrame = require('./SetMavFrame.js')
let CommandHome = require('./CommandHome.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let FileRead = require('./FileRead.js')
let FileTruncate = require('./FileTruncate.js')
let ParamGet = require('./ParamGet.js')
let FileRemove = require('./FileRemove.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let ParamPush = require('./ParamPush.js')
let FileWrite = require('./FileWrite.js')
let CommandInt = require('./CommandInt.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let CommandTOL = require('./CommandTOL.js')
let FileChecksum = require('./FileChecksum.js')
let MessageInterval = require('./MessageInterval.js')
let CommandLong = require('./CommandLong.js')
let ParamSet = require('./ParamSet.js')
let WaypointPull = require('./WaypointPull.js')
let FileMakeDir = require('./FileMakeDir.js')
let FileOpen = require('./FileOpen.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let CommandAck = require('./CommandAck.js')
let MountConfigure = require('./MountConfigure.js')
let SetMode = require('./SetMode.js')
let StreamRate = require('./StreamRate.js')
let CommandBool = require('./CommandBool.js')
let LogRequestData = require('./LogRequestData.js')
let FileRename = require('./FileRename.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let FileClose = require('./FileClose.js')
let WaypointClear = require('./WaypointClear.js')
let FileList = require('./FileList.js')
let ParamPull = require('./ParamPull.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')

module.exports = {
  WaypointPush: WaypointPush,
  LogRequestList: LogRequestList,
  SetMavFrame: SetMavFrame,
  CommandHome: CommandHome,
  CommandVtolTransition: CommandVtolTransition,
  FileRead: FileRead,
  FileTruncate: FileTruncate,
  ParamGet: ParamGet,
  FileRemove: FileRemove,
  VehicleInfoGet: VehicleInfoGet,
  ParamPush: ParamPush,
  FileWrite: FileWrite,
  CommandInt: CommandInt,
  CommandTriggerInterval: CommandTriggerInterval,
  LogRequestEnd: LogRequestEnd,
  CommandTOL: CommandTOL,
  FileChecksum: FileChecksum,
  MessageInterval: MessageInterval,
  CommandLong: CommandLong,
  ParamSet: ParamSet,
  WaypointPull: WaypointPull,
  FileMakeDir: FileMakeDir,
  FileOpen: FileOpen,
  CommandTriggerControl: CommandTriggerControl,
  CommandAck: CommandAck,
  MountConfigure: MountConfigure,
  SetMode: SetMode,
  StreamRate: StreamRate,
  CommandBool: CommandBool,
  LogRequestData: LogRequestData,
  FileRename: FileRename,
  FileRemoveDir: FileRemoveDir,
  FileClose: FileClose,
  WaypointClear: WaypointClear,
  FileList: FileList,
  ParamPull: ParamPull,
  WaypointSetCurrent: WaypointSetCurrent,
};
