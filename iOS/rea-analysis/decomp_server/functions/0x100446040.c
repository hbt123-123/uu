// rea decompile_all
// name: FUN_100446040
// address: 0x100446040
// body: available
// range: 0x100446040-0x10044627f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004461b8) */

void FUN_100446040(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  uint5 uVar12;
  bool bVar13;
  uint5 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined8 *puVar18;
  long unaff_x21;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  ulong uStack_70;
  undefined4 local_68;
  byte local_64;
  
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0xf000000000000000;
  local_64 = 0;
  local_68 = 0;
  uVar1 = param_1[3];
  uVar6 = param_1[4];
  bVar11 = *(byte *)((long)param_1 + 0x34);
  bVar15 = ((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  bVar16 = uVar6 >> 0x21 == 0x3fffffff;
  bVar17 = (ulong)param_1[5] >> 0x21 == 0;
  bVar13 = bVar11 >> 1 == 0;
  puVar18 = param_1;
  if (bVar11 >> 6 == 1 && (((!bVar15 || !bVar16) || !bVar17) || !bVar13)) {
    uVar2 = param_1[1];
    uVar7 = param_1[2];
    uVar19 = *param_1;
    FUN_10017ac64(uVar19,uVar2,uVar7,uVar1,uVar6,param_1[5],
                  (ulong)CONCAT14(bVar11,*(undefined4 *)(param_1 + 6)));
    puVar18 = (undefined8 *)0x0;
    FUN_1004337cc(0,0,0,0xf000000000000000,0);
    uStack_80 = uVar2 & 0xffffffff00000001;
    local_64 = (byte)(uVar6 >> 0x20) & 1;
    local_68 = (undefined4)uVar6;
    local_88 = uVar19;
    local_78 = uVar7;
    uStack_70 = uVar1;
  }
  pcVar20 = *(code **)(param_4 + 0x198);
  FUN_100448564();
  (*pcVar20)(&local_88,&DAT_1009c1440,puVar18,param_3,param_4);
  uVar6 = uStack_70;
  uVar19 = local_78;
  uVar1 = uStack_80;
  uVar7 = local_88;
  uVar14 = CONCAT14(local_64,local_68);
  if ((unaff_x21 == 0) && (uStack_70 >> 0x3c < 0xf)) {
    if (((bVar15 && bVar16) && bVar17) && bVar13) {
      FUN_100008184(local_78,uStack_70);
    }
    else {
      pcVar20 = *(code **)(param_4 + 8);
      FUN_100008184(local_78,uStack_70);
      (*pcVar20)(param_3,param_4);
    }
    FUN_1004337cc(local_88,uStack_80,local_78,uStack_70,(ulong)CONCAT14(local_64,local_68));
    uVar3 = *param_1;
    uVar8 = param_1[1];
    uVar4 = param_1[2];
    uVar9 = param_1[3];
    uVar5 = param_1[4];
    uVar10 = param_1[5];
    uVar12 = *(uint5 *)(param_1 + 6);
    *param_1 = uVar7;
    param_1[1] = uVar1 & 0xffffffff00000001;
    param_1[2] = uVar19;
    param_1[3] = uVar6;
    param_1[4] = (ulong)uVar14 & 0x1ffffffff;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined1 *)((long)param_1 + 0x34) = 0x40;
    FUN_1000407fc(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,(ulong)uVar12);
  }
  else {
    FUN_1004337cc(local_88,uStack_80,local_78,uStack_70,(ulong)uVar14);
  }
  return;
}

