// rea decompile_all
// name: FUN_1006098bc
// address: 0x1006098bc
// body: available
// range: 0x1006098bc-0x100609a33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_1006098bc(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_74;
  undefined8 local_70;
  
  local_88 = param_9;
  puVar1 = &DAT_100aaffc0;
  uStack_80 = param_7;
  local_74 = param_3;
  local_70 = param_4;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar8 = *(long *)(puVar1 + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  lVar4 = *(long *)(param_8 + 8);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,lVar4,param_6,0x100904f48,&TargetProtocolRequirement_100904f50);
  FUN_10061601c();
  FUN_100607210(param_2,auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0));
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar3 + 0x48 & (uVar3 ^ 0xffffffffffffffff);
  uVar7 = lVar6 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_1009de6b0;
  _swift_allocObject(&DAT_1009de6b0,uVar7 + 0x10,uVar3 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = uStack_80;
  *(long *)(puVar1 + 0x20) = param_8;
  *(undefined8 *)(puVar1 + 0x28) = local_88;
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  puVar1[0x38] = (byte)local_74 & 1;
  *(undefined8 *)(puVar1 + 0x40) = param_1;
  FUN_100607324(auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0),puVar1 + uVar9);
  *(undefined8 *)(puVar1 + uVar7) = local_70;
  *(undefined8 *)((long)(puVar1 + uVar7) + 8) = param_5;
  pcVar5 = *(code **)(lVar4 + 0x10);
  _swift_retain(param_5);
  _swift_retain(uVar2);
  (*pcVar5)(FUN_10060c64c,puVar1,param_6,lVar4);
  _swift_release(puVar1);
  return uVar2;
}

