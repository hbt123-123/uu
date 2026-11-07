// rea decompile_all
// name: FUN_100622be8
// address: 0x100622be8
// body: available
// range: 0x100622be8-0x100622fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100622be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  TargetProtocolConformanceDescriptor *pTVar10;
  undefined *puVar11;
  undefined *puVar12;
  void *aBlock;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 auStack_160 [16];
  long alStack_150 [8];
  undefined1 auStack_110 [8];
  undefined8 local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  code *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
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
  
  lVar6 = 0;
  local_b8 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d8 = *(long *)(lVar6 + -8);
  lVar2 = -(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_110 + lVar2;
  uVar8 = param_6;
  local_d0 = lVar6;
  _swift_projectBox();
  uVar7 = 0xff;
  local_b0 = param_9;
  local_e0 = (code *)uVar8;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_8,PTR___sStTL_100995a48,PTR___s7ElementStTl_100995700);
  uVar8 = 0xff;
  local_c8 = param_10;
  local_e8 = uVar7;
  _swift_getAssociatedTypeWitness
            (0xff,param_10,uVar7,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar7 = 0xff;
  __sSaMa(0xff,uVar8);
  uVar9 = 0;
  FUN_100616218(0,uVar7);
  pTVar10 = &TargetProtocolConformanceDescriptor_1008488a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,uVar9);
  local_c0 = param_1;
  FUN_10061a0c8(uVar9,pTVar10);
  if ((uVar9 & 1) != 0) {
    local_69[0] = '\0';
    puVar11 = &DAT_1009e0ca0;
    local_108 = param_6;
    local_100 = param_4;
    local_f8 = param_7;
    _swift_allocObject(&DAT_1009e0ca0,0x28,7);
    *(char **)(puVar11 + 0x10) = local_69;
    *(long *)(puVar11 + 0x18) = param_4 + 0x10;
    *(undefined8 *)(puVar11 + 0x20) = param_5;
    puVar12 = &DAT_1009e0cc8;
    local_f0 = param_5;
    _swift_allocObject(&DAT_1009e0cc8,0x20,7);
    *(code **)(puVar12 + 0x10) = thunk_FUN_1006274e4;
    *(undefined **)(puVar12 + 0x18) = puVar11;
    local_80 = thunk_FUN_1000f4ed4;
    local_a0 = PTR___NSConcreteStackBlock_100995490;
    local_98 = 0x42000000;
    local_90 = FUN_1000fcdcc;
    puStack_88 = &DAT_1009e0ce0;
    local_78 = puVar12;
    aBlock = __Block_copy(&local_a0);
    puVar13 = local_78;
    _swift_retain(puVar12);
    _swift_release(puVar13);
    _dispatch_sync(param_3,aBlock);
    __Block_release(aBlock);
    puVar13 = puVar12;
    _swift_isEscapingClosureAtFileLocation(puVar12,"",0x9a,0xc0,0x16,1);
    _swift_release(puVar12);
    lVar6 = local_f8;
    if (((ulong)puVar13 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100622fcc);
      (*pcVar5)();
    }
    if (local_69[0] == '\x01') {
      lVar1 = local_f8 + 0x10;
      local_a0 = (undefined *)0x0;
      __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(puVar15);
      uVar8 = local_b0;
      *(undefined8 *)((long)alStack_150 + lVar2) = param_8;
      *(undefined8 *)((long)alStack_150 + lVar2 + 8) = uVar8;
      lVar3 = local_c8;
      pcVar5 = local_e0;
      *(long *)((long)alStack_150 + lVar2 + 0x10) = local_c8;
      *(code **)((long)alStack_150 + lVar2 + 0x18) = pcVar5;
      *(undefined ***)((long)alStack_150 + lVar2 + 0x20) = &local_a0;
      *(long *)((long)alStack_150 + lVar2 + 0x28) = param_4 + 0x10;
      *(long *)((long)alStack_150 + lVar2 + 0x30) = lVar1;
      __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
                (puVar15,FUN_100627908,auStack_160 + lVar2,PTR___sytN_100995e90 + 8);
      (**(code **)(local_d8 + 8))(puVar15,local_d0);
      puVar12 = local_a0;
      if (local_a0 != (undefined *)0x0) {
        puVar13 = &DAT_1009e0d18;
        _swift_allocObject(&DAT_1009e0d18,0x60,7);
        uVar4 = local_b8;
        uVar7 = local_c0;
        lVar1 = local_100;
        uVar8 = local_108;
        *(undefined8 *)(puVar13 + 0x10) = param_8;
        *(undefined8 *)(puVar13 + 0x18) = local_b0;
        *(long *)(puVar13 + 0x20) = lVar3;
        *(undefined8 *)(puVar13 + 0x28) = param_3;
        *(long *)(puVar13 + 0x30) = local_100;
        *(undefined8 *)(puVar13 + 0x38) = local_c0;
        *(undefined8 *)(puVar13 + 0x40) = local_b8;
        *(undefined8 *)(puVar13 + 0x48) = local_f0;
        *(undefined8 *)(puVar13 + 0x50) = local_108;
        *(long *)(puVar13 + 0x58) = lVar6;
        local_e0 = *(code **)(lVar3 + 0x10);
        local_d8 = param_3;
        local_d0 = param_8;
        _swift_retain(local_100);
        _swift_retain(uVar7);
        _swift_retain(uVar4);
        _swift_retain(uVar8);
        _swift_retain(lVar6);
        uVar14 = 0;
        _swift_checkMetadataState(0,local_e8);
        (*local_e0)(FUN_1006275a8,puVar13,uVar14,lVar3);
        _swift_release(puVar13);
        *(long *)((long)alStack_150 + lVar2 + 0x38) = lVar3;
        *(undefined8 *)((long)alStack_150 + lVar2 + 0x30) = local_b0;
        FUN_100622be8(uVar7,uVar4,local_d8,lVar1,local_f0,uVar8,lVar6,local_d0);
        _swift_release(puVar11);
        _swift_unknownObjectRelease(puVar12);
        return;
      }
      FUN_100622fcc(param_3,local_100,local_c0,local_b8,lVar6,param_8,local_b0,lVar3);
    }
    _swift_release(puVar11);
  }
  return;
}

