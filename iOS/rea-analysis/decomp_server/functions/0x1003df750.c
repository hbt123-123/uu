// rea decompile_all
// name: FUN_1003df750
// address: 0x1003df750
// body: available
// range: 0x1003df750-0x1003df8b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003df750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_a0 = param_11;
  local_98 = param_12;
  local_a8 = param_10;
  lVar8 = *unaff_x20;
  lVar4 = 0;
  local_b0 = param_2;
  local_90 = param_8;
  local_88 = param_9;
  local_80 = param_1;
  uStack_78 = param_3;
  local_70 = param_4;
  uStack_68 = param_5;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(lVar8 + 0x50);
  lVar8 = *(long *)(lVar8 + 0x58);
  uVar5 = uVar1;
  lVar7 = lVar8;
  (**(code **)(lVar8 + 8))(lVar9);
  __s10Foundation3URLV4hostSSSgvg();
  (**(code **)(lVar11 + 8))(lVar9,lVar4);
  puVar6 = &DAT_1009ba888;
  _swift_allocObject(&DAT_1009ba888,0x68,7);
  uVar3 = local_88;
  uVar2 = local_90;
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = local_a8;
  *(long *)(puVar6 + 0x20) = lVar8;
  *(undefined8 *)(puVar6 + 0x28) = local_a0;
  *(undefined8 *)(puVar6 + 0x30) = local_98;
  *(undefined8 *)(puVar6 + 0x38) = param_6;
  *(undefined8 *)(puVar6 + 0x40) = param_7;
  *(undefined8 *)(puVar6 + 0x48) = uVar5;
  *(long *)(puVar6 + 0x50) = lVar7;
  *(undefined8 *)(puVar6 + 0x58) = local_90;
  *(undefined8 *)(puVar6 + 0x60) = local_88;
  pcVar10 = *(code **)(*unaff_x20 + 0xd8);
  FUN_10004090c(param_6,param_7);
  FUN_10004090c(uVar2,uVar3);
  (*pcVar10)(local_80,local_b0,uStack_78,local_70,uStack_68,FUN_1003e2594,puVar6);
  _swift_release(puVar6);
  return;
}

