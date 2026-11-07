// rea decompile_all
// name: FUN_100217bc4
// address: 0x100217bc4
// body: available
// range: 0x100217bc4-0x100217d03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100217bc4(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  iVar4 = (int)&local_c0;
  puVar5 = &local_c0;
  puVar6 = (uint *)&local_c0;
  puVar7 = &local_c0;
  uStack_58 = param_1[0xd];
  local_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  local_40 = *(undefined1 *)(param_1 + 0x10);
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  local_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  FUN_1001241ec();
  if (iVar4 == 8) {
    FUN_100124204();
    lVar10 = *(long *)((long)puVar7 + 0x20);
    uVar8 = *(undefined8 *)((long)puVar7 + 0x28);
    uVar9 = *(ulong *)((long)puVar7 + 0x30);
    uVar11 = uVar9 >> 0x3c;
    uVar12 = 2;
    if (uVar11 < 0xf) {
      uVar12 = lVar10 << 0x20 | 2;
    }
  }
  else {
    if (iVar4 == 3) {
      FUN_100124204();
      uVar11 = *(ulong *)(puVar6 + 0xe) >> 0x3c;
      uVar12 = 1;
      if (uVar11 < 0xf) {
        uVar12 = (*(long *)(puVar6 + 10) << 0x20) + 1;
      }
      uVar8 = 0;
      if (uVar11 < 0xf) {
        uVar8 = *(undefined8 *)(puVar6 + 0xc);
      }
      uVar9 = 0xc000000000000000;
      if (uVar11 < 0xf) {
        uVar9 = *(ulong *)(puVar6 + 0xe);
      }
      uVar3 = *puVar6;
      FUN_100040b80(*(long *)(puVar6 + 10));
      FUN_100006cdc(uVar8,uVar9);
      uVar11 = (ulong)uVar3 << 0x20 | 0xffffffff;
      goto LAB_100217cec;
    }
    if (iVar4 != 2) {
      uVar11 = 0;
      uVar12 = 3;
      goto LAB_100217cec;
    }
    FUN_100124204();
    lVar10 = *(long *)((long)puVar5 + 0x20);
    uVar8 = *(undefined8 *)((long)puVar5 + 0x28);
    uVar9 = *(ulong *)((long)puVar5 + 0x30);
    uVar11 = uVar9 >> 0x3c;
    uVar12 = 0;
    if (uVar11 < 0xf) {
      uVar12 = lVar10 << 0x20;
    }
  }
  uVar1 = 0;
  if (uVar11 < 0xf) {
    uVar1 = uVar8;
  }
  uVar2 = 0xc000000000000000;
  if (uVar11 < 0xf) {
    uVar2 = uVar9;
  }
  FUN_100040b80(lVar10);
  FUN_100006cdc(uVar1,uVar2);
  uVar11 = 0xffffffffffffffff;
LAB_100217cec:
  auVar13._8_8_ = uVar11;
  auVar13._0_8_ = uVar12;
  return auVar13;
}

