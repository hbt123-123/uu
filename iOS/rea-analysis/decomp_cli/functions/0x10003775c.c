// rea decompile_all
// name: FUN_10003775c
// address: 0x10003775c
// body: available
// range: 0x10003775c-0x100037a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10003775c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  long local_90 [3];
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  
  lVar6 = 0;
  FUN_100010d74();
  lVar13 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar13 + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)((long)local_90 + lVar6);
  local_90[2] = *(long *)(param_1 + 8);
  uVar14 = *(ulong *)(local_90[2] + 0x10);
  if (uVar14 == 0) {
    uVar11 = 0x80000001000c5fc0;
    uVar9 = 0xd00000000000001e;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_100021c68(0,uVar14,0);
    local_90[1] = local_90[2] +
                  ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
    uVar10 = 0;
    local_90[0] = lVar13;
    do {
      puVar4 = local_68;
      if (*(ulong *)(local_90[2] + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100037a24);
        (*pcVar5)();
      }
      uVar1 = uVar10 + 1;
      FUN_10000fc0c(local_90[1] + *(long *)(local_90[0] + 0x48) * uVar10,puVar8,FUN_100010d74);
      local_78 = *(undefined **)((long)local_90 + lVar6 + 0x10);
      uStack_70 = *(undefined8 *)((long)&local_78 + lVar6);
      _swift_bridgeObjectRetain();
      __sSS6appendyySSF(0x2820,0xe200000000000000);
      __sSS6appendyySSF(*puVar8,*(undefined8 *)((long)local_90 + lVar6 + 8));
      __sSS6appendyySSF(0x203a29,0xe300000000000000);
      bVar3 = *(byte *)((long)&uStack_70 + lVar6);
      uVar9 = 0x657463656e6e6f63;
      if (bVar3 != 2) {
        uVar9 = 0x64656c696166;
      }
      uVar11 = 0xe900000000000064;
      if (bVar3 != 2) {
        uVar11 = 0xe600000000000000;
      }
      uVar2 = 0x656e6e6f63736964;
      if (bVar3 != 0) {
        uVar2 = 0x697463656e6e6f63;
      }
      uVar12 = 0xec00000064657463;
      if (bVar3 != 0) {
        uVar12 = 0xea0000000000676e;
      }
      if (bVar3 < 2) {
        uVar11 = uVar12;
        uVar9 = uVar2;
      }
      __sSS6appendyySSF(uVar9,uVar11);
      _swift_bridgeObjectRelease(uVar11);
      uVar9 = uStack_70;
      puVar7 = local_78;
      FUN_10000fc50(puVar8,FUN_100010d74);
      uVar10 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
        FUN_100021c68(1 < *(ulong *)(puVar4 + 0x18),uVar10 + 1,1);
      }
      puVar4 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar10 + 1;
      *(undefined **)(local_68 + uVar10 * 0x10 + 0x20) = puVar7;
      *(undefined8 *)(local_68 + uVar10 * 0x10 + 0x28) = uVar9;
      uVar10 = uVar1;
    } while (uVar14 != uVar1);
    puVar7 = &DAT_100102c38;
    local_78 = local_68;
    FUN_10000eb08(&DAT_100102c38,&DAT_1000d1b90);
    puVar8 = &DAT_100102c40;
    FUN_10002cf3c(&DAT_100102c40,&DAT_100102c38,&DAT_1000d1b90,PTR___sSayxGSKsMc_1000f0378);
    uVar9 = 10;
    uVar11 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar7,puVar8);
    _swift_release(puVar4);
  }
  auVar15._8_8_ = uVar11;
  auVar15._0_8_ = uVar9;
  return auVar15;
}

