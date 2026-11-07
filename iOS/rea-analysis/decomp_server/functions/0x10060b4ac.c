// rea decompile_all
// name: FUN_10060b4ac
// address: 0x10060b4ac
// body: available
// range: 0x10060b4ac-0x10060b61b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined *
FUN_10060b4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_70;
  
  puVar1 = &DAT_100aaffc0;
  local_70 = param_5;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar8 = *(long *)(puVar1 + -8);
  lVar4 = *(long *)(lVar8 + 0x40);
  lVar9 = (long)&local_70 - (lVar4 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100aaff00;
  FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
  _swift_allocObject();
  puVar2 = &DAT_100aaff08;
  FUN_100004bb4(&DAT_100aaff08,&DAT_100848428);
  _swift_allocObject();
  FUN_10061047c();
  *(undefined **)(puVar1 + 0x10) = puVar2;
  FUN_100607210(param_2,lVar9);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar7 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar5 = lVar4 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar2 = &DAT_1009de750;
  _swift_allocObject(&DAT_1009de750,uVar5 + 0x10,uVar3 | 7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  FUN_100607324(lVar9,puVar2 + uVar7);
  *(undefined8 *)(puVar2 + uVar5) = param_3;
  *(undefined8 *)((long)(puVar2 + uVar5) + 8) = param_4;
  lVar4 = *(long *)(param_6 + 8);
  pcVar6 = *(code **)(lVar4 + 0x10);
  _swift_retain(param_4);
  _swift_retain(puVar1);
  (*pcVar6)(FUN_10060ca50,puVar2,local_70,lVar4);
  _swift_release(puVar2);
  return puVar1;
}

