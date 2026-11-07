// rea decompile_all
// name: FUN_100618898
// address: 0x100618898
// body: available
// range: 0x100618898-0x1006189db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_100618898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  
  puVar1 = &DAT_100aaffc0;
  local_78 = param_3;
  local_70 = param_4;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar7 = *(long *)(puVar1 + -8);
  lVar4 = *(long *)(lVar7 + 0x40);
  uVar2 = param_6;
  FUN_10061601c();
  FUN_100607210(param_2,auStack_80 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar3 + 0x30 & (uVar3 ^ 0xffffffffffffffff);
  uVar5 = lVar4 + uVar8 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_1009dff30;
  _swift_allocObject(&DAT_1009dff30,uVar5 + 0x18,uVar3 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(long *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  FUN_100607324(auStack_80 + -(lVar4 + 0xfU & 0xfffffffffffffff0),puVar1 + uVar8);
  *(undefined8 *)(puVar1 + uVar5) = local_78;
  *(undefined8 *)((long)(puVar1 + uVar5) + 8) = local_70;
  *(undefined8 *)(puVar1 + uVar5 + 0x10) = uVar2;
  pcVar6 = *(code **)(param_7 + 0x10);
  _swift_retain(local_70);
  _swift_retain(uVar2);
  (*pcVar6)(FUN_10061bb28,puVar1,param_5,param_7);
  _swift_release(puVar1);
  return uVar2;
}

