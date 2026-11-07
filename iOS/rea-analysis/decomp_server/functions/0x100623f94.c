// rea decompile_all
// name: FUN_100623f94
// address: 0x100623f94
// body: available
// range: 0x100623f94-0x10062438f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100623f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,long param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  TargetProtocolConformanceDescriptor *pTVar12;
  undefined *puVar13;
  undefined *puVar14;
  void *aBlock;
  undefined *puVar15;
  long lVar16;
  undefined1 auStack_160 [16];
  long alStack_150 [8];
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  char local_69 [9];
  
  lVar7 = 0;
  local_b8 = param_2;
  local_b0 = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e0 = *(long *)(lVar7 + -8);
  lVar1 = -(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)&local_110 + lVar1;
  uVar9 = param_7;
  local_d8 = (code *)lVar7;
  _swift_projectBox();
  uVar8 = 0xff;
  local_c8 = param_9;
  local_c0 = param_10;
  local_e8 = uVar9;
  _swift_getAssociatedTypeWitness
            (0xff,param_10,param_9,PTR___sStTL_100995a48,PTR___s7ElementStTl_100995700);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_11,uVar8,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar10 = 0xff;
  FUN_100616300(0xff,uVar9);
  uVar9 = 0xff;
  __sSaMa(0xff,uVar10);
  uVar11 = 0;
  FUN_100614b6c(0,uVar9);
  pTVar12 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,uVar11);
  local_d0 = param_1;
  FUN_10061a0c8(uVar11,pTVar12);
  if ((uVar11 & 1) != 0) {
    local_69[0] = '\0';
    puVar13 = &DAT_1009e0b10;
    local_110 = param_7;
    local_108 = param_3;
    local_100 = param_5;
    local_f0 = param_8;
    _swift_allocObject(&DAT_1009e0b10,0x28,7);
    *(char **)(puVar13 + 0x10) = local_69;
    *(long *)(puVar13 + 0x18) = param_5 + 0x10;
    *(undefined8 *)(puVar13 + 0x20) = param_6;
    puVar14 = &DAT_1009e0b38;
    local_f8 = param_6;
    _swift_allocObject(&DAT_1009e0b38,0x20,7);
    *(code **)(puVar14 + 0x10) = thunk_FUN_1006274e4;
    *(undefined **)(puVar14 + 0x18) = puVar13;
    local_80 = FUN_1000f4ed4;
    local_a0 = PTR___NSConcreteStackBlock_100995490;
    local_98 = 0x42000000;
    local_90 = FUN_1000fcdcc;
    puStack_88 = &DAT_1009e0b50;
    local_78 = puVar14;
    aBlock = __Block_copy(&local_a0);
    puVar15 = local_78;
    _swift_retain(puVar14);
    _swift_release(puVar15);
    uVar9 = local_b0;
    _dispatch_sync(local_b0,aBlock);
    __Block_release(aBlock);
    puVar15 = puVar14;
    _swift_isEscapingClosureAtFileLocation(puVar14,"",0x9a,0x155,0x16,1);
    _swift_release(puVar14);
    if (((ulong)puVar15 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100624390);
      (*pcVar6)();
    }
    if (local_69[0] == '\x01') {
      lVar7 = local_f0 + 0x10;
      local_a0 = (undefined *)0x0;
      __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(lVar16);
      uVar5 = local_c0;
      uVar4 = local_c8;
      *(undefined8 *)((long)alStack_150 + lVar1) = local_c8;
      *(undefined8 *)((long)alStack_150 + lVar1 + 8) = uVar5;
      uVar10 = local_e8;
      *(long *)((long)alStack_150 + lVar1 + 0x10) = param_11;
      *(undefined8 *)((long)alStack_150 + lVar1 + 0x18) = uVar10;
      *(undefined ***)((long)alStack_150 + lVar1 + 0x20) = &local_a0;
      *(long *)((long)alStack_150 + lVar1 + 0x28) = param_5 + 0x10;
      *(long *)((long)alStack_150 + lVar1 + 0x30) = lVar7;
      __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
                (lVar16,FUN_100627338,auStack_160 + lVar1,PTR___sytN_100995e90 + 8);
      (**(code **)(local_e0 + 8))(lVar16,local_d8);
      puVar14 = local_a0;
      if (local_a0 != (undefined *)0x0) {
        puVar15 = &DAT_1009e0b88;
        _swift_allocObject(&DAT_1009e0b88,0x68,7);
        uVar3 = local_d0;
        lVar16 = local_f0;
        lVar7 = local_100;
        uVar2 = local_108;
        uVar10 = local_110;
        *(undefined8 *)(puVar15 + 0x10) = uVar4;
        *(undefined8 *)(puVar15 + 0x18) = uVar5;
        *(long *)(puVar15 + 0x20) = param_11;
        *(undefined8 *)(puVar15 + 0x28) = uVar9;
        *(long *)(puVar15 + 0x30) = local_100;
        *(undefined8 *)(puVar15 + 0x38) = local_d0;
        *(undefined8 *)(puVar15 + 0x40) = local_b8;
        *(undefined8 *)(puVar15 + 0x48) = local_108;
        *(undefined8 *)(puVar15 + 0x50) = local_f8;
        *(undefined8 *)(puVar15 + 0x58) = local_110;
        *(long *)(puVar15 + 0x60) = local_f0;
        local_d8 = *(code **)(param_11 + 0x10);
        local_b0 = uVar9;
        _swift_retain(local_100);
        _swift_retain(uVar3);
        _swift_retain(uVar2);
        _swift_retain(uVar10);
        _swift_retain(lVar16);
        uVar9 = 0;
        _swift_checkMetadataState(0,uVar8);
        (*local_d8)(FUN_100627398,puVar15,uVar9,param_11);
        _swift_release(puVar15);
        *(long *)((long)alStack_150 + lVar1 + 0x30) = param_11;
        *(undefined8 *)((long)alStack_150 + lVar1 + 0x28) = local_c0;
        *(undefined8 *)((long)alStack_150 + lVar1 + 0x20) = local_c8;
        FUN_100623f94(uVar3,local_b8,uVar2,local_b0,lVar7,local_f8,uVar10,lVar16);
        _swift_release(puVar13);
        _swift_unknownObjectRelease(puVar14);
        return;
      }
      *(long *)((long)alStack_150 + lVar1 + 0x30) = param_11;
      FUN_1006244c8(uVar9,local_100,local_d0,local_b8,local_108,local_f0,uVar4,uVar5);
    }
    _swift_release(puVar13);
  }
  return;
}

