// rea decompile_all
// name: FUN_10030d914
// address: 0x10030d914
// body: available
// range: 0x10030d914-0x10030d9c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10030d9c0 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030d914(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  puVar2 = &DAT_100a833a0;
  FUN_100004bb4(&DAT_100a833a0,&DAT_100817880);
  uVar5 = (ulong)*(byte *)(*(long *)(puVar2 + -8) + 0x50);
  uVar5 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(puVar2 + -8) + 0x40);
  lVar1 = unaff_x20 + uVar5;
  lVar3 = 0;
  __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1,lVar3);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(puVar2 + 0x40) + 8));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + (lVar4 + uVar5 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}

