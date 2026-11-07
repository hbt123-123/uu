// rea decompile_all
// name: FUN_100118604
// address: 0x100118604
// body: available
// range: 0x100118604-0x10011878b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100118604(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_f0 [2];
  undefined4 local_ee;
  undefined2 local_ea;
  undefined7 local_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_9f;
  undefined8 uStack_97;
  char local_8f;
  undefined4 local_8e;
  undefined2 local_8a;
  undefined8 local_88;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  cVar6 = param_2[0x31];
  if (cVar6 == '\x05') {
    FUN_100117638();
    lVar4 = lVar3;
    FUN_1001174f8();
    cVar6 = (char)lVar4;
    _swift_release(lVar3);
    if (((uint)lVar4 & 0xff) == 5) {
      cVar6 = '\0';
      uVar7 = 6;
      goto LAB_1001186bc;
    }
  }
  uVar7 = *(undefined4 *)(&DAT_10080dff0 + (long)cVar6 * 4);
LAB_1001186bc:
  uVar1 = *param_2;
  uVar9 = *(undefined8 *)(param_2 + 8);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  local_d8 = *(undefined8 *)(param_2 + 0x18);
  local_d0 = param_2[0x20];
  uStack_e1 = (undefined1)*(undefined8 *)(param_2 + 0x28);
  uStack_e0 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x28) >> 8);
  uStack_d9 = param_2[0x30];
  __s10Foundation4DateVACycfC(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar8 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  local_a8 = local_d8;
  local_a0 = local_d0;
  uStack_97 = CONCAT17(uStack_d9,uStack_e0);
  local_9f = CONCAT17(uStack_e1,local_e8);
  local_8e = local_ee;
  local_8a = local_ea;
  puVar5 = local_c0;
  local_c0[0] = uVar1;
  local_b8 = uVar9;
  uStack_b0 = uVar10;
  local_8f = cVar6;
  local_88 = param_1;
  FUN_1001177b4(puVar5,uVar7);
  return (uint)puVar5 & 1;
}

