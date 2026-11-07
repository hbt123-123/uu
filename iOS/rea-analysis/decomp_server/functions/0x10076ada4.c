// rea decompile_all
// name: SentryPredicateDescriptor::predicateOperatorTypeDescription:
// address: 0x10076ada4
// body: available
// range: 0x10076ada4-0x10076ae6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID SentryPredicateDescriptor::predicateOperatorTypeDescription_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  
  switch(param_3) {
  case 0:
    return 0x100a0d010;
  case 1:
    return 0x100a0d030;
  case 2:
    return 0x100a0d050;
  case 3:
    return 0x100a0d070;
  case 4:
    return 0x100a0d090;
  case 5:
    return 0x100a0d0b0;
  case 6:
    return 0x100a0d0d0;
  case 7:
    return 0x100a0d190;
  case 8:
    return 0x100a0d0f0;
  case 9:
    return 0x100a0d110;
  case 10:
    return 0x100a0d130;
  }
  pcVar1 = &cf_BETWEEN;
  if (param_3 != 100) {
    pcVar1 = (cfstringStruct *)0x0;
  }
  pcVar2 = &cf_CONTAINS;
  if (param_3 != 99) {
    pcVar2 = pcVar1;
  }
  return (ID)pcVar2;
}

