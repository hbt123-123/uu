// rea decompile_all
// name: FUN_10061999c
// address: 0x10061999c
// body: available
// range: 0x10061999c-0x100619ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10061999c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar1 = &DAT_100aaffc0;
  local_78 = param_5;
  uStack_70 = param_6;
  local_68 = param_2;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar4 = *(long *)(puVar1 + -8);
  lVar6 = *(long *)(lVar4 + 0x40);
  FUN_100607210(param_4,auStack_80 + -(lVar6 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  uVar7 = lVar6 + uVar5 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_1009e0160;
  _swift_allocObject(&DAT_1009e0160,uVar7 + 0x18,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  *(long *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  FUN_100607324(auStack_80 + -(lVar6 + 0xfU & 0xfffffffffffffff0),puVar1 + uVar5);
  *(undefined8 *)(puVar1 + uVar7) = local_78;
  *(undefined8 *)((long)(puVar1 + uVar7) + 8) = uStack_70;
  *(undefined8 *)(puVar1 + uVar7 + 0x10) = param_1;
  pcVar3 = *(code **)(param_8 + 0x10);
  _swift_retain(uStack_70);
  _swift_retain(param_1);
  (*pcVar3)(FUN_10061bffc,puVar1,param_7,param_8);
  _swift_release(puVar1);
  return;
}

