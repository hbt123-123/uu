// rea decompile_all
// name: SentrySysctl::systemBootTimestamp
// address: 0x1007a1e08
// body: available
// range: 0x1007a1e08-0x1007a1e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a1e44 to 0x1007e7d80 objc_stub::dateWithTimeIntervalSince1970: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID SentrySysctl::systemBootTimestamp(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  int iVar3;
  
  lVar1 = 1;
  iVar3 = 0x15;
  FUN_100741098(1,0x15);
  IVar2 = objc_stub::dateWithTimeIntervalSince1970_
                    ((ID)&_OBJC_CLASS___NSDate,(double)iVar3 / 1000000.0 + (double)lVar1);
  return IVar2;
}

