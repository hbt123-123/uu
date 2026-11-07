// rea decompile_all
// name: FUN_1004203e0
// address: 0x1004203e0
// body: available
// range: 0x1004203e0-0x1004204bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004203e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long local_50;
  undefined1 local_48;
  
  if (((*unaff_x20 == 0) ||
      ((**(code **)(param_3 + 0x28))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     ((uVar1 = (ulong)(uint)unaff_x20[1], unaff_x20[1] == 0 ||
      ((**(code **)(param_3 + 0x28))(uVar1,2,param_2,param_3), unaff_x21 == 0)))) {
    if (*(long *)(unaff_x20 + 2) != 0) {
      local_48 = (undefined1)unaff_x20[4];
      pcVar2 = *(code **)(param_3 + 0x80);
      local_50 = *(long *)(unaff_x20 + 2);
      FUN_10042dad0();
      (*pcVar2)(&local_50,3,&DAT_1009c0860,uVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 6),*(undefined8 *)(unaff_x20 + 8),param_2,
                  param_3);
  }
  return;
}

