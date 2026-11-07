// rea decompile_all
// name: FUN_10003f24c
// address: 0x10003f24c
// body: available
// range: 0x10003f24c-0x10003f55b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10003f24c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  undefined1 auStack_100 [16];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int local_e0;
  int iStack_dc;
  byte local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined1 local_c4;
  undefined1 local_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  char cStack_68;
  
  FUN_1001a11bc();
  plVar11 = *(long **)(param_1 + 0x20);
  pcVar10 = *(code **)(*plVar11 + 0xb0);
  _swift_retain(plVar11);
  (*pcVar10)(&local_90);
  _swift_release(plVar11);
  lVar9 = CONCAT44(uStack_8c,local_90);
  lVar7 = *(long *)(lVar9 + 0x10) + 1;
  puVar1 = (undefined8 *)(lVar9 + 0x14);
  do {
    puVar8 = puVar1;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      _swift_release(param_1);
      _swift_bridgeObjectRelease(lVar9);
      FUN_10003990c(local_c0,param_3);
      if (local_98 == '\x02') goto LAB_10003f3d8;
      uStack_88 = (undefined4)local_c0._8_8_;
      uStack_84 = SUB84(local_c0._8_8_,4);
      local_90 = (int)local_c0._0_8_;
      uStack_8c = SUB84(local_c0._0_8_,4);
      uStack_78 = (undefined1)uStack_a8;
      local_77 = (undefined7)((ulong)uStack_a8 >> 8);
      uStack_80 = uStack_b0;
      uStack_70 = (undefined1)local_a0;
      uStack_6f = (undefined7)((ulong)local_a0 >> 8);
      cStack_68 = local_98;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar10 = FUN_10003fef0;
      uVar6 = 0x42a;
      goto LAB_10003f470;
    }
    puVar1 = puVar8 + 4;
  } while (*(int *)((long)puVar8 + 0xc) != (int)param_3);
  iVar3 = *(int *)(puVar8 + 2);
  bVar5 = *(byte *)((long)puVar8 + 0x14);
  uVar6 = puVar8[3];
  uVar2 = puVar8[4];
  bVar4 = *(byte *)(puVar8 + 5);
  _swift_release(param_1);
  _swift_bridgeObjectRelease(lVar9);
  if ((bVar4 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_f0 = (undefined4)uVar6;
    uStack_ec = (undefined4)((ulong)uVar6 >> 0x20);
    local_e8 = (undefined4)uVar2;
    uStack_e4 = (undefined4)((ulong)uVar2 >> 0x20);
    local_c4 = 0;
    local_e0 = (int)param_3;
    iStack_dc = iVar3;
    local_d8 = bVar5;
    uStack_d4 = local_f0;
    local_d0._0_4_ = uStack_ec;
    local_d0._4_4_ = local_e8;
    uStack_c8 = uStack_e4;
    FUN_1003fb48c(FUN_10003fee4,auStack_100,0xd0000000000000a9,0x8000000100877660,0xd000000000000029
                  ,0x800000010087a9e0,0x423,0);
  }
  else if (((bVar5 & 1) == 0) && (FUN_10003b8a0(), param_3 != 0)) {
    lVar7 = *(long *)(param_3 + 0x10) + 1;
    lVar9 = 0x20;
    do {
      lVar7 = lVar7 + -1;
      if (lVar7 == 0) {
        _swift_bridgeObjectRelease();
        goto LAB_10003f3d8;
      }
      puVar1 = (undefined8 *)(param_3 + lVar9);
      lVar9 = lVar9 + 0x30;
      uStack_80 = puVar1[2];
      uStack_6f = (undefined7)*(undefined8 *)((long)puVar1 + 0x21);
      cStack_68 = (char)((ulong)*(undefined8 *)((long)puVar1 + 0x21) >> 0x38);
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
    pcVar10 = FUN_10003fedc;
    uVar6 = 0x426;
LAB_10003f470:
    local_d0 = &local_90;
    FUN_1003fb48c(pcVar10,&local_e0,0xd0000000000000a9,0x8000000100877660,0xd000000000000029,
                  0x800000010087a9e0,uVar6,0);
    uVar6 = CONCAT44(uStack_88,uStack_8c);
  }
  else {
LAB_10003f3d8:
    uVar6 = 0;
  }
  return uVar6;
}

