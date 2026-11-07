// rea decompile_all
// name: FUN_10035928c
// address: 0x10035928c
// body: available
// range: 0x10035928c-0x1003593a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10035928c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             code *param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  code *local_68;
  
  uVar5 = *unaff_x20;
  lVar6 = *(long *)(param_2 + -8);
  lVar2 = *(long *)(lVar6 + 0x40);
  local_68 = param_6;
  _swift_unownedRetainStrong();
  _swift_unownedRetain();
  _swift_unownedRetain();
  _swift_release();
  (**(code **)(lVar6 + 0x10))(auStack_70 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_1,param_2);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar4 = uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff);
  uVar3 = lVar2 + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_allocObject(param_4,uVar3 + 8,uVar1 | 7);
  *(long *)(param_4 + 0x10) = param_2;
  *(undefined8 *)(param_4 + 0x18) = param_3;
  *(undefined8 **)(param_4 + 0x20) = unaff_x20;
  (**(code **)(lVar6 + 0x20))
            (param_4 + uVar4,auStack_70 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_2);
  *(undefined8 *)(param_4 + uVar3) = uVar5;
  (*local_68)(param_5,param_4);
  _swift_retain();
  _swift_unownedRelease();
  _swift_release(param_4);
  return param_5;
}

