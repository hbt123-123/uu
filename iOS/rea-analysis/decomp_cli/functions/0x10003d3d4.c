// rea decompile_all
// name: FUN_10003d3d4
// address: 0x10003d3d4
// body: available
// range: 0x10003d3d4-0x10003d58b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10003d3d4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined *apuStack_80 [4];
  
  lVar4 = 0;
  FUN_1000143d4();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar11 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)apuStack_80 + lVar2);
  lVar4 = *param_1;
  lVar10 = *(long *)(lVar4 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (lVar10 != 0) {
    apuStack_80[3] = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_100021c68(0,lVar10,0);
    lVar4 = lVar4 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar11 + 0x48);
    do {
      puVar3 = apuStack_80[3];
      FUN_10003da90(lVar4,puVar6);
      apuStack_80[1] = (undefined *)*puVar6;
      apuStack_80[2] = *(undefined **)((long)apuStack_80 + lVar2 + 8);
      _swift_bridgeObjectRetain();
      __sSS6appendyySSF(0x203a,0xe200000000000000);
      __sSS6appendyySSF(*(undefined8 *)((long)apuStack_80 + lVar2 + 0x10),
                        *(undefined8 *)((long)apuStack_80 + lVar2 + 0x18));
      puVar5 = apuStack_80[2];
      puVar9 = apuStack_80[1];
      FUN_10003dad4(puVar6);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      apuStack_80[3] = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_100021c68(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(apuStack_80[3] + 0x10) = uVar1 + 1;
      *(undefined **)(apuStack_80[3] + uVar1 * 0x10 + 0x20) = puVar9;
      *(undefined **)(apuStack_80[3] + uVar1 * 0x10 + 0x28) = puVar5;
      lVar4 = lVar4 + lVar11;
      lVar10 = lVar10 + -1;
      puVar9 = apuStack_80[3];
    } while (lVar10 != 0);
  }
  puVar5 = &DAT_100102c38;
  apuStack_80[1] = puVar9;
  FUN_10000eb08(&DAT_100102c38,&DAT_1000d1b90);
  puVar6 = &DAT_100102c40;
  FUN_10002cf3c(&DAT_100102c40,&DAT_100102c38,&DAT_1000d1b90,PTR___sSayxGSKsMc_1000f0378);
  uVar7 = 10;
  uVar8 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar5,puVar6);
  _swift_bridgeObjectRelease(puVar9);
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = uVar7;
  return auVar12;
}

