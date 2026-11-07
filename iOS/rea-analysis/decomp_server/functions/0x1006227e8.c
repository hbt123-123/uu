// rea decompile_all
// name: FUN_1006227e8
// address: 0x1006227e8
// body: available
// range: 0x1006227e8-0x100622be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1006227e8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 auStack_d0 [2];
  char *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  
  lVar1 = 0;
  lVar12 = param_2;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar17 = *(long *)(lVar1 + -8);
  lVar16 = (long)&local_c0 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar13 = lVar16 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_70 = lVar13;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar15 = *(long *)(lVar2 + -8);
  lVar13 = lVar13 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 < 1) {
    uVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,param_4,param_3,PTR___sStTL_100995a48,PTR___s7ElementStTl_100995700);
    uVar5 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,param_5,uVar4,0x100904f48,&TargetProtocolRequirement_100904f50);
    uVar4 = 0xff;
    __sSaMa(0xff,uVar5);
    puVar11 = (undefined8 *)0x0;
    FUN_100616218(0,uVar4);
    FUN_10060d02c();
    _swift_allocError(&DAT_1009df040,puVar11,0,0);
    *puVar11 = 2;
    puVar11[2] = 0;
    puVar11[1] = 0;
    puVar11[4] = 0;
    puVar11[3] = 0;
    *(undefined1 *)(puVar11 + 5) = 2;
    FUN_1006154e0();
  }
  else {
    lVar3 = param_3;
    local_88 = lVar13;
    _swift_allocBox();
    local_78 = lVar3;
    (**(code **)(*(long *)(param_3 + -8) + 0x10))(lVar12,param_1,param_3);
    uVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,param_4,param_3,PTR___sStTL_100995a48,PTR___s7ElementStTl_100995700);
    uVar5 = 0xff;
    local_80 = param_4;
    _swift_getAssociatedTypeWitness
              (0xff,param_5,uVar4,0x100904f48,&TargetProtocolRequirement_100904f50);
    uVar6 = 0xff;
    __sSaMa(0xff,uVar5);
    uVar5 = 0;
    FUN_100616218();
    local_90 = param_5;
    FUN_100615718();
    puVar7 = &DAT_1009e07f0;
    local_a0 = uVar6;
    uStack_98 = uVar5;
    _swift_allocObject(&DAT_1009e07f0,0x18,7);
    *(undefined8 *)(puVar7 + 0x10) = 0;
    puVar8 = &DAT_1009e0818;
    local_b0 = puVar7;
    lStack_a8 = param_2;
    _swift_allocObject(&DAT_1009e0818,0x18,7);
    uVar5 = 0;
    _swift_checkMetadataState(0,uVar4);
    uVar4 = 0;
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar5);
    *(undefined8 *)(puVar8 + 0x10) = uVar4;
    uVar4 = 0;
    FUN_100605bac();
    local_c0 = "org.promisekit.barrier.race";
    puVar7 = &DAT_100ab0660;
    local_b8 = uVar4;
    FUN_100004bb4(&DAT_100ab0660,&DAT_100848a00);
    uVar14 = (ulong)*(byte *)(lVar15 + 0x50);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ
              (puVar7 + (uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff)));
    puVar9 = &DAT_100ab0668;
    local_68 = puVar7;
    FUN_100005c90(&DAT_100ab0668,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                  PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
    puVar7 = &DAT_100ab0670;
    FUN_100004bb4(&DAT_100ab0670,&DAT_100848a08);
    puVar10 = &DAT_100ab0678;
    FUN_10003f840(&DAT_100ab0678,&DAT_100ab0670,&DAT_100848a08,PTR___sSayxGSTsMc_100995898);
    lVar12 = local_88;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_88,&local_68,puVar7,puVar10,lVar2,puVar9);
    lVar2 = local_70;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_70);
    (**(code **)(lVar17 + 0x68))
              (lVar16,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,lVar1);
    uVar5 = 0xd00000000000001b;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (0xd00000000000001b,(ulong)local_c0 | 0x8000000000000000,lVar2,lVar12,lVar16,0);
    *(undefined8 *)(lVar13 + -8) = local_90;
    *(undefined8 *)(lVar13 + -0x10) = local_80;
    lVar12 = local_78;
    uVar4 = local_a0;
    puVar7 = local_b0;
    FUN_100622be8(uStack_98,local_a0,uVar5,local_b0,lStack_a8,local_78,puVar8,param_3);
    _swift_release(lVar12);
    _swift_release(puVar7);
    _swift_release(puVar8);
    _swift_release(uVar4);
  }
  return;
}

