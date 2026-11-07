// rea decompile_all
// name: FUN_1005019c4
// address: 0x1005019c4
// body: available
// range: 0x1005019c4-0x100501adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005019c4(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_2 + -8);
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = &stack0xffffffffffffffa0 + -uVar3;
  uVar3 = (long)puVar4 - uVar3;
  (**(code **)(param_3 + 0x10))(uVar3,param_2,param_3);
  uVar1 = uVar3;
  FUN_100501730(uVar3,*(undefined8 *)(unaff_x20 + 0x28),param_2,param_3);
  if ((unaff_x21 == 0) && ((uVar1 & 1) != 0)) {
    (**(code **)(lVar5 + 0x10))(puVar4,uVar3,param_2);
    uVar2 = 0;
    __sSaMa(0,param_2);
    __sSa6appendyyxnF(puVar4,uVar2);
    (**(code **)(lVar5 + 8))(uVar3,param_2);
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  else {
    (**(code **)(lVar5 + 8))(uVar3,param_2);
  }
  return;
}

