// rea decompile_all
// name: FUN_1006a97f0
// address: 0x1006a97f0
// body: available
// range: 0x1006a97f0-0x1006a98c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a97f0(int param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *local_40;
  char local_38;
  
  if (param_1 == 0) {
    FUN_1006a44d8();
  }
  else {
    FUN_1006a4500();
  }
  FUN_1006a9544();
  local_40 = &DAT_100b2c678;
  local_38 = '\0';
  FUN_100696f64(&local_40);
  FUN_1006a956c();
  puVar4 = DAT_100b2c660;
  if (DAT_100b2c660 != &DAT_100b2c668) {
    do {
      FUN_100696688(puVar4[7]);
      if (param_1 == 0) {
        FUN_1006a0e60();
      }
      else {
        FUN_1006a0e6c();
      }
      puVar1 = (undefined8 *)puVar4[1];
      if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
        do {
          puVar3 = (undefined8 *)puVar4[2];
          bVar2 = (undefined8 *)*puVar3 != puVar4;
          puVar4 = puVar3;
        } while (bVar2);
      }
      else {
        do {
          puVar3 = puVar1;
          puVar1 = (undefined8 *)*puVar3;
        } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
      }
      puVar4 = puVar3;
    } while (puVar3 != &DAT_100b2c668);
  }
  if (local_38 == '\x01') {
    FUN_1006972a0(&local_40);
  }
  return;
}

