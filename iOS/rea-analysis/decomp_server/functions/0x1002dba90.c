// rea decompile_all
// name: FUN_1002dba90
// address: 0x1002dba90
// body: available
// range: 0x1002dba90-0x1002dbc5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002dba90(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  long local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  uVar2 = *(undefined8 *)(param_4 + 0x18);
  uVar4 = *(undefined8 *)(param_4 + 0x20);
  lVar8 = 0;
  local_90 = param_5;
  local_88 = param_2;
  local_80 = param_3;
  local_78 = param_1;
  __ss6ResultOMa(0,param_5,uVar2,uVar4);
  lVar8 = *(long *)(*(long *)(lVar8 + -8) + 0x40);
  puVar9 = &DAT_100a83428;
  local_98 = auStack_b0 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar8 = (long)(auStack_b0 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100a82c30;
  local_a0 = lVar8;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar11 = lVar8 - (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314();
  local_a8 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x2c));
  FUN_10007f314(unaff_x20 + *(int *)(param_4 + 0x30),lVar8,&DAT_100a83428,&DAT_100817bb0);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x34));
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  uVar12 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x38));
  uVar13 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x3c));
  FUN_10010bd10(uVar3,uVar5);
  uVar10 = 0;
  __ss6ResultOMa(0,*(undefined8 *)(param_4 + 0x10),uVar2,uVar4);
  uVar7 = local_90;
  puVar6 = local_98;
  FUN_1002daa68(local_98,local_88,local_80,uVar10,local_90);
  *(undefined8 *)(lVar11 + -0x10) = uVar2;
  *(undefined8 *)(lVar11 + -8) = uVar4;
  FUN_1002d9d20(local_78,uVar13,lVar11,local_a8,local_a0,uVar3,uVar5,uVar12,puVar6,uVar7);
  return;
}

