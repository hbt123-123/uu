// rea decompile_all
// name: FUN_1006a4520
// address: 0x1006a4520
// body: available
// range: 0x1006a4520-0x1006a4597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a4520(void)

{
  undefined *local_30;
  char local_28;
  
  local_30 = &DAT_100b2c5c0;
  local_28 = '\0';
  FUN_100696f64(&local_30);
  if (DAT_100b2c618 == '\x01') {
    DAT_100b2c618 = '\0';
    FUN_10069f5c4(DAT_100b2c620);
    FUN_10069f534(DAT_100b2c620);
    DAT_100b2c620 = 0;
  }
  if (local_28 == '\x01') {
    FUN_1006972a0(&local_30);
  }
  return;
}

