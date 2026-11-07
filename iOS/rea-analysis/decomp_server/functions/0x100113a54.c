// rea decompile_all
// name: FUN_100113a54
// address: 0x100113a54
// body: available
// range: 0x100113a54-0x100113cb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100113a54(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 local_80;
  long local_78;
  long lStack_70;
  undefined *local_68;
  
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_78 = *(long *)(lVar1 + -8);
  lStack_70 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_78 + 0x40));
  lVar7 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar5 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_100004b70();
  local_80 = uVar3;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a750d0;
  FUN_100005c90(&DAT_100a750d0,puVar5,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar5 = &DAT_100a750d8;
  FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
  puVar6 = &DAT_100a750e0;
  FUN_1000d61d8(&DAT_100a750e0,&DAT_100a750d8,&DAT_1008083f0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar8,&local_68,puVar5,puVar6,lVar1,puVar4);
  (**(code **)(local_78 + 0x68))
            (lVar7,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lStack_70);
  uVar3 = 0xd00000000000001a;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000001a,0x800000010088c6a0,lVar2,lVar8,lVar7,0);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  puVar5 = &DAT_100a78e48;
  FUN_100004bb4(&DAT_100a78e48,&DAT_10080db38);
  _swift_allocObject();
  FUN_1003bda64();
  *(undefined **)(unaff_x20 + 0x18) = puVar5;
  puVar5 = &DAT_100a78e50;
  FUN_100004bb4(&DAT_100a78e50,&DAT_10080db40);
  _swift_allocObject();
  FUN_1003bda64();
  *(undefined **)(unaff_x20 + 0x20) = puVar5;
  puVar5 = &DAT_100a78e58;
  FUN_100004bb4(&DAT_100a78e58,&DAT_10080db48);
  _swift_allocObject();
  FUN_1003bda64();
  *(undefined **)(unaff_x20 + 0x28) = puVar5;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  return;
}

