// rea decompile_all
// name: FUN_1001aef24
// address: 0x1001aef24
// body: available
// range: 0x1001aef24-0x1001aefff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001aeffc to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001aef24(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001af000,0,0xd000000000000095,0x8000000100877f50,0x28646e6570737573,
                0xe900000000000029,0x4b,0);
  lVar1 = _TtC14UURemoteServer15StreamerManager::recreateRoomTask;
  lVar3 = *(long *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::recreateRoomTask);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    _swift_retain(lVar3);
    __sScT6cancelyyF();
    _swift_release(lVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _swift_release(uVar2);
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::dispatcher) = 0;
  return 0;
}

