// rea decompile_all
// name: FUN_1000140c4
// address: 0x1000140c4
// body: available
// range: 0x1000140c4-0x10001437f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000140c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long *plVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  local_78 = (undefined4)param_2;
  uStack_74 = (undefined4)((ulong)param_2 >> 0x20);
  uStack_70 = (undefined4)param_3;
  uStack_6c = (undefined4)((ulong)param_3 >> 0x20);
  uStack_68 = (undefined4)param_4;
  uStack_64 = (undefined4)((ulong)param_4 >> 0x20);
  uVar9 = uStack_64;
  lVar13 = *(long *)(unaff_x20 + 0x140);
  if (lVar13 == 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_100029c2c,0,0xd0000000000000a9,0x8000000100877660,0xd00000000000001a,
                  0x800000010087a760,0x625,0);
  }
  else {
    uVar6 = CONCAT44(uStack_68,uStack_6c);
    uVar5 = CONCAT44(uStack_70,uStack_74);
    uStack_64._0_1_ = (undefined1)((ulong)param_4 >> 0x20);
    uVar8 = (undefined1)uStack_64;
    lVar14 = *(long *)(unaff_x20 + 0x138);
    uStack_64 = uVar9;
    _swift_bridgeObjectRetain(lVar13);
    lVar17 = lVar14;
    FUN_1001a11bc(lVar14,lVar13);
    plVar15 = *(long **)(lVar17 + 0x20);
    pcVar16 = *(code **)(*plVar15 + 0xb0);
    _swift_retain(plVar15);
    (*pcVar16)(&local_78);
    _swift_release(plVar15);
    _swift_release(lVar17);
    puVar4 = (undefined8 *)CONCAT44(uStack_74,local_78);
    puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = puVar4;
    for (lVar17 = puVar4[2]; lVar17 != 0; lVar17 = lVar17 + -1) {
      uVar18 = puVar7[4];
      if ((int)uVar18 != (int)param_1) {
        uVar2 = *(undefined1 *)(puVar7 + 5);
        uVar20 = *(undefined8 *)((long)puVar7 + 0x34);
        uVar19 = *(undefined8 *)((long)puVar7 + 0x2c);
        uVar3 = *(undefined1 *)((long)puVar7 + 0x3c);
        puVar10 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar12 = puVar11;
        if (((ulong)puVar10 & 1) == 0) {
          puVar12 = (undefined *)0x0;
          FUN_100034280(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
        }
        uVar1 = *(ulong *)(puVar12 + 0x10);
        puVar11 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          FUN_100034280(puVar11,uVar1 + 1,1,puVar12);
        }
        *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar11 + uVar1 * 0x20 + 0x20) = uVar18;
        puVar11[uVar1 * 0x20 + 0x28] = uVar2;
        *(undefined8 *)(puVar11 + uVar1 * 0x20 + 0x34) = uVar20;
        *(undefined8 *)(puVar11 + uVar1 * 0x20 + 0x2c) = uVar19;
        puVar11[uVar1 * 0x20 + 0x3c] = uVar3;
      }
      puVar7 = puVar7 + 4;
    }
    _swift_bridgeObjectRelease(puVar4);
    puVar10 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar12 = puVar11;
    if (((ulong)puVar10 & 1) == 0) {
      puVar12 = (undefined *)0x0;
      FUN_100034280(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
    }
    uVar1 = *(ulong *)(puVar12 + 0x10);
    puVar11 = puVar12;
    if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
      puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
      FUN_100034280(puVar11,uVar1 + 1,1,puVar12);
    }
    *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
    *(int *)(puVar11 + uVar1 * 0x20 + 0x20) = (int)param_1;
    *(int *)(puVar11 + uVar1 * 0x20 + 0x24) = (int)((ulong)param_1 >> 0x20);
    puVar11[uVar1 * 0x20 + 0x28] = (byte)param_2 & 1;
    *(undefined8 *)(puVar11 + uVar1 * 0x20 + 0x34) = uVar6;
    *(undefined8 *)(puVar11 + uVar1 * 0x20 + 0x2c) = uVar5;
    puVar11[uVar1 * 0x20 + 0x3c] = uVar8;
    FUN_1001a11bc(lVar14,lVar13);
    _swift_bridgeObjectRelease(lVar13);
    plVar15 = *(long **)(lVar14 + 0x20);
    local_78 = SUB84(puVar11,0);
    uStack_74 = (undefined4)((ulong)puVar11 >> 0x20);
    pcVar16 = *(code **)(*plVar15 + 0xb8);
    _swift_retain(plVar15);
    (*pcVar16)(&local_78);
    _swift_release(plVar15);
    _swift_release(lVar14);
  }
  return;
}

