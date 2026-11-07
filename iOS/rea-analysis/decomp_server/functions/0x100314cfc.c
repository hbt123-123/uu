// rea decompile_all
// name: FUN_100314cfc
// address: 0x100314cfc
// body: available
// range: 0x100314cfc-0x100314fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100314cfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 auStack_100 [4];
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long lStack_a8;
  undefined *local_68;
  
  uVar5 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x58);
  uVar2 = 0xff;
  local_c0 = uVar1;
  uStack_b8 = uVar5;
  _swift_getAssociatedTypeWitness(0xff,uVar1,uVar5,0x1008f97a8,&TargetProtocolRequirement_1008f97b8)
  ;
  lVar3 = 0;
  __sSqMa(0,uVar2);
  local_b0 = *(long *)(lVar3 + -8);
  lVar10 = (long)&local_e0 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_c8 = lVar10;
  lStack_a8 = lVar3;
  FUN_100316ccc(0,uVar5,uVar1);
  lVar10 = lVar10 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_d0 = lVar4;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar11 = *(long *)(lVar3 + -8);
  lVar13 = lVar10 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_d8 = lVar3;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar7 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88;
  lVar12 = lVar13 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar14 = lVar12 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0;
  FUN_1002770e4();
  local_e0 = uVar5;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a82230;
  FUN_100005c90(&DAT_100a82230,puVar7,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar7 = &DAT_100a82238;
  FUN_100004bb4(&DAT_100a82238,&DAT_100819bc0);
  puVar8 = &DAT_100a82240;
  FUN_1000d61d8(&DAT_100a82240,&DAT_100a82238,&DAT_100819bc0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar12,&local_68,puVar7,puVar8,lVar4,puVar6);
  (**(code **)(lVar11 + 0x68))
            (lVar13,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,local_d8);
  lVar3 = -0x2fffffffffffffda;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000026,0x80000001008a8840,lVar14,lVar12,lVar13,0);
  unaff_x20[2] = param_1;
  unaff_x20[3] = lVar3;
  FUN_1002c70ac(0,local_d0);
  lVar3 = local_c8;
  (**(code **)(local_b0 + 0x10))(local_c8,param_2,lStack_a8);
  uVar1 = uStack_b8;
  uVar5 = local_c0;
  uVar2 = 0;
  FUN_100316f58(0,uStack_b8,local_c0);
  _swift_unknownObjectRetain(param_1);
  uVar9 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar2);
  *(undefined8 *)(lVar14 + -0x10) = uVar5;
  *(undefined8 *)(lVar14 + -0x18) = uVar1;
  *(undefined **)(lVar14 + -0x20) = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10031289c(lVar10,lVar3,0,0,PTR___swiftEmptyArrayStorage_100995ea0,param_3,param_4,param_5 & 1,
                uVar9);
  FUN_1002c6c34();
  unaff_x20[4] = lVar10;
  return unaff_x20;
}

