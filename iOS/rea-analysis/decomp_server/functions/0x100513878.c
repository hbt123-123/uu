// rea decompile_all
// name: FUN_100513878
// address: 0x100513878
// body: available
// range: 0x100513878-0x100513937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100513878(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = lVar4;
  __sSa5countSivg(lVar4,uVar3);
  if (0 < lVar2) {
    lVar2 = unaff_x20[4];
    lVar1 = unaff_x20[5];
    FUN_10003f030(unaff_x20 + 1,lVar2);
    (**(code **)(lVar1 + 8))(lVar2,lVar1);
    (**(code **)(param_4 + 400))(lVar4,lVar2,uVar3,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
  }
  return;
}

