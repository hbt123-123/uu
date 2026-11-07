// rea decompile_all
// name: SentryCrashDefaultBinaryImageProvider::getBinaryImage:isCrash:
// address: 0x10079a320
// body: available
// range: 0x10079a320-0x10079a33b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079a338 to 0x10079a81c FUN_10079a81c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x1c bytes */

void SentryCrashDefaultBinaryImageProvider::getBinaryImage_isCrash_
               (AnonymousStructure6 *__return_storage_ptr__,ID param_1,SEL param_2,long_long param_3
               ,bool param_4)

{
  __return_storage_ptr__->field5_0x28 = 0;
  __return_storage_ptr__->field6_0x2c = 0;
  __return_storage_ptr__->field4_0x20 = (char *)0x0;
  __return_storage_ptr__->field8_0x38 = (char *)0x0;
  __return_storage_ptr__->field7_0x30 = (char *)0x0;
  __return_storage_ptr__->field1_0x8 = 0;
  __return_storage_ptr__->field0_0x0 = 0;
  __return_storage_ptr__->field3_0x18 = (char *)0x0;
  __return_storage_ptr__->field2_0x10 = 0;
  FUN_10079a81c(param_3,__return_storage_ptr__,param_4);
  return;
}

