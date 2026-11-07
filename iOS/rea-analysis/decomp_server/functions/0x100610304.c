// rea decompile_all
// name: FUN_100610304
// address: 0x100610304
// body: available
// range: 0x100610304-0x10061047b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined *
FUN_100610304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar7 = *unaff_x20;
  puVar1 = &DAT_100aaffc0;
  local_68 = param_3;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar5 = *(long *)(puVar1 + -8);
  lVar8 = *(long *)(lVar5 + 0x40);
  puVar1 = &DAT_100aaff00;
  FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
  _swift_allocObject();
  puVar2 = &DAT_100aaff08;
  FUN_100004bb4(&DAT_100aaff08,&DAT_100848428);
  _swift_allocObject();
  FUN_10061047c();
  *(undefined **)(puVar1 + 0x10) = puVar2;
  FUN_100607210(param_2,auStack_70 + -(lVar8 + 0xfU & 0xfffffffffffffff0));
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar4 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar6 = lVar8 + uVar4 + 7 & 0xfffffffffffffff8;
  puVar2 = &DAT_1009df190;
  _swift_allocObject(&DAT_1009df190,uVar6 + 0x18,uVar3 | 7);
  *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(lVar7 + 0x50);
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  FUN_100607324(auStack_70 + -(lVar8 + 0xfU & 0xfffffffffffffff0),puVar2 + uVar4);
  *(undefined8 *)(puVar2 + uVar6) = local_68;
  *(undefined8 *)((long)(puVar2 + uVar6) + 8) = param_4;
  *(undefined **)(puVar2 + uVar6 + 0x10) = puVar1;
  _swift_retain(param_4);
  _swift_retain(puVar1);
  FUN_100610788(FUN_1006116d8,puVar2);
  _swift_release(puVar2);
  return puVar1;
}

