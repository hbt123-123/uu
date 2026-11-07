// rea decompile_all
// name: FUN_10050fa14
// address: 0x10050fa14
// body: available
// range: 0x10050fa14-0x10050fb8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050fa14(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d0 [32];
  long *local_b0 [3];
  undefined8 local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar10 = *param_1;
  lVar8 = *(long *)(lVar10 + 0x60);
  uVar5 = *(undefined8 *)(lVar10 + 0x50);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,lVar8,uVar5,0x100900cc4,&TargetProtocolRequirement_100900cdc);
  lVar6 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar6 + 0x40);
  lVar9 = param_1[2];
  uVar11 = *(undefined8 *)(lVar10 + 0x58);
  local_70 = *(undefined8 *)(param_3 + 8);
  uVar2 = 0;
  local_88 = uVar5;
  uStack_80 = uVar11;
  local_78 = lVar8;
  FUN_100541da4(0,&local_88);
  ppuStack_90 = &PTR_PTR_1009d0c40;
  local_b0[0] = param_1;
  local_98 = uVar2;
  (**(code **)(lVar6 + 0x10))(auStack_e0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_2,lVar1);
  pcVar7 = *(code **)(lVar8 + 0x38);
  local_68 = *(undefined8 *)(lVar8 + 0x10);
  puVar3 = &local_88;
  local_70 = uVar5;
  FUN_1000efc08(puVar3);
  _swift_retain(param_1);
  (*pcVar7)(puVar3,local_b0,auStack_e0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),uVar5,lVar8);
  pcVar7 = (code *)auStack_d0;
  (**(code **)(param_3 + 0x20))(pcVar7,uVar11,param_3);
  FUN_10050fb8c(&local_88,local_b0);
  FUN_10050f90c(local_b0,lVar9);
  FUN_100040bb4(&local_88,&DAT_100aaa288,&DAT_100836090);
  (*pcVar7)(auStack_d0,0);
  return;
}

