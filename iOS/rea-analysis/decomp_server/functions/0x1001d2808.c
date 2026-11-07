// rea decompile_all
// name: FUN_1001d2808
// address: 0x1001d2808
// body: available
// range: 0x1001d2808-0x1001d2a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d2808(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined *local_78 [3];
  
  lVar2 = 0;
  local_80 = param_1;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_90 = *(long *)(lVar2 + -8);
  lStack_88 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_90 + 0x40));
  puVar8 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar6 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_unknownObjectWeakInit(unaff_x20 + 0x10,0);
  uVar4 = 0;
  FUN_100004b70();
  local_98 = uVar4;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
  local_78[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a750d0;
  FUN_100005c90(&DAT_100a750d0,puVar6,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar6 = &DAT_100a750d8;
  FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
  puVar7 = &DAT_100a750e0;
  FUN_1000d61d8(&DAT_100a750e0,&DAT_100a750d8,&DAT_1008083f0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj(lVar9,local_78,puVar6,puVar7,lVar2,puVar5)
  ;
  (**(code **)(local_90 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lStack_88);
  uVar4 = 0xd000000000000026;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000026,0x80000001008764c0,lVar3,lVar9,puVar8,0);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000ccc6c();
  *(undefined **)(unaff_x20 + 0x20) = puVar6;
  lVar2 = _TtC14UURemoteServer18PortMappingHandler::connectTimeout;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer18PortMappingHandler::connectTimeout) = 10;
  uVar1 = *(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20;
  lVar3 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x68))(unaff_x20 + lVar2,uVar1,lVar3);
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer18PortMappingHandler::sendRetryInterval) =
       0x3fb999999999999a;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer18PortMappingHandler::maxPendingWriteBytes) =
       0x800000;
  _swift_beginAccess(unaff_x20 + 0x10,local_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x10,local_80);
  return;
}

