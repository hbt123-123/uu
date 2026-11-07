// rea decompile_all
// name: FUN_100617950
// address: 0x100617950
// body: available
// range: 0x100617950-0x100617a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_100617950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  
  puVar2 = &DAT_100aaffc0;
  local_78 = param_3;
  local_70 = param_4;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar8 = *(long *)(puVar2 + -8);
  lVar5 = *(long *)(lVar8 + 0x40);
  uVar3 = param_6;
  FUN_10061601c();
  FUN_100607210(param_2,auStack_80 + -(lVar5 + 0xfU & 0xfffffffffffffff0));
  uVar4 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar4 + 0x30 & (uVar4 ^ 0xffffffffffffffff);
  uVar6 = lVar5 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar2 = &DAT_1009dff08;
  _swift_allocObject(&DAT_1009dff08,uVar6 + 0x18,uVar4 | 7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  *(long *)(puVar2 + 0x20) = param_7;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  FUN_100607324(auStack_80 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar2 + uVar9);
  uVar1 = local_70;
  *(undefined8 *)(puVar2 + uVar6) = uVar3;
  *(undefined8 *)(puVar2 + uVar6 + 8) = local_78;
  *(undefined8 *)((long)(puVar2 + uVar6 + 8) + 8) = local_70;
  pcVar7 = *(code **)(param_7 + 0x10);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  (*pcVar7)(FUN_10061b9dc,puVar2,param_5,param_7);
  _swift_release(puVar2);
  return uVar3;
}

