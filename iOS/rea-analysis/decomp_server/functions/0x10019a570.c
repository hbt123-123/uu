// rea decompile_all
// name: FUN_10019a570
// address: 0x10019a570
// body: available
// range: 0x10019a570-0x10019a6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019a570(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_d0 [16];
  undefined8 *local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  local_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  local_98 = param_1[3];
  uVar9 = param_1[2];
  uStack_a0 = uVar9;
  __s10Foundation4DateVACycfC(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar8 + 8))(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar7);
  uVar6 = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x18) = local_98;
  *(undefined8 *)(param_2 + 0x20) = local_90;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_70;
  *(undefined8 *)(param_2 + 0x38) = local_78;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar6);
  FUN_10019ae7c(uVar9,uVar3,uVar1,uVar4,uVar2,uVar5);
  local_c0 = &local_b0;
  FUN_100004bb4(&DAT_100a7c610,&DAT_1008103c0);
  _swift_allocObject();
  FUN_100615648(FUN_10019b1e4,auStack_d0);
  return;
}

