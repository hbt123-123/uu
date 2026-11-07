// rea decompile_all
// name: FUN_1006a9644
// address: 0x1006a9644
// body: available
// range: 0x1006a9644-0x1006a970f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a9644(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *local_48 [2];
  char local_31;
  undefined *local_30;
  char local_28;
  
  if (param_1 != 0) {
    FUN_1006a9544();
    puVar1 = &DAT_100b2c660;
    local_30 = &DAT_100b2c678;
    local_28 = '\0';
    FUN_100696f64(&local_30);
    FUN_1006a956c();
    FUN_1006928dc(local_48,param_1);
    FUN_1006a99e8(&DAT_100b2c660,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    FUN_1006a956c();
    if (puVar1 != &DAT_100b2c668) {
      uVar2 = puVar1[7];
      FUN_100696688(uVar2);
      FUN_10069f534();
      FUN_100696450(uVar2);
      FUN_1006a956c();
      FUN_1006a9f4c(&DAT_100b2c660,puVar1);
    }
    if (local_28 == '\x01') {
      FUN_1006972a0(&local_30);
    }
  }
  return;
}

