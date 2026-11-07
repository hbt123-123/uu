// rea decompile_all
// name: FUN_10048f0a0
// address: 0x10048f0a0
// body: available
// range: 0x10048f0a0-0x10048f1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10048f0a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  uint *unaff_x20;
  long unaff_x21;
  code *pcVar5;
  long local_50;
  undefined1 local_48;
  
  plVar4 = &local_50;
  puVar3 = (undefined1 *)(ulong)*unaff_x20;
  if ((*unaff_x20 == 0) || ((**(code **)(param_3 + 0x18))(puVar3,1,param_2,param_3), unaff_x21 == 0)
     ) {
    if (*(long *)(unaff_x20 + 2) == 0) {
      lVar2 = *(long *)(unaff_x20 + 6);
      plVar4 = (long *)puVar3;
      lVar1 = local_50;
    }
    else {
      local_48 = (undefined1)unaff_x20[4];
      pcVar5 = *(code **)(param_3 + 0x80);
      local_50 = *(long *)(unaff_x20 + 2);
      FUN_100493638();
      (*pcVar5)(&local_50,2,&DAT_1009c5df0,puVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
      lVar2 = *(long *)(unaff_x20 + 6);
      lVar1 = local_50;
    }
    local_50 = lVar2;
    if (local_50 != 0) {
      local_48 = (undefined1)unaff_x20[8];
      pcVar5 = *(code **)(param_3 + 0x80);
      FUN_100493678();
      (*pcVar5)(&local_50,3,&DAT_1009c5e80,plVar4,param_2,param_3);
      lVar1 = local_50;
      if (unaff_x21 != 0) {
        return;
      }
    }
    local_50 = lVar1;
    FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 10),*(undefined8 *)(unaff_x20 + 0xc),param_2,
                  param_3);
  }
  return;
}

