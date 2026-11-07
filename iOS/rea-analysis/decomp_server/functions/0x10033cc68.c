// rea decompile_all
// name: FUN_10033cc68
// address: 0x10033cc68
// body: available
// range: 0x10033cc68-0x10033cd17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010033cd04) */

void FUN_10033cc68(uint param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  if ((param_1 >> 1 & 1) == 0) {
    uVar1 = 3;
  }
  else if (((param_1 >> 2 & 1) == 0) ||
          ((uVar1 = 3, (param_1 & 0x28) != 0 && ((param_1 >> 4 & 1) == 0)))) {
    uVar1 = 0;
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar2);
  _swift_beginAccess(lVar3 + 0x18,auStack_48,0x21,0);
  FUN_10033cd18(lVar3 + 0x18,uVar1);
  _swift_endAccess(auStack_48);
  _os_unfair_lock_unlock(uVar2);
  return;
}

