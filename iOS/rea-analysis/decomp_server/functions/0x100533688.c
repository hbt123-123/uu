// rea decompile_all
// name: FUN_100533688
// address: 0x100533688
// body: available
// range: 0x100533688-0x1005336f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005336e8 to 0x100536178 FUN_100536178 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100533688(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  FUN_100535660();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 == 0) {
      return (undefined *)0x0;
    }
  }
  else if (lVar2 == unaff_x20[1] - lVar3) {
    return (undefined *)0x0;
  }
  if (*(char *)(lVar3 + lVar2) != 'n') {
    return (undefined *)0x0;
  }
  puVar1 = &DAT_100aaa100;
  FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
  _swift_initStaticObject();
  FUN_100536178();
  return puVar1;
}

