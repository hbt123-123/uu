// rea decompile_all
// name: FUN_10033cbcc
// address: 0x10033cbcc
// body: available
// range: 0x10033cbcc-0x10033cc67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033cbcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  _SCNetworkReachabilitySetCallback(uVar2,0,0);
  _SCNetworkReachabilitySetDispatchQueue(uVar2,0);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar3);
  _swift_beginAccess(lVar4 + 0x18,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  uVar1 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x30) = 4;
  FUN_10007ed2c(uVar2,uVar1);
  _os_unfair_lock_unlock(uVar3);
  return;
}

