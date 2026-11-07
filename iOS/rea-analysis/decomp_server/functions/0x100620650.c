// rea decompile_all
// name: FUN_100620650
// address: 0x100620650
// body: available
// range: 0x100620650-0x100620aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100620650(undefined *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 auStack_a0 [2];
  long local_90;
  long local_88;
  undefined *local_80;
  undefined1 local_78;
  undefined *local_70;
  byte local_68;
  byte local_67;
  
  puVar4 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar14 = *(long *)(puVar4 + -8);
  lVar21 = *(long *)(lVar14 + 0x40);
  uVar12 = lVar21 + 0xfU & 0xfffffffffffffff0;
  lVar20 = (long)&local_90 - uVar12;
  lVar13 = lVar20 - uVar12;
  lVar19 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_88 = lVar13;
  if (lVar19 != 0) {
    local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_90 = lVar21;
    FUN_1006262d4(0,lVar19,0);
    puVar22 = (undefined8 *)(param_1 + 0x28);
    do {
      puVar4 = local_70;
      uVar1 = puVar22[-1];
      uVar2 = *puVar22;
      uVar5 = uVar1;
      _swift_getObjectType();
      _swift_unknownObjectRetain(uVar1);
      FUN_100619ef0(uVar5,uVar2);
      _swift_unknownObjectRelease(uVar1);
      uVar12 = *(ulong *)(puVar4 + 0x10);
      local_70 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar12) {
        FUN_1006262d4(1 < *(ulong *)(puVar4 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(local_70 + 0x10) = uVar12 + 1;
      *(undefined8 *)(local_70 + uVar12 * 8 + 0x20) = uVar5;
      puVar22 = puVar22 + 2;
      lVar19 = lVar19 + -1;
      puVar4 = local_70;
      lVar21 = local_90;
    } while (lVar19 != 0);
  }
  puVar6 = puVar4;
  FUN_10061e4c4();
  _swift_bridgeObjectRelease(puVar4);
  lVar7 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar19 = local_88;
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(local_88,1,1,lVar7);
  puVar4 = &DAT_1009e0638;
  _swift_allocObject(&DAT_1009e0638,0x18,7);
  *(undefined **)(puVar4 + 0x10) = param_1;
  puVar8 = &DAT_1009e0660;
  _swift_allocObject(&DAT_1009e0660,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_100626760;
  *(undefined **)(puVar8 + 0x18) = puVar4;
  puVar9 = &DAT_100ab0650;
  FUN_100004bb4(&DAT_100ab0650,&DAT_1008489f0);
  _swift_allocObject();
  FUN_100004bb4(&DAT_100ab0658,&DAT_1008489f8);
  _swift_allocObject();
  _swift_bridgeObjectRetain_n(param_1,2);
  puVar10 = puVar4;
  _swift_retain();
  FUN_1006105dc();
  *(undefined **)(puVar9 + 0x10) = puVar10;
  FUN_100607210(lVar19,lVar20);
  uVar12 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar15 = uVar12 + 0x18 & (uVar12 ^ 0xffffffffffffffff);
  uVar17 = lVar21 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar10 = &DAT_1009e0688;
  _swift_allocObject(&DAT_1009e0688,uVar17 + 0x18,uVar12 | 7);
  *(undefined8 *)(puVar10 + 0x10) = 0;
  FUN_100607324(lVar20,puVar10 + uVar15);
  *(undefined **)(puVar10 + uVar17) = puVar9;
  *(code **)(puVar10 + uVar17 + 8) = FUN_100626768;
  *(undefined **)((long)(puVar10 + uVar17 + 8) + 8) = puVar8;
  plVar18 = *(long **)(puVar6 + 0x10);
  pcVar16 = *(code **)(*plVar18 + 0x58);
  _swift_retain_n(puVar9,2);
  _swift_retain(puVar8);
  (*pcVar16)(&local_70);
  puVar3 = local_70;
  if ((local_67 & 1) == 0) {
    _swift_release(puVar9);
    _swift_bridgeObjectRelease(param_1);
    _swift_release(puVar4);
    FUN_1006073e8(puVar3,local_68,0);
    *(code **)(lVar13 + -0x10) = FUN_100626864;
    *(undefined **)(lVar13 + -8) = puVar10;
    (**(code **)(*plVar18 + 0x60))(thunk_FUN_100627770);
    _swift_release(puVar8);
    _swift_release(puVar6);
    _swift_release(puVar10);
  }
  else {
    if ((local_68 & 1) == 0) {
      plVar18 = *(long **)(puVar9 + 0x10);
      _swift_bridgeObjectRetain(param_1);
      _swift_retain(puVar9);
      _swift_retain(puVar8);
      puVar11 = param_1;
      FUN_100620ab0();
      _swift_release(puVar4);
      _swift_bridgeObjectRelease_n(param_1,2);
      local_78 = 0;
      local_80 = puVar11;
      (**(code **)(*plVar18 + 0x68))(&local_80);
      FUN_1006268d8(local_80,local_78);
      _swift_release(puVar8);
      _swift_release_n(puVar9,2);
      FUN_1006073e8(puVar3,local_68,1);
      _swift_release(puVar10);
      _swift_release(puVar8);
    }
    else {
      _swift_bridgeObjectRelease(param_1);
      _swift_release(puVar4);
      local_80 = puVar3;
      local_78 = 1;
      pcVar16 = *(code **)(**(long **)(puVar9 + 0x10) + 0x68);
      _swift_errorRetain(puVar3);
      (*pcVar16)(&local_80);
      FUN_1006073e8(puVar3,local_68,1);
      _swift_release(puVar9);
      FUN_1006073e8(puVar3,local_68,1);
      _swift_release(puVar8);
      _swift_release(puVar6);
      puVar6 = puVar10;
    }
    _swift_release(puVar6);
  }
  FUN_1006070b4(local_88);
  return puVar9;
}

