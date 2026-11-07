// rea decompile_all
// name: FUN_1004b53ac
// address: 0x1004b53ac
// body: available
// range: 0x1004b53ac-0x1004b54c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004b53ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long unaff_x20;
  long unaff_x21;
  
  bVar1 = *(byte *)(unaff_x20 + 0x60);
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        FUN_1004b54c8();
      }
      else {
        FUN_1004b5550();
      }
    }
    else if (bVar1 == 2) {
      FUN_1004b55e4();
    }
    else {
      FUN_1004b5678();
    }
  }
  else if (bVar1 < 6) {
    if (bVar1 == 4) {
      FUN_1004b5704();
    }
    else {
      FUN_1004b5790();
    }
  }
  else if (bVar1 == 6) {
    FUN_1004b5824();
  }
  else {
    if (bVar1 != 7) goto LAB_1004b5480;
    FUN_1004b58b8();
  }
  if (unaff_x21 != 0) {
    return;
  }
LAB_1004b5480:
  FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),param_2,
                param_3);
  return;
}

