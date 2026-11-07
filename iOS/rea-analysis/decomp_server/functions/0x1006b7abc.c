// rea decompile_all
// name: FUN_1006b7abc
// address: 0x1006b7abc
// body: available
// range: 0x1006b7abc-0x1006b7bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1006b7abc(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  long local_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined8 local_e0;
  int local_d8;
  uint uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar10 = param_1;
  if (0 < param_1) {
    iVar10 = 1;
  }
  iVar11 = -iVar10;
  puVar9 = (undefined1 *)0x0;
  do {
    iVar3 = 3;
    if (iVar10 != 0) {
      iVar3 = iVar10;
    }
    iVar2 = 0;
    if (-1 < iVar10) {
      iVar2 = iVar3;
    }
    iVar3 = 0x16;
    if (iVar10 < 0x17) {
      iVar3 = iVar2;
    }
    lVar7 = (long)iVar3 * 0x1c;
    uVar4 = *(uint *)(&DAT_10084eb60 + lVar7);
    uVar6 = *(uint *)(&DAT_10084eb68 + lVar7);
    local_e0 = *(undefined8 *)(&DAT_10084eb6c + lVar7);
    uVar5 = *(uint *)(&DAT_10084eb78 + lVar7);
    iVar3 = iVar11;
    if (-1 < iVar10) {
      iVar3 = *(int *)(&DAT_10084eb74 + lVar7);
    }
    if (uVar4 + 1 <= uVar6) {
      uVar6 = uVar4 + 1;
    }
    uVar1 = uVar4;
    if (5 < uVar5) {
      uVar1 = uVar4 + 1;
    }
    if (*(uint *)(&DAT_10084eb64 + lVar7) - (uint)(5 < uVar5) <= uVar4) {
      uVar1 = *(uint *)(&DAT_10084eb64 + lVar7);
    }
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    if (uVar4 < 0xb) {
      uVar4 = 10;
    }
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    local_f0 = (ulong)uVar4 << 0x20;
    _uStack_e8 = CONCAT44(uVar6,uVar1);
    _local_d8 = CONCAT44(uVar5,iVar3);
    uStack_c8 = 0x300000000;
    local_d0 = 1;
    plVar8 = &local_f0;
    FUN_1006b7908();
    if (plVar8 <= puVar9) {
      plVar8 = (long *)puVar9;
    }
    iVar10 = iVar10 + 1;
    iVar11 = iVar11 + -1;
    puVar9 = (undefined1 *)plVar8;
  } while (param_1 + 1 != iVar10);
  return (undefined1 *)plVar8;
}

