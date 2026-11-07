// rea decompile_all
// name: FUN_1003322e4
// address: 0x1003322e4
// body: available
// range: 0x1003322e4-0x100332397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100332394 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003322e4(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar3 = 0;
  FUN_1002f9800();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = (undefined8 *)(unaff_x20 + (uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff)));
  puVar4 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,lVar3);
  iVar2 = (int)puVar4;
  if (iVar2 != 2) {
    if (iVar2 == 1) {
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar1,lVar3);
    }
    else if (iVar2 == 0) {
      FUN_100006cdc(*puVar1,puVar1[1]);
    }
  }
  _swift_deallocObject();
  return;
}

