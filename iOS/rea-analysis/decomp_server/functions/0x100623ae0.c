// rea decompile_all
// name: FUN_100623ae0
// address: 0x100623ae0
// body: available
// range: 0x100623ae0-0x100623f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 **
FUN_100623ae0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long alStack_f0 [4];
  undefined1 auStack_d0 [8];
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 **local_a8;
  undefined *local_a0;
  undefined8 local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 *local_68;
  
  lVar2 = 0;
  lVar17 = param_2;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar23 = *(long *)(lVar2 + -8);
  lVar19 = *(long *)(lVar23 + 0x40);
  lVar3 = 0;
  local_70 = lVar2;
  __s8Dispatch0A3QoSVMa();
  lVar22 = (long)(auStack_d0 + -(lVar19 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar21 = *(long *)(lVar2 + -8);
  lVar3 = lVar22 - (*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 < 1) {
    uVar11 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,param_4,param_3,PTR___sStTL_100995a48,PTR___s7ElementStTl_100995700);
    uVar5 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,param_5,uVar11,0x100904f48,&TargetProtocolRequirement_100904f50);
    uVar11 = 0xff;
    FUN_100616300(0xff,uVar5);
    uVar5 = 0xff;
    __sSaMa(0xff,uVar11);
    FUN_100614b6c(0,uVar5);
    puVar14 = (undefined8 *)0x0;
    __ss23_ContiguousArrayStorageCMa(0,uVar11);
    _swift_allocObject();
    puVar18 = (undefined8 *)0x1;
    __sSa13_adoptStorage_5countSayxG_SpyxGts016_ContiguousArrayB0CyxGn_SitFZ();
    puVar15 = puVar14;
    FUN_10060d02c();
    puVar16 = &DAT_1009df040;
    _swift_allocError(&DAT_1009df040,puVar15,0,0);
    *puVar15 = 2;
    puVar15[2] = 0;
    puVar15[1] = 0;
    puVar15[4] = 0;
    puVar15[3] = 0;
    *(undefined1 *)(puVar15 + 5) = 2;
    *puVar18 = puVar16;
    _swift_storeEnumTagMultiPayload(puVar18,uVar11,1);
    __sSaMa(0,uVar11);
    ppuVar8 = &local_68;
    local_68 = puVar14;
    FUN_100610904(ppuVar8);
    _swift_bridgeObjectRelease(puVar14);
  }
  else {
    lVar4 = param_3;
    local_90 = lVar3;
    lStack_88 = lVar2;
    _swift_allocBox();
    local_78 = lVar4;
    (**(code **)(*(long *)(param_3 + -8) + 0x10))(lVar17,param_1,param_3);
    uVar5 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,param_4,param_3,PTR___sStTL_100995a48,PTR___s7ElementStTl_100995700);
    uVar6 = 0xff;
    uVar11 = uVar5;
    local_80 = param_2;
    _swift_getAssociatedTypeWitness
              (0xff,param_5,uVar5,0x100904f48,&TargetProtocolRequirement_100904f50);
    uVar7 = 0xff;
    FUN_100616300(0xff,uVar6);
    uVar6 = 0xff;
    __sSaMa(0xff,uVar7);
    ppuVar8 = (undefined8 **)0x0;
    FUN_100614b6c();
    local_98 = param_5;
    FUN_10061073c();
    puVar16 = &DAT_1009e0868;
    local_a8 = ppuVar8;
    _swift_allocObject(&DAT_1009e0868,0x38,7);
    *(long *)(puVar16 + 0x10) = param_3;
    *(undefined8 *)(puVar16 + 0x18) = param_4;
    *(undefined8 *)(puVar16 + 0x20) = param_5;
    *(undefined8 *)(puVar16 + 0x28) = uVar6;
    *(undefined8 *)(puVar16 + 0x30) = uVar11;
    puVar9 = &DAT_1009e07f0;
    local_b0 = auStack_d0 + -(lVar19 + 0xfU & 0xfffffffffffffff0);
    _swift_allocObject(&DAT_1009e07f0,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = 0;
    puVar10 = &DAT_1009e0818;
    local_a0 = puVar9;
    _swift_allocObject(&DAT_1009e0818,0x18,7);
    uVar11 = 0;
    local_b8 = param_4;
    _swift_checkMetadataState(0,uVar5);
    uVar5 = 0;
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar11);
    *(undefined8 *)(puVar10 + 0x10) = uVar5;
    uVar11 = 0;
    FUN_100605bac();
    local_c8 = "org.promisekit.barrier.race";
    puVar15 = (undefined8 *)&DAT_100ab0660;
    local_c0 = uVar11;
    FUN_100004bb4(&DAT_100ab0660,&DAT_100848a00);
    uVar20 = (ulong)*(byte *)(lVar21 + 0x50);
    _swift_allocObject();
    puVar15[3] = 2;
    puVar15[2] = 1;
    __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ
              ((undefined *)((long)puVar15 + (uVar20 + 0x20 & (uVar20 ^ 0xffffffffffffffff))));
    puVar9 = &DAT_100ab0668;
    local_68 = puVar15;
    FUN_100005c90(&DAT_100ab0668,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                  PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
    puVar12 = &DAT_100ab0670;
    FUN_100004bb4(&DAT_100ab0670,&DAT_100848a08);
    puVar13 = &DAT_100ab0678;
    FUN_10003f840(&DAT_100ab0678,&DAT_100ab0670,&DAT_100848a08,PTR___sSayxGSTsMc_100995898);
    lVar17 = local_90;
    ppuVar8 = local_a8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_90,&local_68,puVar12,puVar13,lStack_88,puVar9);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar22);
    puVar1 = local_b0;
    (**(code **)(lVar23 + 0x68))
              (local_b0,*(undefined4 *)
                         PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,local_70);
    uVar5 = 0xd00000000000001b;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (0xd00000000000001b,(ulong)local_c8 | 0x8000000000000000,lVar22,lVar17,puVar1,0);
    *(undefined8 *)(lVar3 + -0x10) = local_98;
    uVar11 = local_b8;
    *(long *)(lVar3 + -0x20) = param_3;
    *(undefined8 *)(lVar3 + -0x18) = uVar11;
    lVar17 = local_78;
    puVar9 = local_a0;
    FUN_100623f94(ppuVar8,FUN_100626d4c,puVar16,uVar5,local_a0,local_80,local_78,puVar10);
    _swift_release(lVar17);
    _swift_release(puVar9);
    _swift_release(puVar10);
    _swift_release(puVar16);
  }
  return ppuVar8;
}

