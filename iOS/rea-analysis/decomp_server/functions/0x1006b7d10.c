// rea decompile_all
// name: FUN_1006b7d10
// address: 0x1006b7d10
// body: available
// range: 0x1006b7d10-0x1006b7e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1006b7d10(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  long local_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 local_110;
  int local_108;
  uint uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint local_84 [9];
  
  puVar12 = (undefined1 *)0x0;
  iVar13 = param_1;
  if (0 < param_1) {
    iVar13 = 1;
  }
  iVar14 = -iVar13;
  do {
    iVar3 = 3;
    if (iVar13 != 0) {
      iVar3 = iVar13;
    }
    iVar2 = 0;
    if (-1 < iVar13) {
      iVar2 = iVar3;
    }
    iVar3 = 0x16;
    if (iVar13 < 0x17) {
      iVar3 = iVar2;
    }
    lVar8 = (long)iVar3 * 0x1c;
    uVar5 = *(uint *)(&DAT_10084eb60 + lVar8);
    uVar7 = *(uint *)(&DAT_10084eb68 + lVar8);
    local_110 = *(undefined8 *)(&DAT_10084eb6c + lVar8);
    uVar6 = *(uint *)(&DAT_10084eb78 + lVar8);
    iVar3 = iVar14;
    if (-1 < iVar13) {
      iVar3 = *(int *)(&DAT_10084eb74 + lVar8);
    }
    if (uVar5 + 1 <= uVar7) {
      uVar7 = uVar5 + 1;
    }
    uVar1 = uVar5;
    if (5 < uVar6) {
      uVar1 = uVar5 + 1;
    }
    if (*(uint *)(&DAT_10084eb64 + lVar8) - (uint)(5 < uVar6) <= uVar5) {
      uVar1 = *(uint *)(&DAT_10084eb64 + lVar8);
    }
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    if (uVar5 < 0xb) {
      uVar5 = 10;
    }
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    local_120 = (ulong)uVar5 << 0x20;
    _uStack_118 = CONCAT44(uVar7,uVar1);
    _local_108 = CONCAT44(uVar6,iVar3);
    uStack_f8 = 0x300000000;
    local_100 = 1;
    FUN_1006b7620(local_84,&local_120,0,0);
    plVar9 = &local_120;
    FUN_1006b7908();
    uVar10 = 1L << ((ulong)local_84[0] & 0x3f);
    uVar4 = uVar10;
    if (0x1ffff < uVar10) {
      uVar4 = 0x20000;
    }
    uVar11 = 0x20000 - uVar4 >> 0xb;
    if (0x10 < local_84[0]) {
      uVar11 = 0;
    }
    lVar8 = uVar11 + uVar4 * 2 + (uVar4 >> 8) + uVar10;
    if (puVar12 < (undefined1 *)((long)plVar9 + lVar8 + 1)) {
      puVar12 = (undefined1 *)((long)plVar9 + lVar8 + 1);
    }
    iVar13 = iVar13 + 1;
    iVar14 = iVar14 + -1;
  } while (param_1 + 1 != iVar13);
  return puVar12;
}

