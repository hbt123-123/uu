// rea decompile_all
// name: FUN_10060913c
// address: 0x10060913c
// body: available
// range: 0x10060913c-0x100609323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined *
FUN_10060913c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar1 = &DAT_100aaffc0;
  local_7c = param_3;
  local_78 = param_4;
  local_70 = param_5;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar6 = *(long *)(puVar1 + -8);
  lVar10 = *(long *)(lVar6 + 0x40);
  FUN_100609324();
  _swift_allocObject();
  puVar2 = &DAT_100aaff00;
  FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
  _swift_allocObject();
  puVar3 = &DAT_100aaff08;
  FUN_100004bb4(&DAT_100aaff08,&DAT_100848428);
  _swift_allocObject();
  FUN_10061047c();
  *(undefined **)(puVar2 + 0x10) = puVar3;
  puVar4 = &DAT_1009de638;
  _swift_allocObject(&DAT_1009de638,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10060c408;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(undefined **)(puVar1 + 0x10) = puVar2;
  *(code **)(puVar1 + 0x18) = FUN_100102840;
  *(undefined **)(puVar1 + 0x20) = puVar4;
  FUN_100607210(param_2,auStack_80 + -(lVar10 + 0xfU & 0xfffffffffffffff0));
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = lVar10 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar2 = &DAT_1009de660;
  _swift_allocObject(&DAT_1009de660,uVar9 + 0x18,uVar5 | 7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  *(long *)(puVar2 + 0x18) = param_7;
  puVar2[0x20] = (byte)local_7c & 1;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  FUN_100607324(auStack_80 + -(lVar10 + 0xfU & 0xfffffffffffffff0),puVar2 + uVar7);
  *(undefined8 *)(puVar2 + uVar9) = local_78;
  *(undefined8 *)((long)(puVar2 + uVar9) + 8) = local_70;
  *(undefined **)(puVar2 + uVar9 + 0x10) = puVar1;
  lVar6 = *(long *)(param_7 + 8);
  pcVar8 = *(code **)(lVar6 + 0x10);
  _swift_retain(local_70);
  _swift_retain(puVar1);
  _swift_retain(puVar3);
  (*pcVar8)(FUN_10060c4fc,puVar2,param_6,lVar6);
  _swift_release(puVar2);
  return puVar1;
}

