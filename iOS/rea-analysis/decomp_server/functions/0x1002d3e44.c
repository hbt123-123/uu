// rea decompile_all
// name: FUN_1002d3e44
// address: 0x1002d3e44
// body: available
// range: 0x1002d3e44-0x1002d3f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002d3f30) */

void FUN_1002d3e44(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_50 [31];
  byte local_31;
  
  plVar3 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar2 = *(undefined8 *)(plVar3[2] + 0x10);
  _os_unfair_lock_lock(uVar2);
  lVar4 = *(long *)(*plVar3 + 0x60);
  _swift_beginAccess((long)plVar3 + lVar4,auStack_50,0x21,0);
  FUN_1002d1690(&local_31,(long)plVar3 + lVar4);
  _swift_endAccess(auStack_50);
  _os_unfair_lock_unlock(uVar2);
  if ((local_31 & 1) != 0) {
    lVar4 = unaff_x20 + _TtC9Alamofire7Request::delegate;
    _swift_beginAccess(lVar4,auStack_50,0,0);
    lVar1 = lVar4;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 != 0) {
      lVar4 = *(long *)(lVar4 + 8);
      _swift_getObjectType();
      (**(code **)(lVar4 + 0x18))();
      _swift_unknownObjectRelease(lVar1);
    }
  }
  return;
}

