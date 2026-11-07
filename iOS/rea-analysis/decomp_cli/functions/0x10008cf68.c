// rea decompile_all
// name: FUN_10008cf68
// address: 0x10008cf68
// body: available
// range: 0x10008cf68-0x10008d093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008cf68(undefined8 *param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_e0 [64];
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_3,auStack_58,1,0);
  uVar7 = *(ulong *)(param_3 + 0x10);
  uVar5 = *(ulong *)(param_3 + 0x18) >> 1;
  lVar4 = uVar5 - uVar7;
  if (lVar4 != 0) {
    uVar2 = uVar7;
    if ((long)uVar7 <= (long)uVar5) {
      uVar2 = uVar5;
    }
    lVar6 = uVar2 - uVar7;
    lVar8 = uVar7 << 6;
    do {
      uVar7 = uVar7 + 1;
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10008d094);
        (*pcVar3)();
      }
      puVar1 = (undefined8 *)(*(long *)(param_3 + 8) + lVar8);
      uVar10 = puVar1[3];
      uVar5 = puVar1[2];
      uVar12 = puVar1[5];
      uVar11 = puVar1[4];
      uVar15 = puVar1[1];
      uVar14 = *puVar1;
      uStack_6f = (undefined7)*(undefined8 *)((long)puVar1 + 0x31);
      uStack_68 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x31) >> 0x38);
      uVar9 = uStack_68;
      uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x29) >> 0x38);
      uStack_78 = (undefined1)uVar12;
      local_77 = (undefined7)((ulong)uVar12 >> 8);
      *(ulong *)(param_3 + 0x10) = uVar7;
      local_a0 = uVar14;
      uStack_98 = uVar15;
      local_90 = uVar5;
      local_88 = uVar10;
      uStack_80 = uVar11;
      if (((uVar5 & 0x6000000000000000) == 0x2000000000000000) || ((param_2 & 1) != 0)) {
        uVar13 = CONCAT71(uStack_6f,uStack_70);
        FUN_10008efe8(&local_a0,auStack_e0);
        goto LAB_10008d064;
      }
      lVar6 = lVar6 + -1;
      lVar8 = lVar8 + 0x40;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar5 = 0x7ffffff3e;
  uVar14 = 0;
  uVar15 = 0;
LAB_10008d064:
  param_1[1] = uVar15;
  *param_1 = uVar14;
  param_1[2] = uVar5;
  param_1[4] = uVar11;
  param_1[3] = uVar10;
  param_1[6] = uVar13;
  param_1[5] = uVar12;
  *(undefined1 *)(param_1 + 7) = uVar9;
  return;
}

