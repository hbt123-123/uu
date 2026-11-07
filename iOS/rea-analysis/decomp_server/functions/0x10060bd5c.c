// rea decompile_all
// name: FUN_10060bd5c
// address: 0x10060bd5c
// body: available
// range: 0x10060bd5c-0x10060bedf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined *
FUN_10060bd5c(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  long local_78;
  undefined8 local_70;
  
  puVar1 = &DAT_100aaffc0;
  local_78 = param_7;
  local_70 = param_6;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar8 = *(long *)(puVar1 + -8);
  lVar5 = *(long *)(lVar8 + 0x40);
  puVar1 = &DAT_100ab0268;
  FUN_100004bb4(&DAT_100ab0268,&DAT_1008485b8);
  _swift_allocObject();
  puVar2 = &DAT_100ab0270;
  FUN_100004bb4(&DAT_100ab0270,&DAT_1008485c0);
  _swift_allocObject();
  FUN_1006105c8();
  *(undefined **)(puVar1 + 0x10) = puVar2;
  FUN_100607210(param_2,auStack_80 + -(lVar5 + 0xfU & 0xfffffffffffffff0));
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar4 = uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff);
  uVar6 = lVar5 + uVar4 + 7 & 0xfffffffffffffff8;
  puVar2 = &DAT_1009de778;
  _swift_allocObject(&DAT_1009de778,uVar6 + 0x10,uVar3 | 7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar2[0x18] = param_3 & 1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  FUN_100607324(auStack_80 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar2 + uVar4);
  *(undefined8 *)(puVar2 + uVar6) = param_4;
  *(undefined8 *)((long)(puVar2 + uVar6) + 8) = param_5;
  lVar5 = *(long *)(local_78 + 8);
  pcVar7 = *(code **)(lVar5 + 0x10);
  _swift_retain(param_5);
  _swift_retain(puVar1);
  (*pcVar7)(FUN_10060cb70,puVar2,local_70,lVar5);
  _swift_release(puVar2);
  return puVar1;
}

