// rea decompile_all
// name: FUN_100465c44
// address: 0x100465c44
// body: available
// range: 0x100465c44-0x100465d27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100465c44(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  long local_60;
  undefined1 local_58;
  
  plVar2 = &local_60;
  puVar1 = param_1;
  if (*unaff_x20 != 0) {
    local_58 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    local_60 = *unaff_x20;
    FUN_100466da8();
    (*pcVar4)(&local_60,1,&DAT_1009c4df8,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar3 = unaff_x20[2];
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar4 = *(code **)(param_3 + 0x118);
    FUN_100466de8();
    (*pcVar4)(lVar3,2,&DAT_1009c4cc0,puVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10056301c(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  return;
}

