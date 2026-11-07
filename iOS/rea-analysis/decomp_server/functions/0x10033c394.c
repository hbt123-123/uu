// rea decompile_all
// name: FUN_10033c394
// address: 0x10033c394
// body: available
// range: 0x10033c394-0x10033c59f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033c394(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [8];
  char *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined *local_68;
  
  lVar1 = 0;
  local_70 = param_1;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar9 = *(long *)(lVar1 + -8);
  puVar8 = auStack_90 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_78 = lVar1;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar5 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88;
  lVar10 = (long)puVar8 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar1 = lVar10 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_1002770e4();
  local_88 = "thentication.inspector";
  uStack_80 = uVar3;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar1);
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a82230;
  FUN_100005c90(&DAT_100a82230,puVar5,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar5 = &DAT_100a82238;
  FUN_100004bb4(&DAT_100a82238,&DAT_100819bc0);
  puVar6 = &DAT_100a82240;
  FUN_1000d61d8(&DAT_100a82240,&DAT_100a82238,&DAT_100819bc0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&local_68,puVar5,puVar6,lVar2,puVar4);
  (**(code **)(lVar9 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,local_78);
  uVar3 = 0xd00000000000001f;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000001f,(ulong)local_88 | 0x8000000000000000,lVar1,lVar10,puVar8,0);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  puVar4 = &DAT_100a82248;
  FUN_100004bb4(&DAT_100a82248,&DAT_100816040);
  _swift_allocObject();
  lVar1 = 0;
  FUN_1002c6dd8();
  _swift_allocObject();
  puVar7 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar1 + 0x10) = puVar7;
  *puVar7 = 0;
  *(long *)(puVar4 + 0x10) = lVar1;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  *(undefined8 *)(puVar4 + 0x28) = 0;
  puVar4[0x30] = 4;
  *(undefined8 *)(unaff_x20 + 0x18) = local_70;
  *(undefined **)(unaff_x20 + 0x20) = puVar4;
  return;
}

