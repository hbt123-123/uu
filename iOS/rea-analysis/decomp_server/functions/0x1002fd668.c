// rea decompile_all
// name: FUN_1002fd668
// address: 0x1002fd668
// body: available
// range: 0x1002fd668-0x1002fd7bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_1002fd668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_78 = *unaff_x20;
  lVar7 = *(long *)(param_5 + -8);
  lVar3 = *(long *)(lVar7 + 0x40);
  lVar5 = (long)&local_80 - (lVar3 + 0xfU & 0xfffffffffffffff0);
  local_80 = param_6;
  local_70 = param_3;
  uStack_68 = param_4;
  _swift_unownedRetainStrong();
  _swift_unownedRetain();
  _swift_unownedRetain();
  _swift_release();
  (**(code **)(lVar7 + 0x10))(lVar5,param_1,param_5);
  uVar2 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  uVar4 = lVar3 + uVar6 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_1009af720;
  _swift_allocObject(&DAT_1009af720,uVar4 + 0x20,uVar2 | 7);
  *(long *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = local_80;
  *(undefined8 **)(puVar1 + 0x20) = unaff_x20;
  (**(code **)(lVar7 + 0x20))(puVar1 + uVar6,lVar5,param_5);
  *(undefined8 *)(puVar1 + uVar4) = param_2;
  *(undefined8 *)(puVar1 + uVar4 + 8) = local_70;
  *(undefined8 *)((long)(puVar1 + uVar4 + 8) + 8) = uStack_68;
  *(undefined8 *)(puVar1 + uVar4 + 0x18) = local_78;
  _swift_retain(uStack_68);
  FUN_10030072c(param_2,FUN_1003006c0,puVar1);
  _swift_retain();
  _swift_unownedRelease();
  _swift_release(puVar1);
  return param_2;
}

