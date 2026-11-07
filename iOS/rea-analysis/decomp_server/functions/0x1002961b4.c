// rea decompile_all
// name: FUN_1002961b4
// address: 0x1002961b4
// body: available
// range: 0x1002961b4-0x10029631f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010029626c) */

void FUN_1002961b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  FUN_10003f030(unaff_x20 + 0x28,uVar1);
  (**(code **)(lVar2 + 8))(param_2,param_3,uVar1,lVar2);
  if (unaff_x21 == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    FUN_10003f030();
    (**(code **)(lVar2 + 8))
              (param_1,*(undefined8 *)(param_4 + 0x10),param_2,param_3,
               *(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),uVar1,lVar2);
    FUN_100006cdc(param_2,param_3);
  }
  return;
}

