// rea decompile_all
// name: FUN_10076cd48
// address: 0x10076cd48
// body: available
// range: 0x10076cd48-0x10076cdf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076cdf4 to 0x10076cc8c FUN_10076cc8c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10076cd48(ID param_1,SEL param_2)

{
  void *pvVar1;
  
  pvVar1 = DAT_100b2dd70;
  DAT_100b2dd70 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_100b2dd78;
  DAT_100b2dd78 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_100b2dd80;
  DAT_100b2dd80 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_100b2dd90;
  DAT_100b2dd90 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_100b2dd98;
  DAT_100b2dd98 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_100b2dda0;
  DAT_100b2dda0 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_100b2dda8;
  DAT_100b2dda8 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_100b2ddb0;
  DAT_100b2ddb0 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  FUN_10076cc8c((ID)pvVar1,param_2);
  return;
}

