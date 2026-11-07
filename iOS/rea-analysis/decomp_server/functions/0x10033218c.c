// rea decompile_all
// name: FUN_10033218c
// address: 0x10033218c
// body: available
// range: 0x10033218c-0x1003322e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003322d0) */

void FUN_10033218c(undefined8 param_1,undefined8 param_2,code *param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  (*param_3)();
  lVar1 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar1 + 0x40);
  FUN_100082394(param_2,auStack_90 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_3);
  uVar3 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar6 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  _swift_allocObject(param_4,uVar6 + lVar7,uVar3 | 7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  FUN_1000823d8(auStack_90 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_4 + uVar6,param_3);
  puVar2 = &DAT_1009b2260;
  _swift_allocObject(&DAT_1009b2260,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(long *)(puVar2 + 0x18) = param_4;
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10);
  _swift_retain(param_1);
  _os_unfair_lock_lock(uVar5);
  _swift_beginAccess(lVar1 + 0x18,auStack_78,0,0);
  uVar4 = *(undefined8 *)(lVar1 + 0x18);
  local_80 = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  FUN_10032de9c(&local_80,puVar2);
  _swift_bridgeObjectRelease(uVar4);
  _os_unfair_lock_unlock(uVar5);
  _swift_release(puVar2);
  return;
}

