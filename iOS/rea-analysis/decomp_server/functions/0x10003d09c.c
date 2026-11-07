// rea decompile_all
// name: FUN_10003d09c
// address: 0x10003d09c
// body: available
// range: 0x10003d09c-0x10003d38f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10003d09c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined1 auStack_d0 [16];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  int iStack_ac;
  byte local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined1 local_94;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  FUN_1001a11bc();
  plVar10 = *(long **)(param_1 + 0x20);
  pcVar11 = *(code **)(*plVar10 + 0xb0);
  _swift_retain(plVar10);
  (*pcVar11)(&local_90);
  _swift_release(plVar10);
  lVar8 = CONCAT44(uStack_8c,local_90);
  lVar6 = *(long *)(lVar8 + 0x10) + 1;
  puVar1 = (undefined8 *)(lVar8 + 0x14);
  do {
    puVar7 = puVar1;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      _swift_release(param_1);
      _swift_bridgeObjectRelease(lVar8);
      return 0;
    }
    iVar9 = (int)param_3;
    puVar1 = puVar7 + 4;
  } while (*(int *)((long)puVar7 + 0xc) != iVar9);
  iVar3 = *(int *)(puVar7 + 2);
  bVar5 = *(byte *)((long)puVar7 + 0x14);
  uVar12 = puVar7[3];
  uVar2 = puVar7[4];
  bVar4 = *(byte *)(puVar7 + 5);
  _swift_release(param_1);
  _swift_bridgeObjectRelease(lVar8);
  if ((bVar4 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_c0 = (undefined4)uVar12;
    uStack_bc = (undefined4)((ulong)uVar12 >> 0x20);
    local_b8 = (undefined4)uVar2;
    uStack_b4 = (undefined4)((ulong)uVar2 >> 0x20);
    local_94 = 0;
    local_b0 = iVar9;
    iStack_ac = iVar3;
    local_a8 = bVar5;
    uStack_a4 = local_c0;
    local_a0._0_4_ = uStack_bc;
    local_a0._4_4_ = local_b8;
    uStack_98 = uStack_b4;
    FUN_1003fb48c(FUN_1000400f0,auStack_d0,0xd0000000000000a9,0x8000000100877660,0xd00000000000002e,
                  0x800000010087bb80,0x436,0);
  }
  else if (((bVar5 & 1) == 0) && (FUN_10003b8a0(), param_3 != 0)) {
    lVar6 = *(long *)(param_3 + 0x10) + 1;
    lVar8 = 0x20;
    do {
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) {
        _swift_bridgeObjectRelease();
        goto LAB_10003d2e0;
      }
      puVar1 = (undefined8 *)(param_3 + lVar8);
      lVar8 = lVar8 + 0x30;
      uStack_6f = *(undefined8 *)((long)puVar1 + 0x21);
      uStack_80 = puVar1[2];
      uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x19) >> 0x38);
      uStack_88 = (undefined4)puVar1[1];
      uStack_84 = (undefined4)((ulong)puVar1[1] >> 0x20);
      local_90 = (int)*puVar1;
      uStack_8c = (undefined4)((ulong)*puVar1 >> 0x20);
      uStack_78 = (undefined1)puVar1[3];
      local_77 = (undefined7)((ulong)puVar1[3] >> 8);
    } while (local_90 != iVar3);
    _swift_bridgeObjectRelease();
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_a0 = &local_90;
    FUN_1003fb48c(FUN_1000400e8,&local_b0,0xd0000000000000a9,0x8000000100877660,0xd00000000000002e,
                  0x800000010087bb80,0x43c,0);
    uVar12 = CONCAT44(uStack_88,uStack_8c);
  }
  else {
LAB_10003d2e0:
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_a0._0_4_ = iVar9;
    FUN_1003fb48c(FUN_1000400e0,&local_b0,0xd0000000000000a9,0x8000000100877660,0xd00000000000002e,
                  0x800000010087bb80,0x43f,0);
    uVar12 = 0;
  }
  return uVar12;
}

