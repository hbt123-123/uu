// rea decompile_all
// name: FUN_1004ee514
// address: 0x1004ee514
// body: available
// range: 0x1004ee514-0x1004ee603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ee514(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long local_50;
  undefined1 local_48;
  
  if (*unaff_x20 != 0) {
    local_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    local_50 = *unaff_x20;
    FUN_1004f0e68();
    (*pcVar2)(&local_50,1,&DAT_1009cd5d0,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_1004ee604();
  if (unaff_x21 == 0) {
    if (*(int *)((long)unaff_x20 + 0xc) != 0) {
      (**(code **)(param_3 + 0x18))(*(int *)((long)unaff_x20 + 0xc),3,param_2,param_3);
    }
    FUN_1004ee68c();
    FUN_10056301c(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}

