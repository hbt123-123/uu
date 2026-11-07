// rea decompile_all
// name: FUN_10019e3d8
// address: 0x10019e3d8
// body: available
// range: 0x10019e3d8-0x10019e4c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019e3d8(undefined8 *param_1,char param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_e8 [88];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char local_40;
  
  lVar1 = *(long *)(param_3 + 0x10);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(param_3 + 0x20);
    do {
      cVar3 = *(char *)(puVar2 + 10);
      uVar9 = puVar2[5];
      uVar8 = puVar2[4];
      uVar11 = puVar2[7];
      uVar10 = puVar2[6];
      uVar13 = puVar2[9];
      uVar12 = puVar2[8];
      uVar6 = puVar2[1];
      uVar4 = *puVar2;
      uVar7 = puVar2[3];
      uVar5 = puVar2[2];
      if (*(long *)(&DAT_100810b38 + (long)cVar3 * 8) ==
          *(long *)(&DAT_100810b38 + (long)param_2 * 8)) {
        local_90 = uVar4;
        uStack_88 = uVar6;
        local_80 = uVar5;
        uStack_78 = uVar7;
        local_70 = uVar8;
        uStack_68 = uVar9;
        local_60 = uVar10;
        uStack_58 = uVar11;
        uStack_50 = uVar12;
        uStack_48 = uVar13;
        local_40 = cVar3;
        FUN_100082c4c(&local_90,auStack_e8);
        goto LAB_10019e4a0;
      }
      puVar2 = puVar2 + 0xb;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  cVar3 = '\0';
  uVar5 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar4 = 0;
  uVar6 = 0;
LAB_10019e4a0:
  param_1[1] = uVar6;
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar5;
  param_1[5] = uVar9;
  param_1[4] = uVar8;
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  param_1[9] = uVar13;
  param_1[8] = uVar12;
  *(char *)(param_1 + 10) = cVar3;
  return;
}

