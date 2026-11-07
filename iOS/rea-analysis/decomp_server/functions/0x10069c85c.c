// rea decompile_all
// name: FUN_10069c85c
// address: 0x10069c85c
// body: available
// range: 0x10069c85c-0x10069c90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069c85c(undefined8 *param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_38 [2];
  char local_21;
  
  FUN_10069cde4(local_38);
  FUN_10069cfb0();
  pppuVar2 = local_38;
  FUN_10069c180(pppuVar2,&DAT_100b2c4f8);
  if ((int)pppuVar2 != 0) {
    FUN_10069d0b4();
    pppuVar2 = local_38;
    FUN_10069c180(pppuVar2,&DAT_100b2c510);
    if ((int)pppuVar2 != 0) {
      pppuVar2 = local_38;
      std::string::rfind((char)pppuVar2,0x2e);
      if (pppuVar2 != (undefined8 ***)0xffffffffffffffff) {
        pppuVar1 = (undefined8 ***)local_38[0];
        if (-1 < local_21) {
          pppuVar1 = local_38;
        }
        FUN_1006928dc(param_1,(long)pppuVar1 + (long)pppuVar2);
        goto LAB_10069c8ec;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_10069c8ec:
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}

