// rea decompile_all
// name: FUN_10060ab90
// address: 0x10060ab90
// body: available
// range: 0x10060ab90-0x10060ace7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_10060ab90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_90 [8];
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar1 = &DAT_100aaffc0;
  local_88 = param_7;
  local_80 = param_3;
  local_78 = param_4;
  local_70 = param_8;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar4 = *(long *)(puVar1 + -8);
  lVar8 = *(long *)(lVar4 + 0x40);
  lVar7 = *(long *)(param_6 + 8);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,lVar7,param_5,0x100904f48,&TargetProtocolRequirement_100904f50);
  FUN_10061601c();
  FUN_100607210(param_2,auStack_90 + -(lVar8 + 0xfU & 0xfffffffffffffff0));
  uVar3 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff);
  uVar9 = lVar8 + uVar5 + 7 & 0xfffffffffffffff8;
  lVar4 = local_88;
  _swift_allocObject(local_88,uVar9 + 0x18,uVar3 | 7);
  *(undefined8 *)(lVar4 + 0x10) = param_5;
  *(long *)(lVar4 + 0x18) = param_6;
  *(undefined8 *)(lVar4 + 0x20) = param_1;
  FUN_100607324(auStack_90 + -(lVar8 + 0xfU & 0xfffffffffffffff0),lVar4 + uVar5);
  *(undefined8 *)(lVar4 + uVar9) = local_80;
  ((undefined8 *)(lVar4 + uVar9))[1] = local_78;
  *(undefined8 *)(lVar4 + uVar9 + 0x10) = uVar2;
  pcVar6 = *(code **)(lVar7 + 0x10);
  _swift_retain(local_78);
  _swift_retain(uVar2);
  (*pcVar6)(local_70,lVar4,param_5,lVar7);
  _swift_release(lVar4);
  return uVar2;
}

