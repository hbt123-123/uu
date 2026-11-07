// rea decompile_all
// name: MMKV::cryptKey
// address: 0x1003795dc
// body: available
// range: 0x1003795dc-0x10037965b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID MMKV::cryptKey(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 ******ppppppuVar2;
  undefined8 *****local_38;
  long local_30;
  char local_21;
  
  FUN_10038028c(&local_38,*(undefined8 *)(param_1 + 0x18));
  if (local_21 < '\0') {
    ppppppuVar2 = (undefined8 ******)local_38;
    if (local_30 == 0) {
      IVar1 = 0;
      goto LAB_100379640;
    }
  }
  else {
    if (local_21 == '\0') {
      return 0;
    }
    ppppppuVar2 = &local_38;
  }
  IVar1 = NSData::dataWithBytes_length_((ID)&_OBJC_CLASS___NSData,ppppppuVar2);
  if (-1 < local_21) {
    return IVar1;
  }
LAB_100379640:
  operator_delete(local_38);
  return IVar1;
}

