// rea decompile_all
// name: FUN_100332908
// address: 0x100332908
// body: available
// range: 0x100332908-0x100332a7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100332a6c) */

void FUN_100332908(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar5 = param_4;
  local_90[0] = param_7;
  FUN_100004bb4(param_4,param_5);
  lVar7 = *(long *)(lVar5 + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  lVar6 = (long)local_90 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_3,lVar6,param_4,param_5);
  uVar2 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
  _swift_allocObject(param_6,uVar8 + lVar5,uVar2 | 7);
  *(undefined8 *)(param_6 + 0x10) = param_1;
  *(undefined8 *)(param_6 + 0x18) = param_2;
  FUN_1000a00a8(lVar6,param_6 + uVar8,param_4,param_5);
  puVar1 = &DAT_1009b2260;
  _swift_allocObject(&DAT_1009b2260,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = local_90[0];
  *(long *)(puVar1 + 0x18) = param_6;
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x10);
  _swift_retain(param_1);
  _os_unfair_lock_lock(uVar4);
  _swift_beginAccess(lVar5 + 0x18,auStack_78,0,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x18);
  local_80 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  FUN_10032de9c(&local_80,puVar1);
  _swift_bridgeObjectRelease(uVar3);
  _os_unfair_lock_unlock(uVar4);
  _swift_release(puVar1);
  return;
}

