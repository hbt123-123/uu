// rea decompile_all
// name: FUN_1005b8c58
// address: 0x1005b8c58
// body: available
// range: 0x1005b8c58-0x1005b8e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005b8c58(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  byte local_88;
  ulong local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 local_70;
  undefined7 uStack_6f;
  byte local_68;
  ulong uVar9;
  
  uVar10 = *param_1;
  uStack_78 = (undefined1)param_1[1];
  uStack_6f = (undefined7)*(undefined8 *)((long)param_1 + 0x11);
  local_68 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x11) >> 0x38);
  bVar5 = local_68;
  uStack_77 = (undefined7)*(undefined8 *)((long)param_1 + 9);
  local_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 9) >> 0x38);
  uVar11 = *param_2;
  uStack_98 = (undefined1)param_2[1];
  uStack_8f = (undefined7)*(undefined8 *)((long)param_2 + 0x11);
  local_88 = (byte)((ulong)*(undefined8 *)((long)param_2 + 0x11) >> 0x38);
  bVar4 = local_88;
  uStack_97 = (undefined7)*(undefined8 *)((long)param_2 + 9);
  local_90 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 9) >> 0x38);
  uVar2 = CONCAT71(uStack_77,uStack_78);
  uVar3 = CONCAT71(uStack_6f,local_70);
  uVar1 = CONCAT71(uStack_97,uStack_98);
  uVar9 = CONCAT71(uStack_8f,local_90);
  bVar6 = ((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  local_a0 = uVar11;
  local_80 = uVar10;
  if ((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (local_68 == 0xff)) {
    if (bVar6 && local_88 == 0xff) {
      FUN_10007f314(&local_80,auStack_c0,&DAT_100aab488,&DAT_10083d620);
      FUN_10007f314(&local_a0,auStack_c0,&DAT_100aab488,&DAT_10083d620);
      FUN_10051ff3c(uVar10,uVar2,uVar3,0xff);
LAB_1005b8e2c:
      uVar9 = param_1[4];
      FUN_1000094a4(uVar9,param_1[5],param_2[4],param_2[5]);
      uVar7 = (uint)uVar9;
      goto LAB_1005b8e38;
    }
LAB_1005b8d34:
    FUN_10007f314(&local_80,auStack_c0,&DAT_100aab488,&DAT_10083d620);
    FUN_10007f314(&local_a0,auStack_c0,&DAT_100aab488,&DAT_10083d620);
    FUN_10051ff3c(uVar10,uVar2,uVar3,bVar5);
    FUN_10051ff3c(uVar11,uVar1,uVar9,bVar4);
  }
  else {
    if (bVar6 && local_88 == 0xff) goto LAB_1005b8d34;
    FUN_10007f314(&local_80,auStack_c0,&DAT_100aab488,&DAT_10083d620);
    FUN_10007f314(&local_a0,auStack_c0,&DAT_100aab488,&DAT_10083d620);
    uVar8 = uVar10;
    FUN_1005b8ac8(uVar10,uVar2,uVar3,bVar5 & 1,uVar11,uVar1,uVar9,bVar4 & 1);
    FUN_10051ff3c(uVar11,uVar1,uVar9,bVar4);
    FUN_10051ff3c(uVar10,uVar2,uVar3,bVar5);
    if ((uVar8 & 1) != 0) goto LAB_1005b8e2c;
  }
  uVar7 = 0;
LAB_1005b8e38:
  return uVar7 & 1;
}

