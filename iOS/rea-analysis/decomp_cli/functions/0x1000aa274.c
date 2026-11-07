// rea decompile_all
// name: FUN_1000aa274
// address: 0x1000aa274
// body: available
// range: 0x1000aa274-0x1000aa303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000aa274(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100104d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100104d30;
  FUN_10000ec94(&DAT_100104d30,&DAT_1000d6998);
  puVar2 = &DAT_100104d40;
  FUN_10002cf3c(&DAT_100104d40,&DAT_100104d48,&USHORT_1000d6ae0,PTR___sSayxGSKsMc_1000f0378);
  puVar3 = PTR___ss15LazyMapSequenceVyxq_GSKsSKRzrlMc_1000f04f0;
  local_28 = puVar2;
  _swift_getWitnessTable(PTR___ss15LazyMapSequenceVyxq_GSKsSKRzrlMc_1000f04f0,puVar1,&local_28);
  DAT_100104d38 = puVar3;
  return;
}

