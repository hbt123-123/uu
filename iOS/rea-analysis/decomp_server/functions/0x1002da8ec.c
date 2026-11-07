// rea decompile_all
// name: FUN_1002da8ec
// address: 0x1002da8ec
// body: available
// range: 0x1002da8ec-0x1002daa67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002da8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined8 auStack_b0 [2];
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  uVar2 = *(undefined8 *)(param_4 + 0x18);
  uVar4 = *(undefined8 *)(param_4 + 0x20);
  lVar7 = 0;
  local_90 = param_5;
  local_88 = param_2;
  local_80 = param_3;
  local_78 = param_1;
  __ss6ResultOMa(0,param_5,uVar2,uVar4);
  lVar11 = (long)&local_a0 - (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100a82c30;
  local_98 = lVar11;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar11 = lVar11 - (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314();
  local_a0 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x2c));
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x30));
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  uVar10 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x34));
  uVar12 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x38));
  FUN_10010bd10(uVar3,uVar5);
  uVar9 = 0;
  __ss6ResultOMa(0,*(undefined8 *)(param_4 + 0x10),uVar2,uVar4);
  uVar6 = local_90;
  lVar7 = local_98;
  FUN_1002daa68(local_98,local_88,local_80,uVar9,local_90);
  *(undefined8 *)(lVar11 + -0x10) = uVar4;
  FUN_1002d9af4(local_78,uVar12,lVar11,local_a0,uVar3,uVar5,uVar10,lVar7,uVar6,uVar2);
  return;
}

