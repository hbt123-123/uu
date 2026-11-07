// rea decompile_all
// name: FUN_100031248
// address: 0x100031248
// body: available
// range: 0x100031248-0x1000314a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100031248(long *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  long alStack_90 [3];
  undefined *local_78 [3];
  
  lVar5 = 0;
  FUN_10000fb58();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar10 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)alStack_90 + lVar5);
  alStack_90[2] = *param_1;
  uVar11 = *(ulong *)(alStack_90[2] + 0x10);
  if (uVar11 == 0) {
    uVar9 = 0xea00000000007365;
    uVar8 = 0x6369766564206f4e;
  }
  else {
    local_78[2] = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_100021c68(0,uVar11,0);
    uVar12 = 0;
    alStack_90[1] =
         alStack_90[2] +
         ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
         ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    do {
      puVar3 = local_78[2];
      if (*(ulong *)(alStack_90[2] + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000314a8);
        (*pcVar4)();
      }
      FUN_10000fc0c(alStack_90[1] + *(long *)(lVar10 + 0x48) * uVar12,puVar7,FUN_10000fb58);
      local_78[0] = *(undefined **)((long)alStack_90 + lVar5 + 0x10);
      local_78[1] = *(undefined **)((long)local_78 + lVar5);
      _swift_bridgeObjectRetain();
      __sSS6appendyySSF(0x2820,0xe200000000000000);
      __sSS6appendyySSF(*puVar7,*(undefined8 *)((long)alStack_90 + lVar5 + 8));
      __sSS6appendyySSF(0x203a29,0xe300000000000000);
      uVar8 = 0x656e696c6e6f;
      if ((&stack0xffffffffffffffa0)[lVar5] == '\0') {
        uVar8 = 0x656e696c66666f;
      }
      uVar9 = 0xe600000000000000;
      if ((&stack0xffffffffffffffa0)[lVar5] == '\0') {
        uVar9 = 0xe700000000000000;
      }
      __sSS6appendyySSF(uVar8,uVar9);
      _swift_bridgeObjectRelease(uVar9);
      puVar2 = local_78[1];
      puVar6 = local_78[0];
      FUN_10000fc50(puVar7,FUN_10000fb58);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      local_78[2] = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_100021c68(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      puVar3 = local_78[2];
      uVar12 = uVar12 + 1;
      *(ulong *)(local_78[2] + 0x10) = uVar1 + 1;
      *(undefined **)(local_78[2] + uVar1 * 0x10 + 0x20) = puVar6;
      *(undefined **)(local_78[2] + uVar1 * 0x10 + 0x28) = puVar2;
    } while (uVar11 != uVar12);
    puVar6 = &DAT_100102c38;
    local_78[0] = local_78[2];
    FUN_10000eb08(&DAT_100102c38,&DAT_1000d1b90);
    puVar7 = &DAT_100102c40;
    FUN_10002cf3c(&DAT_100102c40,&DAT_100102c38,&DAT_1000d1b90,PTR___sSayxGSKsMc_1000f0378);
    uVar8 = 10;
    uVar9 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar6,puVar7);
    _swift_release(puVar3);
  }
  auVar13._8_8_ = uVar9;
  auVar13._0_8_ = uVar8;
  return auVar13;
}

