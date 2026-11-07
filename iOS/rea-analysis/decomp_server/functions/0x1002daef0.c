// rea decompile_all
// name: FUN_1002daef0
// address: 0x1002daef0
// body: available
// range: 0x1002daef0-0x1002db087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002daef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 auStack_b0 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  uVar7 = *(undefined8 *)(param_4 + 0x10);
  puVar4 = &DAT_100a82488;
  local_a0 = param_2;
  uStack_98 = param_3;
  local_88 = param_5;
  uStack_80 = param_6;
  local_78 = param_1;
  FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
  lVar5 = 0;
  local_90 = puVar4;
  __ss6ResultOMa(0,uVar7,puVar4,PTR___ss5ErrorWS_100995c48);
  lVar10 = (long)&local_a0 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar5 = lVar10 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314();
  uVar8 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x2c));
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x30));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar9 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x34));
  uVar11 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x38));
  FUN_10010bd10(uVar2,uVar3);
  uVar6 = 0;
  __ss6ResultOMa(0,uVar7,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20));
  FUN_100311b84(lVar10,local_a0,uStack_98,uVar6,local_88,uStack_80);
  *(undefined **)(lVar5 + -0x10) = PTR___ss5ErrorWS_100995c48;
  FUN_1002d9af4(local_78,uVar11,lVar5,uVar8,uVar2,uVar3,uVar9,lVar10,uVar7,local_90);
  return;
}

