// rea decompile_all
// name: FUN_100446280
// address: 0x100446280
// body: available
// range: 0x100446280-0x10044647f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004463dc) */

void FUN_100446280(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  ulong uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulong *puVar14;
  long unaff_x21;
  code *pcVar15;
  ulong uVar16;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  
  local_68 = 0;
  local_78 = 2;
  uStack_70 = 0;
  bVar11 = ((param_1[3] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  bVar12 = param_1[4] >> 0x21 == 0x3fffffff;
  bVar13 = param_1[5] >> 0x21 == 0;
  bVar9 = *(byte *)((long)param_1 + 0x34) >> 1 == 0;
  puVar14 = param_1;
  if (*(byte *)((long)param_1 + 0x34) >> 6 == 2 && (((!bVar11 || !bVar12) || !bVar13) || !bVar9)) {
    uVar1 = param_1[1];
    uVar5 = param_1[2];
    uVar16 = *param_1;
    FUN_10017ac64(uVar16,uVar1,uVar5);
    puVar14 = (ulong *)0x2;
    FUN_10044a1b4(2,0,0);
    local_78 = uVar16 & 1;
    uStack_70 = uVar1;
    local_68 = uVar5;
  }
  pcVar15 = *(code **)(param_4 + 0x198);
  FUN_10044875c();
  (*pcVar15)(&local_78,&DAT_1009c15d8,puVar14,param_3,param_4);
  uVar16 = local_68;
  uVar5 = uStack_70;
  uVar1 = local_78;
  if ((unaff_x21 == 0) && ((local_78 & 0xff) != 2)) {
    if (((bVar11 && bVar12) && bVar13) && bVar9) {
      FUN_100008184(uStack_70,local_68);
    }
    else {
      pcVar15 = *(code **)(param_4 + 8);
      FUN_100008184(uStack_70,local_68);
      (*pcVar15)(param_3,param_4);
    }
    FUN_10044a1b4(local_78,uStack_70,local_68);
    uVar2 = *param_1;
    uVar6 = param_1[1];
    uVar3 = param_1[2];
    uVar7 = param_1[3];
    uVar4 = param_1[4];
    uVar8 = param_1[5];
    uVar10 = param_1[6];
    *param_1 = uVar1 & 1;
    param_1[1] = uVar5;
    param_1[2] = uVar16;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined1 *)((long)param_1 + 0x34) = 0x80;
    FUN_1000407fc(uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,(ulong)(uint5)uVar10);
  }
  else {
    FUN_10044a1b4(local_78,uStack_70,local_68);
  }
  return;
}

