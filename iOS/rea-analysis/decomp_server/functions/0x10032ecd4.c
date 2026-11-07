// rea decompile_all
// name: FUN_10032ecd4
// address: 0x10032ecd4
// body: available
// range: 0x10032ecd4-0x10032ede3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010032edd0) */

void FUN_10032ecd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  _swift_allocObject(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  *(undefined8 *)(param_4 + 0x20) = param_3;
  puVar1 = &DAT_1009b2260;
  _swift_allocObject(&DAT_1009b2260,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(long *)(puVar1 + 0x18) = param_4;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar2);
  _swift_beginAccess(lVar3 + 0x18,auStack_68,0,0);
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  local_70 = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  FUN_10032de9c(&local_70,puVar1);
  _swift_bridgeObjectRelease(uVar4);
  _os_unfair_lock_unlock(uVar2);
  _swift_release(puVar1);
  return;
}

