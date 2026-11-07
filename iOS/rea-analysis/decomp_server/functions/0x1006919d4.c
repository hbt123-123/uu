// rea decompile_all
// name: thunk_FUN_10068573c
// address: 0x1006919d4
// body: available
// range: 0x1006919d4-0x1006919d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10068573c(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined7 uStack_148;
  undefined1 uStack_141;
  byte bStack_140;
  byte bStack_13f;
  byte bStack_13e;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  long lStack_118;
  byte abStack_110 [48];
  byte abStack_e0 [64];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined7 uStack_78;
  uint uStack_71;
  
  lStack_178 = *(long *)(param_2 + 0x10);
  bVar7 = *(byte *)((long)unaff_x20 + 0x32);
  bVar6 = *(byte *)((long)unaff_x20 + 0x31);
  bVar9 = *(byte *)(unaff_x20 + 6);
  uVar1 = unaff_x20[4];
  uVar10 = unaff_x20[5];
  uVar3 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar5 = *unaff_x20;
  uVar11 = unaff_x20[1];
  if (lStack_178 == 0) {
    FUN_10068e538();
  }
  else {
    param_2 = param_2 + 0x20;
    FUN_10068e538();
    bStack_13e = bVar7;
    do {
      uStack_148 = (undefined7)uVar10;
      uStack_141 = (undefined1)((ulong)uVar10 >> 0x38);
      bStack_140 = bVar9 & 1;
      uStack_71 = CONCAT13(bStack_13e,CONCAT12(bVar6,CONCAT11(bVar9,uStack_141))) & 0xffff01ff;
      uStack_170 = uVar5;
      uStack_168 = uVar11;
      uStack_160 = uVar3;
      uStack_158 = uVar4;
      uStack_150 = uVar1;
      bStack_13f = bVar6;
      uStack_a0 = uVar5;
      uStack_98 = uVar11;
      uStack_90 = uVar3;
      uStack_88 = uVar4;
      uStack_80 = uVar1;
      uStack_78 = uStack_148;
      FUN_1000b142c(param_2,auStack_138);
      lVar2 = lStack_118;
      uVar1 = uStack_120;
      FUN_10003f030(auStack_138,uStack_120);
      (**(code **)(lVar2 + 8))(uVar1,lVar2);
      if ((param_4 & 1) == 0) {
        pbVar8 = abStack_110;
        FUN_100684c6c(abStack_110);
        FUN_10068e548(&uStack_170);
      }
      else {
        pbVar8 = abStack_e0 + 8;
        FUN_100685170(abStack_e0 + 8);
        FUN_10068e548(&uStack_170);
        param_4 = 1;
        FUN_10068e56c(uVar1,lVar2);
      }
      bVar7 = pbVar8[0x32];
      bVar6 = pbVar8[0x31];
      bVar9 = pbVar8[0x30];
      uVar1 = *(undefined8 *)(pbVar8 + 0x20);
      uVar10 = *(undefined8 *)(pbVar8 + 0x28);
      uVar3 = *(undefined8 *)(pbVar8 + 0x10);
      uVar4 = *(undefined8 *)(pbVar8 + 0x18);
      uVar5 = *(undefined8 *)pbVar8;
      uVar11 = *(undefined8 *)(pbVar8 + 8);
      FUN_10003f094(auStack_138);
      param_2 = param_2 + 0x28;
      lStack_178 = lStack_178 + -1;
      bStack_13e = bVar7;
    } while (lStack_178 != 0);
  }
  *param_1 = uVar5;
  param_1[1] = uVar11;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar1;
  param_1[5] = uVar10;
  *(byte *)(param_1 + 6) = bVar9;
  *(byte *)((long)param_1 + 0x31) = bVar6;
  *(byte *)((long)param_1 + 0x32) = bVar7;
  return;
}

