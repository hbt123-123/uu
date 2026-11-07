// rea decompile_all
// name: FUN_1000d4e44
// address: 0x1000d4e44
// body: available
// range: 0x1000d4e44-0x1000d507f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000d4e44(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_90 [8];
  char *local_88;
  undefined8 local_80;
  long local_78;
  undefined *local_68;
  
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar9 = *(long *)(lVar2 + -8);
  local_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  puVar10 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0;
  FUN_100004b70();
  local_80 = uVar5;
  __s8Dispatch0A3QoSV13userInitiatedACvgZ(lVar4);
  __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ(lVar11);
  uVar1 = *(undefined4 *)
           PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0;
  pcVar12 = *(code **)(lVar9 + 0x68);
  (*pcVar12)(puVar10,uVar1,lVar2);
  uVar5 = 0xd00000000000002f;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000002f,0x80000001008865f0,lVar4,lVar11,puVar10,0);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar5;
  local_88 = "mote.file-transfer.directory-io";
  __s8Dispatch0A3QoSV13userInitiatedACvgZ(lVar4);
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a750d0;
  FUN_100005c90(&DAT_100a750d0,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar7 = &DAT_100a750d8;
  FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
  puVar8 = &DAT_100a750e0;
  FUN_1000d61d8(&DAT_100a750e0,&DAT_100a750d8,&DAT_1008083f0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar11,&local_68,puVar7,puVar8,lVar3,puVar6);
  (*pcVar12)(puVar10,uVar1,local_78);
  uVar5 = 0xd000000000000034;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000034,(ulong)local_88 | 0x8000000000000000,lVar4,lVar11,puVar10,0);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
  return unaff_x20;
}

