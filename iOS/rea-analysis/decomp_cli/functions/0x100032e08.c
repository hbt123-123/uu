// rea decompile_all
// name: FUN_100032e08
// address: 0x100032e08
// body: available
// range: 0x100032e08-0x1000330cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100032e08(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  long local_90 [3];
  undefined *local_78 [3];
  
  lVar7 = 0;
  FUN_100010114();
  lVar14 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar14 + 0x40));
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)local_90 + lVar7);
  local_90[2] = *(long *)(param_1 + 8);
  uVar15 = *(ulong *)(local_90[2] + 0x10);
  if (uVar15 == 0) {
    uVar12 = 0x80000001000c5cd0;
    uVar10 = 0xd00000000000001c;
  }
  else {
    local_78[2] = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_100021c68(0,uVar15,0);
    local_90[1] = local_90[2] +
                  ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff));
    uVar11 = 0;
    local_90[0] = lVar14;
    do {
      puVar5 = local_78[2];
      if (*(ulong *)(local_90[2] + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000330d0);
        (*pcVar6)();
      }
      uVar1 = uVar11 + 1;
      FUN_10000fc0c(local_90[1] + *(long *)(local_90[0] + 0x48) * uVar11,puVar9,FUN_100010114);
      local_78[0] = *(undefined **)((long)local_90 + lVar7 + 0x10);
      local_78[1] = *(undefined **)((long)local_78 + lVar7);
      _swift_bridgeObjectRetain();
      __sSS6appendyySSF(0x2820,0xe200000000000000);
      __sSS6appendyySSF(*puVar9,*(undefined8 *)((long)local_90 + lVar7 + 8));
      __sSS6appendyySSF(0x203a29,0xe300000000000000);
      bVar3 = (&stack0xffffffffffffffa0)[lVar7];
      uVar10 = 0x657463656e6e6f63;
      if (bVar3 != 2) {
        uVar10 = 0x64656c696166;
      }
      uVar12 = 0xe900000000000064;
      if (bVar3 != 2) {
        uVar12 = 0xe600000000000000;
      }
      uVar2 = 0x656e6e6f63736964;
      if (bVar3 != 0) {
        uVar2 = 0x697463656e6e6f63;
      }
      uVar13 = 0xec00000064657463;
      if (bVar3 != 0) {
        uVar13 = 0xea0000000000676e;
      }
      if (bVar3 < 2) {
        uVar12 = uVar13;
        uVar10 = uVar2;
      }
      __sSS6appendyySSF(uVar10,uVar12);
      _swift_bridgeObjectRelease(uVar12);
      puVar4 = local_78[1];
      puVar8 = local_78[0];
      FUN_10000fc50(puVar9,FUN_100010114);
      uVar11 = *(ulong *)(puVar5 + 0x10);
      local_78[2] = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
        FUN_100021c68(1 < *(ulong *)(puVar5 + 0x18),uVar11 + 1,1);
      }
      puVar5 = local_78[2];
      *(ulong *)(local_78[2] + 0x10) = uVar11 + 1;
      *(undefined **)(local_78[2] + uVar11 * 0x10 + 0x20) = puVar8;
      *(undefined **)(local_78[2] + uVar11 * 0x10 + 0x28) = puVar4;
      uVar11 = uVar1;
    } while (uVar15 != uVar1);
    puVar8 = &DAT_100102c38;
    local_78[0] = local_78[2];
    FUN_10000eb08(&DAT_100102c38,&DAT_1000d1b90);
    puVar9 = &DAT_100102c40;
    FUN_10002cf3c(&DAT_100102c40,&DAT_100102c38,&DAT_1000d1b90,PTR___sSayxGSKsMc_1000f0378);
    uVar10 = 10;
    uVar12 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar8,puVar9);
    _swift_release(puVar5);
  }
  auVar16._8_8_ = uVar12;
  auVar16._0_8_ = uVar10;
  return auVar16;
}

